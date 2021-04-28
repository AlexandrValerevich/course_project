#include "Order.h"
#include "Auto.h"
#include "Route.h"
#include "Driver.h"
#include "Finans.h"
#include "dbQuery.h"

using namespace CargoTransportation;

/*-------------------------------------������ ������������ ����� ������� � �����-----------------------------------*/

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

/*-------------------------------------������ ADD, CHANCGE, DELETE-----------------------------------------------*/

System::Void CargoTransportation::MyFormRoute::buttonAdd_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void CargoTransportation::MyFormRoute::buttonChange_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (!(textBoxId->Text->Length)) {
		MessageBox::Show("�������� ������!", "��������!");
		return;
	}

	if (dataGridViewRoute->SelectedRows->Count > 1) {
		MessageBox::Show("�������� ���� ������!", "��������!");
		return;
	}

	if (!(textBoxCity_1->Text->Length && 
		textBoxCity_2->Text->Length &&
		textBoxDistance->Text->Length && 
		domainUpDownAuto->Text != "���" &&
		domainUpDownDriver->Text != "���")) {
		MessageBox::Show("������� �� ��� ������!", "��������!");
		return;
	}

	if (Convert::ToInt32(textBoxDistance->Text) > 500 &&
		domainUpDownPartner->Text == "���") {
		MessageBox::Show("��� ��������� ����� 500�� ���������� ������� ��������!", "��������!");
		return;
	}

	if (domainUpDownDriver->Text == domainUpDownPartner->Text) {
		MessageBox::Show("�������� �� ����� ���� ���� ���������!", "��������!");
		return;
	}
	
	String^ order_id = textBoxId->Text;
	String^ driver_id = nullptr;
	String^ partner_id = nullptr;
	String^ truck_id = nullptr;

	String^ connectionString = "provider=Microsoft.ACE.OLEDB.12.0;Data Source=kuafer.accdb"; //������ ����������� 
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	//��������� ������ � ��
	dbConnection->Open(); //��������� ����������


	String^ SELECT = "driver_id";
	String^ FROM = "driver";
	String^ WHERE = "driver_passport LIKE'" + domainUpDownDriver->Text +"'";

	driver_id = SelectID(dbConnection, SELECT, FROM, WHERE);	

	if (domainUpDownPartner->Text != "���") {
		WHERE = "driver_passport LIKE '" + domainUpDownPartner->Text + "'";
		partner_id = SelectID(dbConnection, SELECT, FROM, WHERE);
	}

	/*��������� id ���������*/
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
		MessageBox::Show("������ ������� ���������!");
	else
		MessageBox::Show("������ � ������ ����������!");

	dataGridViewRoute->Rows->Clear();
	MyFormRoute_Load(nullptr, nullptr);

	//��������� ����������*/
	dbConnection->Close();
	return System::Void();
}

System::Void CargoTransportation::MyFormRoute::buttonDelete_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

/*-------------------------------------������� HOWER, LEAVE-----------------------------------------------*/

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

/*-------------------------------------������� �������� ����� � ����������� �����������------------------------*/

System::Void CargoTransportation::MyFormRoute::MyFormRoute_Load(System::Object^ sender, System::EventArgs^ e)
{
	dataGridViewRoute->Rows->Clear();

	//����������� � ��
	String^ connectionString = "provider=Microsoft.ACE.OLEDB.12.0;Data Source=kuafer.accdb"; //������ ����������� 
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	//��������� ������ � ��
	dbConnection->Open(); //��������� ����������

	String^ SELECT = "order_id, order_departure, order_arrival , distance, driver_pas, license_plate, partner_pas";
	String^ FROM = " ((order_db LEFT JOIN (SELECT driver_id,  driver_passport AS driver_pas FROM driver) AS driver_q ON driver_q.driver_id = order_db.driver_id) ";
	FROM += "LEFT JOIN(SELECT driver_id AS partner_id, driver_passport AS partner_pas FROM driver) AS partner_q ON partner_q.partner_id = order_db.partner_id) ";
	FROM += "LEFT JOIN truck ON order_db.truck_id = truck.truck_id";
	String^ WHERE;
	auto dbReader = SelectRow(dbConnection, SELECT, FROM);

	//��������� ������
	if (!dbReader->HasRows) {
		MessageBox::Show("������");
	}
	else {
		//��������� ������ � �������
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
	//��������� ����������
	
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
	domainUpDownDriver->Text = String::IsNullOrEmpty(cells[4]->Value->ToString()) ? "���" : cells[4]->Value->ToString();
	domainUpDownAuto->Text = String::IsNullOrEmpty(cells[5]->Value->ToString()) ? "���" : cells[5]->Value->ToString();
	domainUpDownPartner->Text = String::IsNullOrEmpty(cells[6]->Value->ToString()) ? "���" : cells[6]->Value->ToString();

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
