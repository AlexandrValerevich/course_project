#include "Order.h"
#include "Auto.h"
#include "Route.h"
#include "Driver.h"
#include "Finans.h"

System::Void CargoTransportation::MyFormOrder::buttonAuto_Click(System::Object^ sender, System::EventArgs^ e)
{	
	MyFormAuto^ form = gcnew MyFormAuto();
	form->Show();
	this->Hide();
	return System::Void();
}

System::Void CargoTransportation::MyFormOrder::buttonDriver_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyFormDriver^ form = gcnew MyFormDriver();
	form->Show();
	this->Hide();
	return System::Void();
}

System::Void CargoTransportation::MyFormOrder::buttonRoute_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyFormRoute^ form = gcnew MyFormRoute();
	form->Show();
	this->Hide();
	return System::Void();
}

System::Void CargoTransportation::MyFormOrder::buttonFinans_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyFormFinans^ form = gcnew MyFormFinans();
	form->Show();
	this->Hide();
	return System::Void();
}

System::Void CargoTransportation::MyFormOrder::buttonAdd_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void CargoTransportation::MyFormOrder::buttonChange_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void CargoTransportation::MyFormOrder::buttonDelete_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void CargoTransportation::MyFormOrder::buttonExit_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
	return System::Void();
}

System::Void CargoTransportation::MyFormOrder::button_MouseHover(System::Object^ sender, System::EventArgs^ e)
{
	Button^ temp = static_cast<Button^> (sender);
	temp->BackColor = Color::FromArgb(48,48,48);
	return System::Void();
}

System::Void CargoTransportation::MyFormOrder::button_MouseLeave(System::Object^ sender, System::EventArgs^ e)
{
	Button^ temp = static_cast<Button^> (sender);
	temp->BackColor = Color::FromArgb(0, 48, 48, 48);
	return System::Void();
}

System::Void CargoTransportation::MyFormOrder::MyFormOrder_Load(System::Object^ sender, System::EventArgs^ e)
{

	//подключение к БД
	String^ connectionString = "provider=Microsoft.ACE.OLEDB.12.0;Data Source=kuafer.accdb"; //строка подключения 
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	//выполнить запрос к БД
	dbConnection->Open(); //открываем соединение

	String^ query = "SELECT * FROM order_db;"; //Текст завпрос
	OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection); //Выполнение команды
	OleDbDataReader^ dbReader = dbCommand->ExecuteReader(); //считываем данные


	//Проверяем данные
	if (!dbReader->HasRows) {
		MessageBox::Show("Ошибка");
	}
	else {
		//Заполняем данные в таблицу
		while (dbReader->Read()) {
			dataGridViewOrder->Rows->Add(dbReader[0], dbReader[1], dbReader[2], dbReader[3], dbReader[4], dbReader[5], dbReader[6], dbReader[7]);
		}
	}

	//Закрываем соединение
	dbReader->Close();
	dbConnection->Close();
	return System::Void();
}

/*System::Void CargoTransportation::MyFormOrder::dataGridViewOrder_RowStateChanged(System::Object^ sender, System::Windows::Forms::DataGridViewRowStateChangedEventArgs^ e)
{
	if (dataGridViewOrder->SelectedRows->Count == 0)
		return;

	auto row = dataGridViewOrder->SelectedRows[0];
	auto cells = row->Cells;

	textBoxId->Text        = cells[0]->Value->ToString();
	textBoxCustomer->Text  = cells[1]->Value->ToString();
	textBoxNameCargo->Text = cells[2]->Value->ToString();
	textBoxFrom->Text      = cells[3]->Value->ToString();
	textBoxTo->Text        = cells[4]->Value->ToString();
	textBoxCost->Text      = cells[5]->Value->ToString();
	textBoxWeight->Text    = cells[6]->Value->ToString();
	textBoxDistance->Text  = cells[7]->Value->ToString();
	
	return System::Void();
}*/

System::Void CargoTransportation::MyFormOrder::FillingTextBoxForm(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
	if (e->RowIndex)
		return;

	auto row = dataGridViewOrder->Rows[e->RowIndex];
	auto cells = row->Cells;

	textBoxId->Text = cells[0]->Value->ToString();
	textBoxCustomer->Text = cells[1]->Value->ToString();
	textBoxNameCargo->Text = cells[2]->Value->ToString();
	textBoxFrom->Text = cells[3]->Value->ToString();
	textBoxTo->Text = cells[4]->Value->ToString();
	textBoxCost->Text = cells[5]->Value->ToString();
	textBoxWeight->Text = cells[6]->Value->ToString();
	textBoxDistance->Text = cells[7]->Value->ToString();
	return System::Void();
}

System::Void CargoTransportation::MyFormOrder::ClearTextBoxForm(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
	textBoxId->Text = nullptr;
	textBoxCustomer->Text = nullptr;
	textBoxNameCargo->Text = nullptr;
	textBoxFrom->Text = nullptr;
	textBoxTo->Text = nullptr;
	textBoxCost->Text = nullptr;
	textBoxWeight->Text = nullptr;
	textBoxDistance->Text = nullptr;
	return System::Void();
}


