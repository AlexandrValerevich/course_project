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

	return System::Void();
}
