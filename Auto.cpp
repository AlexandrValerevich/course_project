#include "Order.h"
#include "Auto.h"
#include "Route.h"
#include "Driver.h"
#include "Finans.h"
#include <Windows.h>

using namespace CargoTransportation;

System::Void CargoTransportation::MyFormAuto::buttonOrder_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyFormOrder^ form = gcnew MyFormOrder();
	form->Show();
	this->Hide();
	return System::Void();
}

System::Void CargoTransportation::MyFormAuto::buttonDriver_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyFormDriver^ form = gcnew MyFormDriver();
	form->Show();
	this->Hide();
	return System::Void();
}

System::Void CargoTransportation::MyFormAuto::buttonRoute_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyFormRoute^ form = gcnew MyFormRoute();
	form->Show();
	this->Hide();
	return System::Void();
}

System::Void CargoTransportation::MyFormAuto::buttonFinans_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyFormFinans^ form = gcnew MyFormFinans();
	form->Show();
	this->Hide();
	return System::Void();
}

System::Void CargoTransportation::MyFormAuto::buttonAdd_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (!(textBoxMark->Text->Length && textBoxNumber->Text->Length &&
		textBoxTonnage->Text->Length && textBoxLenght->Text->Length &&
		textBoxExpences->Text->Length)) {
		MessageBox::Show("������� �� ��� ������!", "��������!");
		return;
	}

	String^ connectionString = "provider=Microsoft.ACE.OLEDB.12.0;Data Source=kuafer.accdb"; //������ ����������� 
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	//��������� ������ � ��
	dbConnection->Open(); //��������� ����������

	String^ query = "INSERT INTO truck (truck_name, license_plate, load_capacity, fuel_consumption, trailer_length)" +
		" VALUES ('" + textBoxMark->Text + "', '" + textBoxNumber->Text + "', " + textBoxTonnage->Text + ", " + textBoxExpences->Text + ", " + textBoxLenght->Text + ") ;"; //����� �������
	OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection); //���������� �������

	if (dbCommand->ExecuteNonQuery() == 1) {
		MessageBox::Show("������ ���������!");
	}
	else {
		MessageBox::Show("������ ��� ���������� �������� � �������!", "��������!");
	}

	query = "SELECT * FROM truck WHERE truck_id IN(SELECT MAX(truck_id) FROM truck);";
	dbCommand->CommandText = query;

	auto dbReader = dbCommand->ExecuteReader();

	while (dbReader->Read()) {
		dataGridViewAuto->Rows->Add(dbReader[0],
			dbReader[1],
			dbReader[2],
			Convert::ToDouble(dbReader[3]),
			Convert::ToDouble(dbReader[4]),
			Convert::ToDouble(dbReader[5]));
	}

	//��������� ����������
	dbReader->Close();
	dbConnection->Close();
	return System::Void();
}

System::Void CargoTransportation::MyFormAuto::buttonChange_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (!(textBoxId->Text->Length)) {
		MessageBox::Show("�������� ������!", "��������!");
		return;
	}

	if (dataGridViewAuto->SelectedRows->Count > 1) {
		MessageBox::Show("�������� ���� ������!", "��������!");
		return;
	}

	if (!(textBoxMark->Text->Length && textBoxNumber->Text->Length &&
		textBoxTonnage->Text->Length && textBoxExpences->Text->Length &&
		textBoxLenght->Text->Length )) {
		MessageBox::Show("������� �� ��� ������!", "��������!");
		return;
	}

	String^ connectionString = "provider=Microsoft.ACE.OLEDB.12.0;Data Source=kuafer.accdb"; //������ ����������� 
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	//��������� ������ � ��
	dbConnection->Open(); //��������� ����������

	String^ query = "UPDATE truck SET  truck_name = '" + textBoxMark->Text + "',license_plate ='" + textBoxNumber->Text + "'," +
		" load_capacity = " + textBoxTonnage->Text + ", " +
		" fuel_consumption = " + textBoxExpences->Text + ", trailer_length = " + textBoxLenght->Text + " "
		"WHERE truck_id = " + textBoxId->Text + ";";//����� �������
	OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection); //���������� �������

	if (dbCommand->ExecuteNonQuery() == 1) {
		MessageBox::Show("������ ���������!");
	}
	else {
		MessageBox::Show("������ ��� ���������� �������� �������!", "��������!");
	}


	int index = dataGridViewAuto->SelectedRows[0]->Index;
	auto row = dataGridViewAuto->Rows[index];

	row->SetValues(textBoxId->Text,
		textBoxMark->Text,
		textBoxNumber->Text,
		Convert::ToDouble(textBoxTonnage->Text->Replace('.',',')),
		Convert::ToDouble(textBoxExpences->Text->Replace('.', ',')),
		Convert::ToDouble(textBoxLenght->Text->Replace('.', ',')));

	//��������� ����������
	dbConnection->Close();
	return System::Void();
}

