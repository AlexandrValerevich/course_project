#include "Order.h"
#include "Auto.h"
#include "Route.h"
#include "Driver.h"
#include "Finans.h"
#include "dbQuery.h"

using namespace CargoTransportation;

/*------------------------------------- ÕŒœ » œ≈–≈ Àﬁ◊≈Õ»ﬂ Ã≈∆ƒ” ‘Œ–Ã¿Ã» » ¬€’Œƒ-----------------------------------*/

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

System::Void CargoTransportation::MyFormFinans::buttonExit_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
	return System::Void();
}

/*------------------------------------- ÕŒœ » ADD, CHANCGE, DELETE-----------------------------------------------*/

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

/*-------------------------------------—Œ¡€“»ﬂ HOWER, LEAVE-----------------------------------------------*/

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

/*-------------------------------------—Œ¡€“»≈ «¿√–”« » ‘Œ–Ã€ » Œ¡–¿¡Œ“◊» » “≈ —“¡Œ —Œ¬------------------------*/

System::Void CargoTransportation::MyFormFinans::MyFormFinans_Load(System::Object^ sender, System::EventArgs^ e)
{
	//ÔÓ‰ÍÎ˛˜ÂÌËÂ Í ¡ƒ
	String^ connectionString = "provider=Microsoft.ACE.OLEDB.12.0;Data Source=kuafer.accdb"; //ÒÚÓÍ‡ ÔÓ‰ÍÎ˛˜ÂÌËˇ 
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	//‚˚ÔÓÎÌËÚ¸ Á‡ÔÓÒ Í ¡ƒ
	dbConnection->Open(); //ÓÚÍ˚‚‡ÂÏ ÒÓÂ‰ËÌÂÌËÂ

	String^ SELECT = "order_id,order_owner, price AS ÷ÂÌ‡, Round(distance*fuel_consumption,2) AS »Á‰ÂÊÍË, Round(÷ÂÌ‡-»Á‰ÂÊÍË,2) AS œË·˚Î¸";
	String^ FROM   = "order_db INNER JOIN truck ON order_db.truck_id = truck.truck_id";

	OleDbDataReader^ dbReader = SelectRow(dbConnection, SELECT, FROM); //Ò˜ËÚ˚‚‡ÂÏ ‰‡ÌÌ˚Â

	//œÓ‚ÂˇÂÏ ‰‡ÌÌ˚Â
	if (!dbReader->HasRows) {
		MessageBox::Show("Œ¯Ë·Í‡ ˜ÚÂÌËˇ!");
	}
	else {
		//«‡ÔÓÎÌˇÂÏ ‰‡ÌÌ˚Â ‚ Ú‡·ÎËˆÛ
		double profit_sum = 0;
		while (dbReader->Read()) {
			dataGridViewFinance->Rows->Add(dbReader[0],
				dbReader[1],
				dbReader[2],
				dbReader[3],
				dbReader[4]);
			profit_sum += dbReader->GetDouble(4);
		}
		labelProfitSum->Text = profit_sum.ToString() + "Û·.";
	}

	//«‡Í˚‚‡ÂÏ ÒÓÂ‰ËÌÂÌËÂ
	dbReader->Close();
	dbConnection->Close();
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
