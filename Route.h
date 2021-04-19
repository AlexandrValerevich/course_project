#pragma once

namespace CargoTransportation
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyFormRoute
	/// </summary>
	public ref class MyFormRoute : public System::Windows::Forms::Form
	{
	public:
		MyFormRoute(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyFormRoute()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ buttonExit;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ buttonAuto;
	private: System::Windows::Forms::Button^ buttonDriver;
	private: System::Windows::Forms::Button^ buttonFinans;
	private: System::Windows::Forms::DataGridView^ dataGridViewRoute;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBoxCity_1;
	private: System::Windows::Forms::TextBox^ textBoxCity_2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBoxDistance;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ buttonAdd;
	private: System::Windows::Forms::Button^ buttonChange;
	private: System::Windows::Forms::Button^ buttonDelete;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ buttonOrder;
	private: System::Windows::Forms::Button^ buttonRoute;
	private: System::Windows::Forms::TextBox^ textBoxAuto;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBoxDriver;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBoxId;
	private: System::Windows::Forms::Label^ label8;







	private: System::Windows::Forms::CheckBox^ checkBoxPartner;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Depature;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Arrival;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Distance;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Driver;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Auto;
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^ HavePartner;







	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->buttonExit = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->buttonRoute = (gcnew System::Windows::Forms::Button());
			this->buttonOrder = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->buttonFinans = (gcnew System::Windows::Forms::Button());
			this->buttonAuto = (gcnew System::Windows::Forms::Button());
			this->buttonDriver = (gcnew System::Windows::Forms::Button());
			this->dataGridViewRoute = (gcnew System::Windows::Forms::DataGridView());
			this->id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Depature = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Arrival = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Distance = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Driver = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Auto = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->HavePartner = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxCity_1 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxCity_2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxDistance = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->buttonAdd = (gcnew System::Windows::Forms::Button());
			this->buttonChange = (gcnew System::Windows::Forms::Button());
			this->buttonDelete = (gcnew System::Windows::Forms::Button());
			this->textBoxAuto = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBoxDriver = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBoxId = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->checkBoxPartner = (gcnew System::Windows::Forms::CheckBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewRoute))->BeginInit();
			this->SuspendLayout();
			// 
			// buttonExit
			// 
			this->buttonExit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->buttonExit->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->buttonExit->BackColor = System::Drawing::Color::Transparent;
			this->buttonExit->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->buttonExit->FlatAppearance->BorderSize = 0;
			this->buttonExit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonExit->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonExit->ForeColor = System::Drawing::Color::Black;
			this->buttonExit->Location = System::Drawing::Point(871, 0);
			this->buttonExit->Margin = System::Windows::Forms::Padding(0);
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->Size = System::Drawing::Size(29, 28);
			this->buttonExit->TabIndex = 1;
			this->buttonExit->Text = L"X";
			this->buttonExit->UseVisualStyleBackColor = false;
			this->buttonExit->Click += gcnew System::EventHandler(this, &MyFormRoute::buttonExit_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->panel1->Controls->Add(this->buttonRoute);
			this->panel1->Controls->Add(this->buttonOrder);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->buttonFinans);
			this->panel1->Controls->Add(this->buttonAuto);
			this->panel1->Controls->Add(this->buttonDriver);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(170, 600);
			this->panel1->TabIndex = 2;
			// 
			// buttonRoute
			// 
			this->buttonRoute->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->buttonRoute->FlatAppearance->BorderSize = 0;
			this->buttonRoute->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->buttonRoute->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonRoute->Font = (gcnew System::Drawing::Font(L"Montserrat Medium", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonRoute->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonRoute->Location = System::Drawing::Point(0, 215);
			this->buttonRoute->Margin = System::Windows::Forms::Padding(0);
			this->buttonRoute->Name = L"buttonRoute";
			this->buttonRoute->Padding = System::Windows::Forms::Padding(25, 5, 10, 5);
			this->buttonRoute->Size = System::Drawing::Size(170, 35);
			this->buttonRoute->TabIndex = 7;
			this->buttonRoute->Text = L"Рейсы";
			this->buttonRoute->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonRoute->UseVisualStyleBackColor = false;
			// 
			// buttonOrder
			// 
			this->buttonOrder->BackColor = System::Drawing::Color::Transparent;
			this->buttonOrder->FlatAppearance->BorderSize = 0;
			this->buttonOrder->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->buttonOrder->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonOrder->Font = (gcnew System::Drawing::Font(L"Montserrat Medium", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonOrder->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonOrder->Location = System::Drawing::Point(0, 110);
			this->buttonOrder->Margin = System::Windows::Forms::Padding(0);
			this->buttonOrder->Name = L"buttonOrder";
			this->buttonOrder->Padding = System::Windows::Forms::Padding(25, 5, 10, 5);
			this->buttonOrder->Size = System::Drawing::Size(170, 35);
			this->buttonOrder->TabIndex = 6;
			this->buttonOrder->Text = L"Заказы";
			this->buttonOrder->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonOrder->UseVisualStyleBackColor = false;
			this->buttonOrder->Click += gcnew System::EventHandler(this, &MyFormRoute::buttonOrder_Click);
			this->buttonOrder->MouseLeave += gcnew System::EventHandler(this, &MyFormRoute::button_MouseLeave);
			this->buttonOrder->MouseHover += gcnew System::EventHandler(this, &MyFormRoute::button_MouseHover);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Montserrat ExtraBold", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label9->ForeColor = System::Drawing::Color::MintCream;
			this->label9->Location = System::Drawing::Point(21, 30);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(134, 44);
			this->label9->TabIndex = 5;
			this->label9->Text = L"Kuafer";
			// 
			// buttonFinans
			// 
			this->buttonFinans->BackColor = System::Drawing::Color::Transparent;
			this->buttonFinans->FlatAppearance->BorderSize = 0;
			this->buttonFinans->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->buttonFinans->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonFinans->Font = (gcnew System::Drawing::Font(L"Montserrat Medium", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonFinans->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonFinans->Location = System::Drawing::Point(0, 250);
			this->buttonFinans->Margin = System::Windows::Forms::Padding(0);
			this->buttonFinans->Name = L"buttonFinans";
			this->buttonFinans->Padding = System::Windows::Forms::Padding(25, 5, 10, 5);
			this->buttonFinans->Size = System::Drawing::Size(170, 35);
			this->buttonFinans->TabIndex = 4;
			this->buttonFinans->Text = L"Финансы";
			this->buttonFinans->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonFinans->UseVisualStyleBackColor = false;
			this->buttonFinans->Click += gcnew System::EventHandler(this, &MyFormRoute::buttonFinans_Click);
			this->buttonFinans->MouseLeave += gcnew System::EventHandler(this, &MyFormRoute::button_MouseLeave);
			this->buttonFinans->MouseHover += gcnew System::EventHandler(this, &MyFormRoute::button_MouseHover);
			// 
			// buttonAuto
			// 
			this->buttonAuto->BackColor = System::Drawing::Color::Transparent;
			this->buttonAuto->FlatAppearance->BorderSize = 0;
			this->buttonAuto->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->buttonAuto->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonAuto->Font = (gcnew System::Drawing::Font(L"Montserrat Medium", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonAuto->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonAuto->Location = System::Drawing::Point(0, 145);
			this->buttonAuto->Margin = System::Windows::Forms::Padding(0);
			this->buttonAuto->Name = L"buttonAuto";
			this->buttonAuto->Padding = System::Windows::Forms::Padding(25, 5, 10, 5);
			this->buttonAuto->Size = System::Drawing::Size(170, 35);
			this->buttonAuto->TabIndex = 3;
			this->buttonAuto->Text = L"Авто";
			this->buttonAuto->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonAuto->UseVisualStyleBackColor = false;
			this->buttonAuto->Click += gcnew System::EventHandler(this, &MyFormRoute::buttonAuto_Click);
			this->buttonAuto->MouseLeave += gcnew System::EventHandler(this, &MyFormRoute::button_MouseLeave);
			this->buttonAuto->MouseHover += gcnew System::EventHandler(this, &MyFormRoute::button_MouseHover);
			// 
			// buttonDriver
			// 
			this->buttonDriver->BackColor = System::Drawing::Color::Transparent;
			this->buttonDriver->FlatAppearance->BorderSize = 0;
			this->buttonDriver->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->buttonDriver->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonDriver->Font = (gcnew System::Drawing::Font(L"Montserrat Medium", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonDriver->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonDriver->Location = System::Drawing::Point(0, 180);
			this->buttonDriver->Margin = System::Windows::Forms::Padding(0);
			this->buttonDriver->Name = L"buttonDriver";
			this->buttonDriver->Padding = System::Windows::Forms::Padding(25, 5, 10, 5);
			this->buttonDriver->Size = System::Drawing::Size(170, 35);
			this->buttonDriver->TabIndex = 2;
			this->buttonDriver->Text = L"Водители";
			this->buttonDriver->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonDriver->UseVisualStyleBackColor = false;
			this->buttonDriver->Click += gcnew System::EventHandler(this, &MyFormRoute::buttonDriver_Click);
			this->buttonDriver->MouseLeave += gcnew System::EventHandler(this, &MyFormRoute::button_MouseLeave);
			this->buttonDriver->MouseHover += gcnew System::EventHandler(this, &MyFormRoute::button_MouseHover);
			// 
			// dataGridViewRoute
			// 
			this->dataGridViewRoute->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridViewRoute->BackgroundColor = System::Drawing::Color::White;
			this->dataGridViewRoute->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->dataGridViewRoute->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewRoute->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->id,
					this->Depature, this->Arrival, this->Distance, this->Driver, this->Auto, this->HavePartner
			});
			this->dataGridViewRoute->Location = System::Drawing::Point(417, 41);
			this->dataGridViewRoute->Name = L"dataGridViewRoute";
			this->dataGridViewRoute->ReadOnly = true;
			this->dataGridViewRoute->Size = System::Drawing::Size(471, 350);
			this->dataGridViewRoute->TabIndex = 3;
			this->dataGridViewRoute->RowEnter += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyFormRoute::FillingTextBoxFormRoute);
			// 
			// id
			// 
			this->id->HeaderText = L"id";
			this->id->Name = L"id";
			this->id->ReadOnly = true;
			this->id->Visible = false;
			// 
			// Depature
			// 
			this->Depature->HeaderText = L"г. Отправления";
			this->Depature->Name = L"Depature";
			this->Depature->ReadOnly = true;
			// 
			// Arrival
			// 
			this->Arrival->HeaderText = L"г. Прибытия";
			this->Arrival->Name = L"Arrival";
			this->Arrival->ReadOnly = true;
			// 
			// Distance
			// 
			this->Distance->HeaderText = L"Расстояние";
			this->Distance->Name = L"Distance";
			this->Distance->ReadOnly = true;
			// 
			// Driver
			// 
			this->Driver->HeaderText = L"Водитель";
			this->Driver->Name = L"Driver";
			this->Driver->ReadOnly = true;
			// 
			// Auto
			// 
			this->Auto->HeaderText = L"Авто";
			this->Auto->Name = L"Auto";
			this->Auto->ReadOnly = true;
			// 
			// HavePartner
			// 
			this->HavePartner->HeaderText = L"Партнер";
			this->HavePartner->Name = L"HavePartner";
			this->HavePartner->ReadOnly = true;
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(615, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(95, 29);
			this->label1->TabIndex = 4;
			this->label1->Text = L"РЕЙСЫ";
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Montserrat", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(187, 107);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 18);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Город 1:";
			// 
			// textBoxCity_1
			// 
			this->textBoxCity_1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBoxCity_1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxCity_1->Location = System::Drawing::Point(278, 104);
			this->textBoxCity_1->Name = L"textBoxCity_1";
			this->textBoxCity_1->ReadOnly = true;
			this->textBoxCity_1->Size = System::Drawing::Size(112, 21);
			this->textBoxCity_1->TabIndex = 6;
			// 
			// textBoxCity_2
			// 
			this->textBoxCity_2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBoxCity_2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxCity_2->Location = System::Drawing::Point(278, 131);
			this->textBoxCity_2->Name = L"textBoxCity_2";
			this->textBoxCity_2->ReadOnly = true;
			this->textBoxCity_2->Size = System::Drawing::Size(112, 21);
			this->textBoxCity_2->TabIndex = 8;
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Montserrat", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(187, 134);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(59, 18);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Город 2:";
			// 
			// textBoxDistance
			// 
			this->textBoxDistance->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBoxDistance->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxDistance->Location = System::Drawing::Point(278, 213);
			this->textBoxDistance->Name = L"textBoxDistance";
			this->textBoxDistance->ReadOnly = true;
			this->textBoxDistance->Size = System::Drawing::Size(112, 21);
			this->textBoxDistance->TabIndex = 10;
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Montserrat", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(187, 213);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(90, 18);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Расстояние:";
			// 
			// buttonAdd
			// 
			this->buttonAdd->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->buttonAdd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->buttonAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonAdd->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonAdd->Location = System::Drawing::Point(454, 435);
			this->buttonAdd->Name = L"buttonAdd";
			this->buttonAdd->Size = System::Drawing::Size(100, 30);
			this->buttonAdd->TabIndex = 19;
			this->buttonAdd->Text = L"Добавить";
			this->buttonAdd->UseVisualStyleBackColor = false;
			this->buttonAdd->Visible = false;
			this->buttonAdd->Click += gcnew System::EventHandler(this, &MyFormRoute::buttonAdd_Click);
			// 
			// buttonChange
			// 
			this->buttonChange->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->buttonChange->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->buttonChange->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonChange->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonChange->Location = System::Drawing::Point(602, 435);
			this->buttonChange->Name = L"buttonChange";
			this->buttonChange->Size = System::Drawing::Size(100, 30);
			this->buttonChange->TabIndex = 20;
			this->buttonChange->Text = L"Изменить";
			this->buttonChange->UseVisualStyleBackColor = false;
			this->buttonChange->Click += gcnew System::EventHandler(this, &MyFormRoute::buttonChange_Click);
			// 
			// buttonDelete
			// 
			this->buttonDelete->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->buttonDelete->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->buttonDelete->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonDelete->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonDelete->Location = System::Drawing::Point(750, 435);
			this->buttonDelete->Name = L"buttonDelete";
			this->buttonDelete->Size = System::Drawing::Size(100, 30);
			this->buttonDelete->TabIndex = 21;
			this->buttonDelete->Text = L"Удалить";
			this->buttonDelete->UseVisualStyleBackColor = false;
			this->buttonDelete->Visible = false;
			this->buttonDelete->Click += gcnew System::EventHandler(this, &MyFormRoute::buttonDelete_Click);
			// 
			// textBoxAuto
			// 
			this->textBoxAuto->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBoxAuto->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxAuto->Location = System::Drawing::Point(278, 302);
			this->textBoxAuto->Name = L"textBoxAuto";
			this->textBoxAuto->ReadOnly = true;
			this->textBoxAuto->Size = System::Drawing::Size(112, 21);
			this->textBoxAuto->TabIndex = 25;
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Montserrat", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(187, 305);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(43, 18);
			this->label5->TabIndex = 24;
			this->label5->Text = L"Авто:";
			// 
			// textBoxDriver
			// 
			this->textBoxDriver->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBoxDriver->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxDriver->Location = System::Drawing::Point(278, 275);
			this->textBoxDriver->Name = L"textBoxDriver";
			this->textBoxDriver->Size = System::Drawing::Size(112, 21);
			this->textBoxDriver->TabIndex = 23;
			// 
			// label6
			// 
			this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Montserrat", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(187, 278);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(75, 18);
			this->label6->TabIndex = 22;
			this->label6->Text = L"Водитель:";
			// 
			// textBoxId
			// 
			this->textBoxId->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBoxId->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxId->Location = System::Drawing::Point(278, 41);
			this->textBoxId->Name = L"textBoxId";
			this->textBoxId->ReadOnly = true;
			this->textBoxId->Size = System::Drawing::Size(112, 21);
			this->textBoxId->TabIndex = 29;
			// 
			// label8
			// 
			this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Montserrat", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(187, 44);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(24, 18);
			this->label8->TabIndex = 28;
			this->label8->Text = L"id:";
			// 
			// checkBoxPartner
			// 
			this->checkBoxPartner->AutoSize = true;
			this->checkBoxPartner->CheckAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->checkBoxPartner->FlatAppearance->BorderSize = 0;
			this->checkBoxPartner->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->checkBoxPartner->Font = (gcnew System::Drawing::Font(L"Montserrat", 8.999999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBoxPartner->Location = System::Drawing::Point(190, 329);
			this->checkBoxPartner->MinimumSize = System::Drawing::Size(150, 0);
			this->checkBoxPartner->Name = L"checkBoxPartner";
			this->checkBoxPartner->Size = System::Drawing::Size(150, 21);
			this->checkBoxPartner->TabIndex = 30;
			this->checkBoxPartner->Text = L"Партнер";
			this->checkBoxPartner->UseVisualStyleBackColor = true;
			// 
			// MyFormRoute
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScrollMargin = System::Drawing::Size(10, 10);
			this->ClientSize = System::Drawing::Size(900, 600);
			this->Controls->Add(this->checkBoxPartner);
			this->Controls->Add(this->textBoxId);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBoxAuto);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBoxDriver);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->buttonDelete);
			this->Controls->Add(this->buttonChange);
			this->Controls->Add(this->buttonAdd);
			this->Controls->Add(this->textBoxDistance);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBoxCity_2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBoxCity_1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridViewRoute);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->buttonExit);
			this->Font = (gcnew System::Drawing::Font(L"Montserrat", 8.249999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyFormRoute";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Kuafer";
			this->Load += gcnew System::EventHandler(this, &MyFormRoute::MyFormRoute_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewRoute))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void buttonOrder_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonAuto_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonDriver_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonFinans_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonAdd_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonChange_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonDelete_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonExit_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void MyFormRoute_Load(System::Object^ sender, System::EventArgs^ e);
private: System::Void button_MouseHover(System::Object^ sender, System::EventArgs^ e);
private: System::Void button_MouseLeave(System::Object^ sender, System::EventArgs^ e);
private: System::Void ClearTextBoxFormRoute();
private: System::Void FillingTextBoxFormRoute(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);


};


}

