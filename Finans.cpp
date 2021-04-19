#include "Order.h"
#include "Auto.h"
#include "Route.h"
#include "Driver.h"
#include "Finans.h"

using namespace CargoTransportation;

System::Void CargoTransportation::MyFormFinans::buttonOrder_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyFormOrder^ form = gcnew MyFormOrder();
	form->Show();
	this->Hide();
	return System::Void();
}

System::Void CargoTransportation::MyFormFinans::buttonAuto_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyFormAuto^ form = gcnew MyFormAuto();
	form->Show();
	this->Hide();
	return System::Void();
}

System::Void CargoTransportation::MyFormFinans::buttonDriver_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyFormDriver^ form = gcnew MyFormDriver();
	form->Show();
	this->Hide();
	return System::Void();
}

System::Void CargoTransportation::MyFormFinans::buttonRoute_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyFormRoute^ form = gcnew MyFormRoute();
	form->Show();
	this->Hide();
	return System::Void();
}

System::Void CargoTransportation::MyFormFinans::buttonAdd_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void CargoTransportation::MyFormFinans::buttonChange_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void CargoTransportation::MyFormFinans::buttonDelete_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void CargoTransportation::MyFormFinans::buttonExit_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
	return System::Void();
}

System::Void CargoTransportation::MyFormFinans::MyFormFinans_Load(System::Object^ sender, System::EventArgs^ e)
{
	//подключение к БД
	String^ connectionString = "provider=Microsoft.ACE.OLEDB.12.0;Data Source=kuafer.accdb"; //строка подключения 
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	//выполнить запрос к БД
	dbConnection->Open(); //открываем соединение

	String^ query = "SELECT order_id, order_db.order_owner, order_db.price, Round(lenght*fuel_consumption,2) AS cost, price - cost AS Profit"+
		" FROM truck INNER JOIN(driver INNER JOIN order_db ON driver.driver_id = order_db.driver_id) ON truck.truck_id = driver.truck_id;"; //Текст завпрос
	OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection); //Выполнение команды
	OleDbDataReader^ dbReader = dbCommand->ExecuteReader(); //считываем данные


	//Проверяем данные
	if (!dbReader->HasRows) {
		MessageBox::Show("Ошибка чтения!");
	}
	else {
		//Заполняем данные в таблицу
		double profit_sum = 0;
		while (dbReader->Read()) {
			dataGridViewFinance->Rows->Add(dbReader[0],
				dbReader[1],
				dbReader[2],
				dbReader[3],
				dbReader[4]);
			profit_sum += dbReader->GetDouble(4);
		}
		labelProfitSum->Text = profit_sum.ToString() + "руб.";
	}

	//Закрываем соединение
	dbReader->Close();
	dbConnection->Close();
	return System::Void();
}

System::Void CargoTransportation::MyFormFinans::button_MouseHover(System::Object^ sender, System::EventArgs^ e)
{
	Button^ temp = static_cast<Button^> (sender);
	temp->BackColor = Color::FromArgb(48, 48, 48);
	return System::Void();
}

System::Void CargoTransportation::MyFormFinans::button_MouseLeave(System::Object^ sender, System::EventArgs^ e)
{
	Button^ temp = static_cast<Button^> (sender);
	temp->BackColor = Color::FromArgb(0, 48, 48, 48);
	return System::Void();
}

System::Void CargoTransportation::MyFormFinans::ClearTextBoxFormFinance()
{
	textBoxId->Text = nullptr;
	textBoxCustomer->Text = nullptr;
	textBoxPayment->Text = nullptr;
	textBoxCost->Text = nullptr;
	textBoxProfit->Text = nullptr;

	return System::Void();
}

System::Void CargoTransportation::MyFormFinans::FillingTextBoxFormFinance(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{

	if (dataGridViewFinance->SelectedRows->Count == 0)
		return;

	int index = dataGridViewFinance->SelectedRows[0]->Index;

	if (dataGridViewFinance->Rows->Count - 1 == index) {
		ClearTextBoxFormFinance();
		return;
	}

	auto row = dataGridViewFinance->Rows[index];
	auto cells = row->Cells;

	textBoxId->Text = cells[0]->Value->ToString();
	textBoxCustomer->Text = cells[1]->Value->ToString();
	textBoxPayment->Text = cells[2]->Value->ToString();
	textBoxCost->Text = cells[3]->Value->ToString()->Replace(',', '.');
	textBoxProfit->Text = cells[4]->Value->ToString()->Replace(',', '.');

	return System::Void();
}
