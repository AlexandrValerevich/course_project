#include "Order.h"
#include "Auto.h"
#include "Route.h"
#include "Driver.h"
#include "Finans.h"

using namespace CargoTransportation;

System::Void CargoTransportation::MyFormDriver::buttonOrder_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyFormOrder^ form = gcnew MyFormOrder();
	form->Show();
	this->Hide();
	return System::Void();
}

System::Void CargoTransportation::MyFormDriver::buttonAuto_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyFormAuto^ form = gcnew MyFormAuto();
	form->Show();
	this->Hide();
	return System::Void();
}

System::Void CargoTransportation::MyFormDriver::buttonRoute_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyFormRoute^ form = gcnew MyFormRoute();
	form->Show();
	this->Hide();
	return System::Void();
}

System::Void CargoTransportation::MyFormDriver::buttonFinans_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyFormFinans^ form = gcnew MyFormFinans();
	form->Show();
	this->Hide();
	return System::Void();
}

System::Void CargoTransportation::MyFormDriver::buttonAdd_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (!(textBoxName->Text->Length && textBoxSurname->Text->Length &&
		textBoxPatronymic->Text->Length && textBoxDriverClass->Text->Length &&
		textBoxAuto->Text->Length && textBoxStage->Text->Length &&
		textBoxAutoBase->Text->Length)) {
		MessageBox::Show("Введены не все данные!", "Внимание!");
		return;
	}

	for (int i = 0; i < dataGridViewDriver->RowCount-1; i++) {
		auto row = dataGridViewDriver->Rows[i];
		auto cells = row->Cells;
		
		if (textBoxName->Text == cells[1]->Value->ToString() &&
			textBoxSurname->Text == cells[2]->Value->ToString() &&
			textBoxPatronymic->Text == cells[3]->Value->ToString() &&
			textBoxAuto->Text == cells[6]->Value->ToString() &&
			textBoxAutoBase->Text == cells[7]->Value->ToString() 
			) 
		{
			MessageBox::Show("Такой водитель уже есть!", "Внимание!");
			return;
		}
	}

	/*Строки с id табилц*/
	String^ person_id;
	String^ partner_id;
	String^ truck_id;

	String^ connectionString = "provider=Microsoft.ACE.OLEDB.12.0;Data Source=kuafer.accdb"; //строка подключения 
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	//выполнить запрос к БД
	dbConnection->Open(); //открываем соединение

	/*Запрос на проверку есть ли у нас такой водитель?*/
	String^ query = "SELECT person_id FROM person WHERE person_name LIKE '"+textBoxName->Text+"' AND "+
		"person_surname LIKE '"+textBoxSurname->Text+"' AND person_middle_name LIKE '"+textBoxPatronymic->Text+"';"; //Текст завпрос
	OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection); //Выполнение команды

	auto dbReaderPerson= dbCommand->ExecuteReader();
	
	/*Проверяем есть ли такой водиетель*/
	if (!dbReaderPerson->HasRows) {
		/*Если нет, делаем запрос на вставку*/
		/*Закрываем соединение и создаем новое*/
		dbReaderPerson->Close();

		dbCommand->CommandText = "INSERT INTO person (person_name, person_surname, person_middle_name)" +
			"VALUES ('" + textBoxName->Text + "', '" + textBoxSurname->Text + "', '" + textBoxPatronymic->Text + "');";
		
		/*Если строка не добавилась выводим сообщение об ошибке*/
		if (dbCommand->ExecuteNonQuery() != 1) {
			MessageBox::Show("Ошибка в момент вставки!", "Внимание!");
		}

		/*Выбираем id добавленного в person*/
		dbCommand->CommandText = "SELECT MAX(person_id) FROM person;";
		dbReaderPerson = dbCommand->ExecuteReader();

		/*Считываем id*/
		dbReaderPerson->Read();
		person_id = dbReaderPerson[0]->ToString();
	}
	else {
		/*Если такая строка есть то записываем её id*/
		dbReaderPerson->Read();
		person_id = dbReaderPerson[0]->ToString();
	}
	/*Закрываем соединение*/
	dbReaderPerson->Close();

	/*Партнер*/
	if (textBoxPartner->Text->Length) {
		/*Если мы хотим добавить партнера, необходимо проверить его наличие*/
		dbCommand->CommandText = "SELECT TOP 1 person_id FROM person WHERE person_surname LIKE '"+textBoxPartner->Text+"';";
		auto dbReaderPartner = dbCommand->ExecuteReader();
		
		/*Проверяем имеется ли такой человек*/
		if (dbReaderPartner->HasRows) {
			/*Если да, то считываем его id*/
			dbReaderPartner->Read();
			partner_id = dbReaderPartner[0]->ToString();

			/*Закрываем соединение и выбираем id_driver по id_person
			для этого составляем запрос
			dbReaderPartner->Close();

			dbCommand->CommandText = "SELECT driver_id FROM driver WHERE person_id = " + partner_id + ";";
			dbReaderPartner = dbCommand->ExecuteReader();

			if (dbReaderPartner->HasRows) {
				dbReaderPartner->Read();
				partner_id = dbReaderPartner[0]->ToString();
			}
			else {
				partner_id = "";
			}*/

		}
		else {
			partner_id = "";
			MessageBox::Show("Водителя партнера с такой Фамилией нет!", "Внимание!");
		}

		/*Закрываем соединение*/
		dbReaderPartner->Close();
	}
	else{
		partner_id = "";
	}

	/*Выбираем id автомобиля по номерному знаку*/
	dbCommand->CommandText = "SELECT TOP 1 truck_id FROM truck WHERE license_plate LIKE '"+textBoxAuto->Text+"';";
	
	auto dbReaderAuto = dbCommand->ExecuteReader();

	if (dbReaderAuto->HasRows) {
		dbReaderAuto->Read();
		truck_id = dbReaderAuto[0]->ToString();
	}
	else {
		MessageBox::Show("Автомобиля с таким номером нет!", "Внимание!");
		return;
	}
	/*Закрываем Reader*/
	dbReaderAuto->Close();

	/*Вставляем нового водителя*/
	dbCommand->CommandText = "INSERT INTO driver(person_id, partner_id, truck_id, job_stage, driver_class, autobase)" +
		"VALUES (" + person_id + "," + partner_id + ", " + truck_id + "," + textBoxStage->Text + ", " + textBoxDriverClass->Text + ", '"+textBoxAutoBase->Text+"');";
	
	if (dbCommand->ExecuteNonQuery() != 1) {
		MessageBox::Show("Ошибка при вставке элемента!", "Внимание!");
	}
	else {
		MessageBox::Show("Водитель добавлен!");
	}
	
	dataGridViewDriver->Rows->Clear();
	MyFormDriver_Load(nullptr, nullptr);

	/*Добавляем созданный элемент в таблицу
	dbCommand->CommandText = "SELECT  driver_id, person_name, person_surname, person_middle_name, driver_class, partner_surname, license_plate, autobase, job_stage " +
		"FROM((SELECT driver_id, person_name, person_surname, person_middle_name, driver_class, partner_id, truck_id, autobase, job_stage FROM  driver INNER JOIN person ON(person.person_id = driver.person_id)) AS qdp " +
		"INNER JOIN(SELECT person_surname AS partner_surname, partner_id FROM partner INNER JOIN person ON person.person_id = partner.person_id) AS qpp ON(qpp.partner_id = qdp.partner_id))" +
		"INNER JOIN truck ON truck.truck_id = qdp.truck_id WHERE driver_id IN((SELECT MAX(driver_id) FROM driver));";

	auto dbReader = dbCommand->ExecuteReader();
	while (dbReader->Read()) {
		dataGridViewDriver->Rows->Add(dbReader[0], dbReader[1], dbReader[2], dbReader[3], dbReader[4], dbReader[5], dbReader[6], dbReader[7], dbReader[8]);
	}*/
	//Закрываем соединение*/
	dbConnection->Close();
	return System::Void();
}

