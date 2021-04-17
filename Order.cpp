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
		MessageBox::Show("������� �� ��� ������!", "��������!");
		return;
	}

	String^ connectionString = "provider=Microsoft.ACE.OLEDB.12.0;Data Source=kuafer.accdb"; //������ ����������� 
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	//��������� ������ � ��
	dbConnection->Open(); //��������� ����������

	String^ query = "INSERT INTO order_db (order_owner, order_departure, order_arrival, lenght, price, order_cargo, weight )"+
" VALUES ('"+ textBoxCustomer->Text +"', '"+textBoxFrom->Text+"', '" + textBoxTo->Text + "', " + textBoxDistance->Text + ", " + textBoxCost->Text + ", '" + textBoxNameCargo->Text + "', " + textBoxWeight->Text + ") ;"; //����� �������
	OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection); //���������� �������

	if (dbCommand->ExecuteNonQuery() == 1) {
		MessageBox::Show("������ ���������!");
	}
	else {
		MessageBox::Show("������ ��� ���������� �������� � �������!", "��������!");
	}

	query = "SELECT * FROM order_db WHERE order_id IN(SELECT MAX(order_id) FROM order_db);";
	dbCommand->CommandText = query;

	auto dbReader = dbCommand->ExecuteReader();

	while (dbReader->Read()) {
		dataGridViewOrder->Rows->Add(dbReader[0], dbReader[1], dbReader[2], dbReader[3], dbReader[4], dbReader[5], dbReader[6], dbReader[7]);
	}

	//��������� ����������
	dbReader->Close();
	dbConnection->Close();

	return System::Void();
}

System::Void CargoTransportation::MyFormOrder::buttonChange_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (!(textBoxId->Text->Length)) {
		MessageBox::Show("�������� ������!", "��������!");
		return;
	}

	if (dataGridViewOrder->SelectedRows->Count > 1) {
		MessageBox::Show("�������� ���� ������!", "��������!");
		return;
	}

	if (!(textBoxCustomer->Text->Length && textBoxFrom->Text->Length &&
		textBoxTo->Text->Length && textBoxDistance->Text->Length &&
		textBoxCost->Text->Length && textBoxNameCargo->Text->Length &&
		textBoxWeight->Text->Length)) {
		MessageBox::Show("������� �� ��� ������!", "��������!");
		return;
	}

	String^ connectionString = "provider=Microsoft.ACE.OLEDB.12.0;Data Source=kuafer.accdb"; //������ ����������� 
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	//��������� ������ � ��
	dbConnection->Open(); //��������� ����������

	String^ query = "UPDATE order_db SET  order_owner = '" + textBoxCustomer->Text + "',order_cargo ='"+textBoxNameCargo->Text+"',"+
		" order_departure = '"+textBoxFrom->Text+"' ,order_arrival = '"+textBoxTo->Text+"', price = "+textBoxCost->Text+","+
		" weight = "+textBoxWeight->Text+", lenght = "+ textBoxDistance->Text + " "
		"WHERE order_id = " + textBoxId->Text + ";";//����� �������
	OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection); //���������� �������

	if (dbCommand->ExecuteNonQuery() == 1) {
		MessageBox::Show("������ ���������!");
	}
	else {
		MessageBox::Show("������ ��� ���������� �������� �������!", "��������!");
	}


	int index = dataGridViewOrder->SelectedRows[0]->Index;
	auto row = dataGridViewOrder->Rows[index];

	row->SetValues(textBoxId->Text,
		textBoxCustomer->Text,
		textBoxNameCargo->Text,
		textBoxFrom->Text, 
		textBoxTo->Text,
		Convert::ToInt32(textBoxCost->Text),
		Convert::ToInt32(textBoxWeight->Text),
		Convert::ToInt32(textBoxDistance->Text));

	//��������� ����������
	dbConnection->Close();


	return System::Void();
}

System::Void CargoTransportation::MyFormOrder::buttonDelete_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (!(textBoxId->Text->Length)) {
		MessageBox::Show("��������� �� ���� ������!", "��������!");
		return;
	}

	if (dataGridViewOrder->SelectedRows->Count > 1) {
		MessageBox::Show("�������� ���� ������!", "��������!");
		return;
	}

	String^ connectionString = "provider=Microsoft.ACE.OLEDB.12.0;Data Source=kuafer.accdb"; //������ ����������� 
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	//��������� ������ � ��
	dbConnection->Open(); //��������� ����������

	String^ query = "DELETE FROM order_db WHERE order_id = "+textBoxId->Text+" ;"; //����� �������
	OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection); //���������� �������

	if (dbCommand->ExecuteNonQuery() == 1) {
		MessageBox::Show("������ �������!");
	}
	else {
		MessageBox::Show("������ ��� ������� �������� �� �������!", "��������!");
	}

	ClearTextBoxFormOrder();
	
	int index = dataGridViewOrder->SelectedRows[0]->Index;
	dataGridViewOrder->Rows->RemoveAt(index);

	//��������� ����������
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

	//����������� � ��
	String^ connectionString = "provider=Microsoft.ACE.OLEDB.12.0;Data Source=kuafer.accdb"; //������ ����������� 
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	//��������� ������ � ��
	dbConnection->Open(); //��������� ����������

	String^ query = "SELECT * FROM order_db;"; //����� �������
	OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection); //���������� �������
	OleDbDataReader^ dbReader = dbCommand->ExecuteReader(); //��������� ������


	//��������� ������
	if (!dbReader->HasRows) {
		MessageBox::Show("������");
	}
	else {
		//��������� ������ � �������
		while (dbReader->Read()) {
			dataGridViewOrder->Rows->Add(dbReader[0], dbReader[1], dbReader[2], dbReader[3], dbReader[4], dbReader[5], dbReader[6], dbReader[7]);
		}
	}

	//��������� ����������
	dbReader->Close();
	dbConnection->Close();
	return System::Void();
}

System::Void CargoTransportation::MyFormOrder::FillingTextBoxFormOrder(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{

	if (dataGridViewOrder->SelectedRows->Count == 0)
		return;

	int index = dataGridViewOrder->SelectedRows[0]->Index;

	if (dataGridViewOrder->Rows->Count - 1 == index) {
		ClearTextBoxFormOrder();
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

System::Void CargoTransportation::MyFormOrder::ClearTextBoxFormOrder()
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


