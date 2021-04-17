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
	if (!(textBoxCustomer->Text->Length && textBoxFrom->Text->Length &&
		textBoxTo->Text->Length && textBoxDistance->Text->Length  &&
		textBoxCost->Text->Length && textBoxNameCargo->Text->Length  &&
		textBoxWeight->Text->Length)) {
		MessageBox::Show("Введены не все данные!", "Внимание!");
		return;
	}

	String^ connectionString = "provider=Microsoft.ACE.OLEDB.12.0;Data Source=kuafer.accdb"; //строка подключения 
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	//выполнить запрос к БД
	dbConnection->Open(); //открываем соединение

	String^ query = "INSERT INTO order_db (order_owner, order_departure, order_arrival, lenght, price, order_cargo, weight )"+
" VALUES ('"+ textBoxCustomer->Text +"', '"+textBoxFrom->Text+"', '" + textBoxTo->Text + "', " + textBoxDistance->Text + ", " + textBoxCost->Text + ", '" + textBoxNameCargo->Text + "', " + textBoxWeight->Text + ") ;"; //Текст завпрос
	OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection); //Выполнение команды

	if (dbCommand->ExecuteNonQuery() == 1) {
		MessageBox::Show("Запись добавлена!");
	}
	else {
		MessageBox::Show("Ошибка при добавлений элемента в таблицу!", "Внимание!");
	}

	query = "SELECT * FROM order_db WHERE order_id IN(SELECT MAX(order_id) FROM order_db);";
	dbCommand->CommandText = query;

	auto dbReader = dbCommand->ExecuteReader();

	while (dbReader->Read()) {
		dataGridViewOrder->Rows->Add(dbReader[0], dbReader[1], dbReader[2], dbReader[3], dbReader[4], dbReader[5], dbReader[6], dbReader[7]);
	}

	//Закрываем соединение
	dbReader->Close();
	dbConnection->Close();

	return System::Void();
}

System::Void CargoTransportation::MyFormOrder::buttonChange_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (!(textBoxId->Text->Length)) {
		MessageBox::Show("Выберете строку!", "Внимание!");
		return;
	}

	if (dataGridViewOrder->SelectedRows->Count > 1) {
		MessageBox::Show("Выберите одну строку!", "Внимание!");
		return;
	}

	if (!(textBoxCustomer->Text->Length && textBoxFrom->Text->Length &&
		textBoxTo->Text->Length && textBoxDistance->Text->Length &&
		textBoxCost->Text->Length && textBoxNameCargo->Text->Length &&
		textBoxWeight->Text->Length)) {
		MessageBox::Show("Введены не все данные!", "Внимание!");
		return;
	}

	String^ connectionString = "provider=Microsoft.ACE.OLEDB.12.0;Data Source=kuafer.accdb"; //строка подключения 
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	//выполнить запрос к БД
	dbConnection->Open(); //открываем соединение

	String^ query = "UPDATE order_db SET  order_owner = '" + textBoxCustomer->Text + "',order_cargo ='"+textBoxNameCargo->Text+"',"+
		" order_departure = '"+textBoxFrom->Text+"' ,order_arrival = '"+textBoxTo->Text+"', price = "+textBoxCost->Text+","+
		" weight = "+textBoxWeight->Text+", lenght = "+ textBoxDistance->Text + " "
		"WHERE order_id = " + textBoxId->Text + ";";//Текст завпрос
	OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection); //Выполнение команды

	if (dbCommand->ExecuteNonQuery() == 1) {
		MessageBox::Show("Запись обнавлена!");
	}
	else {
		MessageBox::Show("Ошибка при Обнавлении элемента таблицы!", "Внимание!");
	}


	int index = dataGridViewOrder->SelectedRows[0]->Index;
	auto row = dataGridViewOrder->Rows[index];

	row->SetValues(textBoxId->Text,
		textBoxCustomer->Text,
		textBoxNameCargo->Text,
		textBoxFrom->Text, 
		textBoxTo->Text,
		textBoxCost->Text,
		textBoxWeight->Text,
		textBoxDistance->Text);

	//Закрываем соединение
	dbConnection->Close();


	return System::Void();
}

System::Void CargoTransportation::MyFormOrder::buttonDelete_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (!(textBoxId->Text->Length)) {
		MessageBox::Show("Невыбрана ни одна строка!", "Внимание!");
		return;
	}

	if (dataGridViewOrder->SelectedRows->Count > 1) {
		MessageBox::Show("Выберите одну строку!", "Внимание!");
		return;
	}

	String^ connectionString = "provider=Microsoft.ACE.OLEDB.12.0;Data Source=kuafer.accdb"; //строка подключения 
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	//выполнить запрос к БД
	dbConnection->Open(); //открываем соединение

	String^ query = "DELETE FROM order_db WHERE order_id = "+textBoxId->Text+" ;"; //Текст завпрос
	OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection); //Выполнение команды

	if (dbCommand->ExecuteNonQuery() == 1) {
		MessageBox::Show("Запись удалена!");
	}
	else {
		MessageBox::Show("Ошибка при удалени элемента из таблицу!", "Внимание!");
	}

	ClearTextBoxForm(nullptr, nullptr);
	
	int index = dataGridViewOrder->SelectedRows[0]->Index;
	dataGridViewOrder->Rows->RemoveAt(index);

	//Закрываем соединение
	dbConnection->Close();

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

	if (dataGridViewOrder->SelectedRows->Count == 0)
		return;

	int index = dataGridViewOrder->SelectedRows[0]->Index;

	if (dataGridViewOrder->Rows->Count - 1 == index) {
		ClearTextBoxForm(nullptr,nullptr);
		return;
	}
		

	auto row = dataGridViewOrder->Rows[index];
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

System::Void CargoTransportation::MyFormOrder::listBoxSort_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
	switch (listBoxSort->SelectedIndex)
	{
	case 0 :{
		dataGridViewOrder->Sort(dataGridViewOrder->Columns[6], System::ComponentModel::ListSortDirection::Ascending);
		break;
		}
	case 1: {
		dataGridViewOrder->Sort(dataGridViewOrder->Columns[7], System::ComponentModel::ListSortDirection::Ascending);
		break;
	}
	default:
		break;
	}
	return System::Void();
}