System::Void CargoTransportation::MyFormDriver::buttonChange_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (!(textBoxId->Text->Length)) {
		MessageBox::Show("Выберете строку!", "Внимание!");
		return;
	}

	if (dataGridViewDriver->SelectedRows->Count > 1) {
		MessageBox::Show("Выберите одну строку!", "Внимание!");
		return;
	}

	if (!(textBoxName->Text->Length && textBoxSurname->Text->Length &&
		textBoxPatronymic->Text->Length && textBoxDriverClass->Text->Length &&
		textBoxAuto->Text->Length && textBoxStage->Text->Length &&
		textBoxAutoBase->Text->Length)) {
		MessageBox::Show("Введены не все данные!", "Внимание!");
		return;
	}

	String^ driver_id = textBoxId->Text;
	String^ person_id;
	String^ truck_id;
	String^ partner_id;
	

	String^ connectionString = "provider=Microsoft.ACE.OLEDB.12.0;Data Source=kuafer.accdb"; //строка подключения 
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	//выполнить запрос к БД
	dbConnection->Open(); //открываем соединение

	/*Считываем id_person, id_truck, id_partner*/
	String^ query = "SELECT * FROM driver WHERE driver_id = "+driver_id+";";//Текст завпрос
	OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection); //Выполнение команды

	auto dbReaderDriver = dbCommand->ExecuteReader();

	dbReaderDriver->Read();
	person_id  = dbReaderDriver["person_id"]->ToString();
	truck_id   = dbReaderDriver["truck_id"]->ToString();
	partner_id = dbReaderDriver["partner_id"]->ToString();
	
	/*Закрываем соединение*/
	dbReaderDriver->Close();

	dbCommand->CommandText = "UPDATE person SET person_name = '"+textBoxName->Text+"', person_surname = '"+textBoxSurname->Text+"',"+
		"person_middle_name = '"+textBoxPatronymic->Text+"' WHERE person_id = "+person_id+";";

	if (dbCommand->ExecuteNonQuery() != 1) {
		MessageBox::Show("Ошибка при обнавлении элемента таблицы!", "Внимание!");
	}

	/*Партнер*/
	if (textBoxPartner->Text->Length) {
		/*Если мы хотим добавить партнера, необходимо проверить его наличие*/
		dbCommand->CommandText = "SELECT TOP 1 person_id FROM person WHERE person_surname LIKE '" + textBoxPartner->Text + "';";
		auto dbReaderPartner = dbCommand->ExecuteReader();

		/*Проверяем имеется ли такой человек*/
		if (dbReaderPartner->HasRows) {
			/*Если да, то считываем его id*/
			dbReaderPartner->Read();
			partner_id = dbReaderPartner[0]->ToString();
		}
		else {
			MessageBox::Show("Партнера с такой Фамилией нет!", "Внимание!");
			partner_id = "";
		}

		/*Закрываем соединение*/
		dbReaderPartner->Close();
	}
	else {
		partner_id = "";
	}


	/*Выбираем id автомобиля по номерному знаку*/
	dbCommand->CommandText = "SELECT TOP 1 truck_id FROM truck WHERE license_plate LIKE '" + textBoxAuto->Text + "' ;";

	auto dbReaderAuto = dbCommand->ExecuteReader();

	if (dbReaderAuto->HasRows) {
		dbReaderAuto->Read();
		truck_id = dbReaderAuto[0]->ToString();
	}
	else {
		MessageBox::Show("Автомобиля с таким номером нет!", "Внимание!");
		return;
	}
	/*Закрываем Reader*/
	dbReaderAuto->Close();

	dbCommand->CommandText = "UPDATE driver SET person_id = " + person_id + ", truck_id = " + truck_id + ", partner_id = " + (partner_id == "" ? "0" : partner_id) + "," +
		"job_stage = " + textBoxStage->Text + ", driver_class = " + textBoxDriverClass->Text + "," +
		" autobase = '" + textBoxAutoBase->Text + "' WHERE driver_id = " + driver_id + ";";

	if (dbCommand->ExecuteNonQuery() == 1) {
		MessageBox::Show("Запрос успешно выполнен!");
	}
	else {
		MessageBox::Show("Ошибка во время обновления запроса!","Внимание!");
	}

	dataGridViewDriver->Rows->Clear();
	MyFormDriver_Load(nullptr, nullptr);

	/*
	int index = dataGridViewDriver->SelectedRows[0]->Index;
	auto row = dataGridViewDriver->Rows[index];

	row->SetValues(textBoxId->Text,
		textBoxName->Text,
		textBoxSurname->Text,
		textBoxPatronymic->Text,
		Convert::ToInt32(textBoxDriverClass->Text->Replace('.', ',')),
		(partner_id == "" ? "" : textBoxPartner->Text),
		textBoxAuto->Text,
		textBoxAutoBase->Text,
		Convert::ToInt32(textBoxStage->Text->Replace('.', ',')));
		*/
	//Закрываем соединение
	dbConnection->Close();
	return System::Void();
	return System::Void();
}

