#include "Order.h"
#include "Auto.h"
#include "Route.h"
#include "Driver.h"
#include "Finans.h"
#include "dbQuery.h"

using namespace CargoTransportation;

/*-------------------------------------КНОПКИ ПЕРЕКЛЮЧЕНИЯ МЕЖДУ ФОРМАМИ И ВЫХОД-----------------------------------*/

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

System::Void CargoTransportation::MyFormRoute::buttonExit_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
	return System::Void();
}

/*-------------------------------------КНОПКИ ADD, CHANCGE, DELETE-----------------------------------------------*/

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

	if (!(textBoxCity_1->Text->Length && 
		textBoxCity_2->Text->Length &&
		textBoxDistance->Text->Length && 
		domainUpDownAuto->Text != "Все" &&
		domainUpDownDriver->Text != "Все")) {
		MessageBox::Show("Введены не все данные!", "Внимание!");
		return;
	}

	if (Convert::ToInt32(textBoxDistance->Text) > 500 &&
		domainUpDownPartner->Text == "Все") {
		MessageBox::Show("Для маршрутов более 500км необходимо выбрать партнера!", "Внимание!");
		return;
	}

	if (domainUpDownDriver->Text == domainUpDownPartner->Text) {
		MessageBox::Show("Водитель не может быть себе партнером!", "Внимание!");
		return;
	}
	
	String^ order_id = textBoxId->Text;
	String^ driver_id = nullptr;
	String^ partner_id = nullptr;
	String^ truck_id = nullptr;

	String^ connectionString = "provider=Microsoft.ACE.OLEDB.12.0;Data Source=kuafer.accdb"; //строка подключения 
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	//выполнить запрос к БД
	dbConnection->Open(); //открываем соединение


	String^ SELECT = "driver_id";
	String^ FROM = "driver";
	String^ WHERE = "driver_passport LIKE'" + domainUpDownDriver->Text +"'";

	driver_id = SelectID(dbConnection, SELECT, FROM, WHERE);	

	if (domainUpDownPartner->Text != "Все") {
		WHERE = "driver_passport LIKE '" + domainUpDownPartner->Text + "'";
		partner_id = SelectID(dbConnection, SELECT, FROM, WHERE);
	}

	/*Считываем id грузовика*/
	SELECT = "truck_id";
	FROM = "truck";
	WHERE = "license_plate LIKE '" + domainUpDownAuto->Text +"'";
	
	truck_id = SelectID(dbConnection, SELECT, FROM, WHERE);

	String^ TABLE = "order_db";
	String^ SET = "driver_id = " + driver_id + ", truck_id = " + truck_id;
	if (!String::IsNullOrEmpty(partner_id))
		SET += ", partner_id = " + partner_id;
	WHERE = "order_id = "+order_id;
	
	if(UpdateRow(dbConnection, TABLE, SET, WHERE))
		MessageBox::Show("Запись успешно обнавлена!");
	else
		MessageBox::Show("Ошибка в момент обновления!");

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

/*-------------------------------------СОБЫТИЯ HOWER, LEAVE-----------------------------------------------*/

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

/*-------------------------------------СОБЫТИЕ ЗАГРУЗКИ ФОРМЫ И ОБРАБОТЧИКИ ТЕКСТБОКСОВ------------------------*/

System::Void CargoTransportation::MyFormRoute::MyFormRoute_Load(System::Object^ sender, System::EventArgs^ e)
{
	dataGridViewRoute->Rows->Clear();

	//подключение к БД
	String^ connectionString = "provider=Microsoft.ACE.OLEDB.12.0;Data Source=kuafer.accdb"; //строка подключения 
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	//выполнить запрос к БД
	dbConnection->Open(); //открываем соединение

	String^ SELECT = "order_id, order_departure, order_arrival , distance, driver_pas, license_plate, partner_pas";
	String^ FROM = " ((order_db LEFT JOIN (SELECT driver_id,  driver_passport AS driver_pas FROM driver) AS driver_q ON driver_q.driver_id = order_db.driver_id) ";
	FROM += "LEFT JOIN(SELECT driver_id AS partner_id, driver_passport AS partner_pas FROM driver) AS partner_q ON partner_q.partner_id = order_db.partner_id) ";
	FROM += "LEFT JOIN truck ON order_db.truck_id = truck.truck_id";
	String^ WHERE;
	auto dbReader = SelectRow(dbConnection, SELECT, FROM);

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
	dbReader->Close();

	if (domainUpDownAuto->Items->Count == 1)
	{
		SELECT = "license_plate";
		FROM = "truck";
		WHERE = "truck_id NOT IN (SELECT truck_id FROM arhive_truck)";

		dbReader = SelectRow(dbConnection, SELECT, FROM);

		while (dbReader->Read()) {
			domainUpDownAuto->Items->Add(dbReader[0]->ToString());
		}
		dbReader->Close();
	}

	if (domainUpDownDriver->Items->Count == 1) 
	{
		SELECT = "driver_passport";
		FROM = "driver";
		WHERE = "driver_id NOT IN(SELECT driver_id FROM arhive_driver)";

		dbReader = SelectRow(dbConnection, SELECT, FROM, WHERE);

		while (dbReader->Read()) {
			if (!String::IsNullOrEmpty(dbReader[0]->ToString())) {
				domainUpDownDriver->Items->Add(dbReader[0]->ToString());
				domainUpDownPartner->Items->Add(dbReader[0]->ToString());
			}
		}
		dbReader->Close();
	}
	//Закрываем соединение
	
	dbConnection->Close();
	return System::Void();
}

System::Void CargoTransportation::MyFormRoute::ClearTextBoxFormRoute()
{
	textBoxId->Text = nullptr;
	textBoxCity_1->Text = nullptr;
	textBoxCity_2->Text = nullptr;
	textBoxDistance->Text = nullptr;
	domainUpDownAuto->Text = domainUpDownAuto->Items[0]->ToString();
	domainUpDownDriver->Text = domainUpDownDriver->Items[0]->ToString();
	domainUpDownPartner->Text = domainUpDownPartner->Items[0]->ToString();

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
	domainUpDownDriver->Text = String::IsNullOrEmpty(cells[4]->Value->ToString()) ? "Все" : cells[4]->Value->ToString();
	domainUpDownAuto->Text = String::IsNullOrEmpty(cells[5]->Value->ToString()) ? "Все" : cells[5]->Value->ToString();
	domainUpDownPartner->Text = String::IsNullOrEmpty(cells[6]->Value->ToString()) ? "Все" : cells[6]->Value->ToString();

	return System::Void();
}

System::Void CargoTransportation::MyFormRoute::checkBoxPartner_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (checkBoxPartner->Checked) {
		for (int i = 0; i < dataGridViewRoute->Rows->Count - 1; i++)
			if (!String::IsNullOrEmpty(dataGridViewRoute->Rows[i]->Cells["Partner"]->Value->ToString()))
				dataGridViewRoute->Rows[i]->Visible = false;
	}
	else {
		for (int i = 0; i < dataGridViewRoute->Rows->Count - 1; i++)
				dataGridViewRoute->Rows[i]->Visible = true;
	}
	return System::Void();
}
