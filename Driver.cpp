#include "Order.h"
#include "Auto.h"
#include "Route.h"
#include "Driver.h"
#include "Finans.h"
#include "dbQuery.h"

using namespace CargoTransportation;

/*-------------------------------------КНОПКИ ПЕРЕКЛЮЧЕНИЯ МЕЖДУ ФОРМАМИ И ВЫХОД-----------------------------------------------*/

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

System::Void CargoTransportation::MyFormDriver::buttonExit_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
	return System::Void();
}

/*-------------------------------------КНОПКИ ADD, CHANCGE, DELETE-----------------------------------------------*/

System::Void CargoTransportation::MyFormDriver::buttonAdd_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (!(textBoxName->Text->Length &&
		textBoxSurname->Text->Length &&
		textBoxPatronymic->Text->Length &&
		textBoxDriverClass->Text->Length &&
		textBoxStage->Text->Length &&
		textBoxAutoBase->Text->Length &&
		textBoxPassport->Text->Length)) {
		MessageBox::Show("Введены не все данные!", "Внимание!");
		return;
	}

	//Проверка на отсутсвие повторяющихся записей
	for (int i = 0; i < dataGridViewDriver->RowCount-1; i++) {
		auto row = dataGridViewDriver->Rows[i];
		auto cells = row->Cells;
		
		if (textBoxName->Text == cells[1]->Value->ToString() &&
			textBoxSurname->Text == cells[2]->Value->ToString() &&
			textBoxPatronymic->Text == cells[3]->Value->ToString() &&
			domainUpDownAuto->Text == cells[5]->Value->ToString() &&
			textBoxAutoBase->Text == cells[6]->Value->ToString() &&
			textBoxPassport->Text == cells[7]->Value->ToString()
			) 
		{
			MessageBox::Show("Такой водитель уже есть!", "Внимание!");
			return;
		}
	}

	/*Строки с id таблиц*/
	String^ Name = "'" + textBoxName->Text + "'";
	String^ Surname = "'" + textBoxSurname->Text + "'";
	String^ Patronymic = "'" + textBoxPatronymic->Text + "'";
	String^ Autobase = "'" + textBoxAutoBase->Text + "'";
	String^ Passport = "'" + textBoxPassport->Text + "'";
	String^ DriverClass = textBoxDriverClass->Text;
	String^ DriverStage = textBoxStage->Text;

	String^ connectionString = "provider=Microsoft.ACE.OLEDB.12.0;Data Source=kuafer.accdb"; //строка подключения 
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	//выполнить запрос к БД
	dbConnection->Open(); //открываем соединение

	String^ TABLE = "driver";
	String^ COLUMN = "driver_name, driver_surname, driver_middle_name,driver_class, autobase, job_stage, driver_passport";
	String^ VALUES =
		Name +
		", " + Surname +
		", " + Patronymic +
		", " + DriverClass +
		", " + Autobase +
		", " + DriverStage +
		", " + Passport;

	if (InsertRow(dbConnection, TABLE, COLUMN, VALUES))
		MessageBox::Show("Запись успешно добавлена!");
	else
		MessageBox::Show("Ошибка в момент заполнения!");
	
	MyFormDriver_Load(nullptr, nullptr);

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

	if (!(textBoxName->Text->Length &&
		textBoxSurname->Text->Length &&
		textBoxPatronymic->Text->Length &&
		textBoxDriverClass->Text->Length &&
		textBoxStage->Text->Length &&
		textBoxAutoBase->Text->Length &&
		textBoxPassport->Text->Length)) {
		MessageBox::Show("Введены не все данные!", "Внимание!");
		return;
	}
	String^ id          = textBoxId->Text;
	String^ Name        = "'" + textBoxName->Text + "'";
	String^ Surname     = "'" + textBoxSurname->Text + "'";
	String^ Patronymic  = "'" + textBoxPatronymic->Text + "'";
	String^ Autobase    = "'" + textBoxAutoBase->Text + "'";
	String^ Passport    = "'" + textBoxPassport->Text + "'";
	String^ DriverClass = textBoxDriverClass->Text;
	String^ DriverStage = textBoxStage->Text;

	String^ connectionString = "provider=Microsoft.ACE.OLEDB.12.0;Data Source=kuafer.accdb"; //строка подключения 
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	//выполнить запрос к БД
	dbConnection->Open(); //открываем соединение

	String^ TABLE = "driver";
	String^ WHERE = "driver_id = " + id;
	String^ SET = 
		"driver_name = " + Name +
		", driver_surname = " + Surname +
		", driver_middle_name = " + Patronymic +
		", driver_class = " + DriverClass +
		", autobase = " + Autobase +
		", job_stage = " + DriverStage +
		", driver_passport = " + Passport;

	if(UpdateRow(dbConnection, TABLE, SET, WHERE))
		MessageBox::Show("Запись успешно обнавлена!");
	else
		MessageBox::Show("Ошибка в момент обновления!");

	MyFormDriver_Load(nullptr, nullptr);

	//Закрываем соединение
	dbConnection->Close();
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

	String^ id = textBoxId->Text;

	String^ connectionString = "provider=Microsoft.ACE.OLEDB.12.0;Data Source=kuafer.accdb"; //строка подключения 
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	//выполнить запрос к БД
	dbConnection->Open(); //открываем соединение

	String^ TABLE = "arhive_driver";
	String^ COLUMN = "driver_id";
	String^ VALUES = id;

	if(InsertRow(dbConnection, TABLE, COLUMN, VALUES))
		MessageBox::Show("Запись удалена!");
	else 
		MessageBox::Show("Ошибка при удалени элемента из таблицу!", "Внимание!");

	ClearTextBoxFormAuto();
	MyFormDriver_Load(nullptr, nullptr);

	//Закрываем соединение
	dbConnection->Close();
	return System::Void();
}