System::Void CargoTransportation::MyFormDriver::buttonDelete_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (!(textBoxId->Text->Length)) {
		MessageBox::Show("Невыбрана ни одна строка!", "Внимание!");
		return;
	}

	if (dataGridViewDriver->SelectedRows->Count > 1) {
		MessageBox::Show("Выберите одну строку!", "Внимание!");
		return;
	}

	String^ connectionString = "provider=Microsoft.ACE.OLEDB.12.0;Data Source=kuafer.accdb"; //строка подключения 
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	//выполнить запрос к БД
	dbConnection->Open(); //открываем соединение

	String^ query = "DELETE FROM driver WHERE driver_id = " + textBoxId->Text + " ;"; //Текст завпрос
	OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection); //Выполнение команды

	if (dbCommand->ExecuteNonQuery() == 1) {
		MessageBox::Show("Запись удалена!");
	}
	else {
		MessageBox::Show("Ошибка при удалени элемента из таблицу!", "Внимание!");
	}

	ClearTextBoxFormAuto();

	int index = dataGridViewDriver->SelectedRows[0]->Index;
	dataGridViewDriver->Rows->RemoveAt(index);

	//Закрываем соединение
	dbConnection->Close();
	return System::Void();
}

System::Void CargoTransportation::MyFormDriver::buttonExit_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
	return System::Void();
}

