#include "Order.h"
#include "Auto.h"
#include "Route.h"
#include "Driver.h"
#include "Finans.h"
#include <Windows.h>

using namespace CargoTransportation;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyFormOrder());
}

System::Void MyFormOrder::button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	MyFormAuto^ avto = gcnew MyFormAuto();
	avto->Show();
}

System::Void MyFormOrder::buttonDriver_Click(System::Object^ sender, System::EventArgs^ e) {
	MyFormDriver^ drav = gcnew MyFormDriver();
	drav->Show();
}

System::Void MyFormOrder::buttonRoute_Click(System::Object^ sender, System::EventArgs^ e) {
	MyFormRoute^ rout = gcnew MyFormRoute();
	rout->Show();
}

System::Void MyFormOrder::buttonFinans_Click(System::Object^ sender, System::EventArgs^ e) {
	MyFormFinans^ fins = gcnew MyFormFinans();
	fins->Show();
}