/*-------------------------------------СОБЫТИЯ HOWER, LEAVE-----------------------------------------------*/

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

/*-------------------------------------СОБЫТИЕ ЗАГРУЗКИ ФОРМЫ И ОБРАБОТЧИКИ ТЕКСТБОКСОВ-----------------------------------------------*/

System::Void CargoTransportation::MyFormDriver::MyFormDriver_Load(System::Object^ sender, System::EventArgs^ e)
{
	dataGridViewDriver->Rows->Clear();
	//подключение к БД
	String^ connectionString = "provider=Microsoft.ACE.OLEDB.12.0;Data Source=kuafer.accdb"; //строка подключения 
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	//выполнить запрос к БД
	dbConnection->Open(); //открываем соединение

	String^ SELECT = "driver.driver_id, driver_name, driver_surname, driver_middle_name,driver_class, license_plate, autobase, job_stage, driver_passport, COUNT(order_id) AS Заказов";
	String^ FROM = "(driver LEFT JOIN order_db ON driver.driver_id = order_db.driver_id) LEFT JOIN truck ON order_db.truck_id = truck.truck_id";
	String^ GROUP_BY = "driver.driver_id, driver_name, driver_surname, driver_middle_name,driver_class, license_plate, autobase, job_stage, driver_passport";
	String^ ORDER_BY = "10";
	String^ WHERE = "driver.driver_id NOT IN (SELECT driver_id FROM arhive_driver)";
	OleDbDataReader^ dbReader = SelectRow(dbConnection, SELECT, FROM, WHERE, ORDER_BY, GROUP_BY);

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

	SELECT = "license_plate";
	FROM = "truck";

	dbReader = SelectRow(dbConnection, SELECT, FROM);

	while (dbReader->Read()) {
		domainUpDownAuto->Items->Add(dbReader[0]->ToString());
	}

	dbConnection->Close();
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
	domainUpDownAuto->Text = cells[5]->Value->ToString();
	textBoxAutoBase->Text = cells[6]->Value->ToString();
	textBoxStage->Text = cells[7]->Value->ToString();
	return System::Void();
}

System::Void CargoTransportation::MyFormDriver::ClearTextBoxFormAuto()
{
	textBoxId->Text = nullptr;
	textBoxName->Text = nullptr;
	textBoxSurname->Text = nullptr;
	textBoxPatronymic->Text = nullptr;
	textBoxDriverClass->Text = nullptr;
	domainUpDownAuto->Text = domainUpDownAuto->Items[0]->ToString();
	textBoxAutoBase->Text = nullptr;
	textBoxStage->Text = nullptr;
	return System::Void();
}

System::Void CargoTransportation::MyFormDriver::domainUpDownAuto_SelectedItemChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (dataGridViewDriver->SelectedRows->Count == 1)
		return;

	auto rows = dataGridViewDriver->Rows;

	for (int i = 0; i < rows->Count - 1; i++) {
		rows[i]->Visible = true;
	}

	if (domainUpDownAuto->Text != "Все")
		for (int i = 0; i < rows->Count - 1; i++) 
			if(rows[i]->Cells["truck_num"]->Value != domainUpDownAuto->Text)
				rows[i]->Visible = false;
		
	
	return System::Void();
}