System::Void CargoTransportation::MyFormDriver::MyFormDriver_Load(System::Object^ sender, System::EventArgs^ e)
{
	//подключение к БД
	String^ connectionString = "provider=Microsoft.ACE.OLEDB.12.0;Data Source=kuafer.accdb"; //строка подключения 
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	//выполнить запрос к БД
	dbConnection->Open(); //открываем соединение

	String^ query = 
		"SELECT "+
		"driver.driver_id, "+
		"person_name, "+
		"person_surname, "+
		"person_middle_name, "+
		"driver_class, "+
		"partner_surname, "+
		"license_plate, "+
		"autobase, "+
		"job_stage, "+
		"COUNT(order_id) "+
		"FROM "+
		"( "+
			"( "+
				"( "+
					"( "+
						"SELECT "+ 
						"driver_id, "+
						"person_surname AS partner_surname "+
						"FROM "+
						"driver "+
						"INNER JOIN person ON person.person_id = driver.partner_id "+
						") AS qpartner "+
					"RIGHT JOIN driver ON driver.driver_id = qpartner.driver_id "+
					") "+
				"INNER JOIN person ON person.person_id = driver.person_id "+
				") "+
			"LEFT JOIN order_db ON order_db.driver_id = driver.driver_id "+
		") "+
		"INNER JOIN truck ON truck.truck_id = driver.truck_id "+
 		"GROUP BY "+
		"driver.driver_id, "+
		"person_name, "+
		"person_surname, "+
		"person_middle_name, "+
		"driver_class, "+
		"partner_surname, "+
		"license_plate, "+
		"autobase, "+
		"job_stage "; //Текст завпрос
	OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection); //Выполнение команды
	OleDbDataReader^ dbReader = dbCommand->ExecuteReader(); //считываем данные


	//Проверяем данные
	if (!dbReader->HasRows) {
		MessageBox::Show("Ошибка");
	}
	else {
		//Заполняем данные в таблицу
		while (dbReader->Read()) {
			dataGridViewDriver->Rows->Add(
				dbReader[0],
				dbReader[1],
				dbReader[2],
				dbReader[3],
				dbReader[4],
				dbReader[5],
				dbReader[6],
				dbReader[7],
				dbReader[8],
				dbReader[9]);
		}
	}

	//Закрываем соединение
	dbReader->Close();
	dbConnection->Close();
	return System::Void();
}

System::Void CargoTransportation::MyFormDriver::button_MouseHover(System::Object^ sender, System::EventArgs^ e)
{
	Button^ temp = static_cast<Button^> (sender);
	temp->BackColor = Color::FromArgb(48, 48, 48);
	return System::Void();
}

System::Void CargoTransportation::MyFormDriver::button_MouseLeave(System::Object^ sender, System::EventArgs^ e)
{
	Button^ temp = static_cast<Button^> (sender);
	temp->BackColor = Color::FromArgb(0, 48, 48, 48);
	return System::Void();
}

System::Void CargoTransportation::MyFormDriver::FillingTextBoxFormDriver(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
	if (dataGridViewDriver->SelectedRows->Count == 0)
		return;

	int index = dataGridViewDriver->SelectedRows[0]->Index;

	if (dataGridViewDriver->Rows->Count - 1 == index) {
		ClearTextBoxFormAuto();
		return;
	}

	auto row = dataGridViewDriver->Rows[index];
	auto cells = row->Cells;

	textBoxId->Text = cells[0]->Value->ToString();
	textBoxName->Text = cells[1]->Value->ToString();
	textBoxSurname->Text = cells[2]->Value->ToString();
	textBoxPatronymic->Text = cells[3]->Value->ToString();
	textBoxDriverClass->Text = cells[4]->Value->ToString();
	textBoxPartner->Text = cells[5]->Value->ToString();
	textBoxAuto->Text = cells[6]->Value->ToString();
	textBoxAutoBase->Text = cells[7]->Value->ToString();
	textBoxStage->Text = cells[8]->Value->ToString();
	return System::Void();
}

System::Void CargoTransportation::MyFormDriver::ClearTextBoxFormAuto()
{
	textBoxId->Text = nullptr;
	textBoxName->Text = nullptr;
	textBoxSurname->Text = nullptr;
	textBoxPatronymic->Text = nullptr;
	textBoxDriverClass->Text = nullptr;
	textBoxPartner->Text = nullptr;
	textBoxAuto->Text = nullptr;
	textBoxAutoBase->Text = nullptr;
	textBoxStage->Text = nullptr;
	return System::Void();
}