System::Void CargoTransportation::MyFormAuto::buttonDelete_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (!(textBoxId->Text->Length)) {
		MessageBox::Show("��������� �� ���� ������!", "��������!");
		return;
	}

	if (dataGridViewAuto->SelectedRows->Count > 1) {
		MessageBox::Show("�������� ���� ������!", "��������!");
		return;
	}

	String^ connectionString = "provider=Microsoft.ACE.OLEDB.12.0;Data Source=kuafer.accdb"; //������ ����������� 
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	//��������� ������ � ��
	dbConnection->Open(); //��������� ����������

	String^ query = "DELETE FROM truck WHERE truck_id = " + textBoxId->Text + " ;"; //����� �������
	OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection); //���������� �������

	if (dbCommand->ExecuteNonQuery() == 1) {
		MessageBox::Show("������ �������!");
	}
	else {
		MessageBox::Show("������ ��� ������� �������� �� �������!", "��������!");
	}

	ClearTextBoxFormAuto();

	int index = dataGridViewAuto->SelectedRows[0]->Index;
	dataGridViewAuto->Rows->RemoveAt(index);

	//��������� ����������
	dbConnection->Close();
	return System::Void();
}

System::Void CargoTransportation::MyFormAuto::button_MouseHover(System::Object^ sender, System::EventArgs^ e)
{
	Button^ temp = static_cast<Button^> (sender);
	temp->BackColor = Color::FromArgb(48, 48, 48);
	return System::Void();
}

System::Void CargoTransportation::MyFormAuto::button_MouseLeave(System::Object^ sender, System::EventArgs^ e)
{
	Button^ temp = static_cast<Button^> (sender);
	temp->BackColor = Color::FromArgb(0, 48, 48, 48);
	return System::Void();
}

System::Void CargoTransportation::MyFormAuto::MyFormAuto_Load(System::Object^ sender, System::EventArgs^ e)
{
	//����������� � ��
	String^ connectionString = "provider=Microsoft.ACE.OLEDB.12.0;Data Source=kuafer.accdb"; //������ ����������� 
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	//��������� ������ � ��
	dbConnection->Open(); //��������� ����������

	String^ query = "SELECT * FROM truck;"; //����� �������
	OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection); //���������� �������
	OleDbDataReader^ dbReader = dbCommand->ExecuteReader(); //��������� ������


	//��������� ������
	if (!dbReader->HasRows) {
		MessageBox::Show("������");
	}
	else {
		//��������� ������ � �������
		while (dbReader->Read()) {
			dataGridViewAuto->Rows->Add(dbReader[0], 
				dbReader[1],
				dbReader[2],
				Convert::ToDouble(dbReader[3]),
				Convert::ToDouble(dbReader[4]),
				Convert::ToDouble(dbReader[5]));
		}
	}

	//��������� ����������
	dbReader->Close();
	dbConnection->Close();
	return System::Void();
}

System::Void CargoTransportation::MyFormAuto::buttonExit_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
	return System::Void();
}

System::Void CargoTransportation::MyFormAuto::ClearTextBoxFormAuto()
{
	textBoxId->Text = nullptr;
	textBoxMark->Text = nullptr;
	textBoxNumber->Text = nullptr;
	textBoxTonnage->Text = nullptr;
	textBoxExpences->Text = nullptr;
	textBoxLenght->Text = nullptr;

	return System::Void();
}

System::Void CargoTransportation::MyFormAuto::FillingTextBoxFormAuto(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{

	if (dataGridViewAuto->SelectedRows->Count == 0)
		return;

	int index = dataGridViewAuto->SelectedRows[0]->Index;

	if (dataGridViewAuto->Rows->Count - 1 == index) {
		ClearTextBoxFormAuto();
		return;
	}

	auto row = dataGridViewAuto->Rows[index];
	auto cells = row->Cells;

	textBoxId->Text = cells[0]->Value->ToString();
	textBoxMark->Text = cells[1]->Value->ToString();
	textBoxNumber->Text = cells[2]->Value->ToString();
	textBoxTonnage->Text = cells[3]->Value->ToString()->Replace(',','.');
	textBoxExpences->Text = cells[4]->Value->ToString()->Replace(',', '.');
	textBoxLenght->Text = cells[5]->Value->ToString()->Replace(',', '.');

	return System::Void();
}
