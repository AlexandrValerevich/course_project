#include "Order.h"
#include "Auto.h"
#include "Route.h"
#include "Driver.h"
#include "Finans.h"

using namespace CargoTransportation;

System::Void CargoTransportation::MyFormRoute::buttonOrder_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyFormOrder^ form = gcnew MyFormOrder();
	form->Show();
	this->Hide();
	return System::Void();
}

System::Void CargoTransportation::MyFormRoute::buttonAuto_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyFormAuto^ form = gcnew MyFormAuto();
	form->Show();
	this->Hide();
	return System::Void();
}

System::Void CargoTransportation::MyFormRoute::buttonDriver_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyFormDriver^ form = gcnew MyFormDriver();
	form->Show();
	this->Hide();
	return System::Void();
}

System::Void CargoTransportation::MyFormRoute::buttonFinans_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyFormFinans^ form = gcnew MyFormFinans();
	form->Show();
	this->Hide();
	return System::Void();
}

System::Void CargoTransportation::MyFormRoute::buttonAdd_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void CargoTransportation::MyFormRoute::buttonChange_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (!(textBoxId->Text->Length)) {
		MessageBox::Show("Выберете строку!", "Внимание!");
		return;
	}

	if (dataGridViewRoute->SelectedRows->Count > 1) {
		MessageBox::Show("Выберите одну строку!", "Внимание!");
		return;
	}

	if (!(textBoxCity_1->Text->Length && textBoxCity_2->Text->Length &&
		textBoxDistance->Text->Length && 
		textBoxDriver->Text->Length)) {
		MessageBox::Show("Введены не все данные!", "Внимание!");
		return;
	}
	
	String^ truck_num;
	String^ order_id = textBoxId->Text;
	String^ driver_id;

	String^ connectionString = "provider=Microsoft.ACE.OLEDB.12.0;Data Source=kuafer.accdb"; //строка подключения 
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	//выполнить запрос к БД
	dbConnection->Open(); //открываем соединение

	String^ query = "SELECT driver_id FROM driver INNER JOIN person ON driver.person_id = person.person_id"+
		" WHERE person_name &' '& person_surname LIKE '"+textBoxDriver->Text+"';";//Текст завпрос
	OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection); //Выполнение команды

	auto dbReaderTruck = dbCommand->ExecuteReader();

	if (!dbReaderTruck->HasRows) {
		MessageBox::Show("Водителя с таким именем нет!", "Внимание!");

		/*Закрытие соединения*/
		dbReaderTruck->Close();
		dbConnection->Close();
		return;
	}

	/*Считываем id грузовика*/
	dbReaderTruck->Read();
	driver_id = dbReaderTruck[0]->ToString();
	dbReaderTruck->Close();

	dbCommand->CommandText = "UPDATE order_db SET driver_id = "+driver_id+", HavePartner = "+checkBoxPartner->Checked+" WHERE order_id = "+order_id+";";

	if (dbCommand->ExecuteNonQuery() == 1) {
		MessageBox::Show("Запись обновлена!");
	}
	else {
		MessageBox::Show("Ошибка при Обнавлении элемента таблицы!", "Внимание!");
	}

	dataGridViewRoute->Rows->Clear();
	MyFormRoute_Load(nullptr, nullptr);

	//Закрываем соединение*/
	dbConnection->Close();
	return System::Void();
}

System::Void CargoTransportation::MyFormRoute::buttonDelete_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void CargoTransportation::MyFormRoute::buttonExit_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
	return System::Void();
}

System::Void CargoTransportation::MyFormRoute::MyFormRoute_Load(System::Object^ sender, System::EventArgs^ e)
{
	//подключение к БД
	String^ connectionString = "provider=Microsoft.ACE.OLEDB.12.0;Data Source=kuafer.accdb"; //строка подключения 
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	//выполнить запрос к БД
	dbConnection->Open(); //открываем соединение

	String^ query = "SELECT order_id, order_departure, order_arrival, lenght, FIO, license_plate, HavePartner "+
		" FROM order_db LEFT JOIN "+
		" (SELECT person_name & ' ' & person_surname AS FIO, license_plate, driver_id "+
			" FROM(person INNER JOIN driver ON driver.person_id = person.person_id) INNER JOIN truck ON truck.truck_id = driver.truck_id) AS q ON order_db.driver_id = q.driver_id;"; //Текст завпрос
	OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection); //Выполнение команды
	OleDbDataReader^ dbReader = dbCommand->ExecuteReader(); //считываем данные


	//Проверяем данные
	if (!dbReader->HasRows) {
		MessageBox::Show("Ошибка");
	}
	else {
		//Заполняем данные в таблицу
		while (dbReader->Read()) {
			dataGridViewRoute->Rows->Add(
				dbReader[0],
				dbReader[1],
				dbReader[2],
				Convert::ToInt32(dbReader[3]),
				dbReader[4],
				dbReader[5],
				dbReader[6]);
		}
	}

	//Закрываем соединение
	dbReader->Close();
	dbConnection->Close();
	return System::Void();
}

System::Void CargoTransportation::MyFormRoute::button_MouseHover(System::Object^ sender, System::EventArgs^ e)
{
	Button^ temp = static_cast<Button^> (sender);
	temp->BackColor = Color::FromArgb(48, 48, 48);
	return System::Void();
}

System::Void CargoTransportation::MyFormRoute::button_MouseLeave(System::Object^ sender, System::EventArgs^ e)
{
	Button^ temp = static_cast<Button^> (sender);
	temp->BackColor = Color::FromArgb(0, 48, 48, 48);
	return System::Void();
}

System::Void CargoTransportation::MyFormRoute::ClearTextBoxFormRoute()
{
	textBoxId->Text = nullptr;
	textBoxCity_1->Text = nullptr;
	textBoxCity_2->Text = nullptr;
	textBoxDistance->Text = nullptr;
	textBoxDriver->Text = nullptr;
	textBoxAuto->Text = nullptr;
	checkBoxPartner->Checked = false;

	return System::Void();
}

System::Void CargoTransportation::MyFormRoute::FillingTextBoxFormRoute(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{

	if (dataGridViewRoute->SelectedRows->Count == 0)
		return;

	int index = dataGridViewRoute->SelectedRows[0]->Index;

	if (dataGridViewRoute->Rows->Count - 1 == index) {
		ClearTextBoxFormRoute();
		return;
	}

	auto row = dataGridViewRoute->Rows[index];
	auto cells = row->Cells;

	textBoxId->Text = cells[0]->Value->ToString();
	textBoxCity_1->Text = cells[1]->Value->ToString();
	textBoxCity_2->Text = cells[2]->Value->ToString();
	textBoxDistance->Text = cells[3]->Value->ToString()->Replace(',', '.');
	textBoxDriver->Text = cells[4]->Value->ToString();
	textBoxAuto->Text = cells[5]->Value->ToString();
	checkBoxPartner->Checked = static_cast<bool> (cells[6]->Value);

	return System::Void();
}
