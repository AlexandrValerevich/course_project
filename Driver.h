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
	/// Сводка для MyFormDriver
	/// </summary>
	public ref class MyFormDriver : public System::Windows::Forms::Form
	{
	public:
		MyFormDriver(void)
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
		~MyFormDriver()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ buttonExit;
	private: System::Windows::Forms::Panel^ panel1;

	private: System::Windows::Forms::Button^ buttonRoute;
	private: System::Windows::Forms::Button^ buttonAuto;




	private: System::Windows::Forms::Button^ buttonFinans;
	private: System::Windows::Forms::DataGridView^ dataGridViewDriver;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBoxName;
	private: System::Windows::Forms::TextBox^ textBoxSurname;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBoxDriverClass;

	private: System::Windows::Forms::Label^ labelClassnoDriversClass;




	private: System::Windows::Forms::TextBox^ textBoxAuto;

	private: System::Windows::Forms::Label^ label;
	private: System::Windows::Forms::Button^ buttonAdd;
	private: System::Windows::Forms::Button^ buttonChange;
	private: System::Windows::Forms::Button^ buttonDelete;








	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ buttonOrder;

	private: System::Windows::Forms::Button^ buttonDriver;
	private: System::Windows::Forms::TextBox^ textBoxPatronymic;



	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBoxStage;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBoxPartner;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBoxAutoBase;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBoxId;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Name_driver;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Surname_driver;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Patronymic_driver;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ driver_class;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Partner;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ truck_num;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ AutoBase;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Stage;

























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
			this->buttonDriver = (gcnew System::Windows::Forms::Button());
			this->buttonOrder = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->buttonFinans = (gcnew System::Windows::Forms::Button());
			this->buttonRoute = (gcnew System::Windows::Forms::Button());
			this->buttonAuto = (gcnew System::Windows::Forms::Button());
			this->dataGridViewDriver = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSurname = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxDriverClass = (gcnew System::Windows::Forms::TextBox());
			this->labelClassnoDriversClass = (gcnew System::Windows::Forms::Label());
			this->textBoxAuto = (gcnew System::Windows::Forms::TextBox());
			this->label = (gcnew System::Windows::Forms::Label());
			this->buttonAdd = (gcnew System::Windows::Forms::Button());
			this->buttonChange = (gcnew System::Windows::Forms::Button());
			this->buttonDelete = (gcnew System::Windows::Forms::Button());
			this->textBoxPatronymic = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBoxStage = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBoxPartner = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBoxAutoBase = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBoxId = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Name_driver = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Surname_driver = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Patronymic_driver = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->driver_class = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Partner = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->truck_num = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->AutoBase = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Stage = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewDriver))->BeginInit();
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
			this->buttonExit->Click += gcnew System::EventHandler(this, &MyFormDriver::buttonExit_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->panel1->Controls->Add(this->buttonDriver);
			this->panel1->Controls->Add(this->buttonOrder);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->buttonFinans);
			this->panel1->Controls->Add(this->buttonRoute);
			this->panel1->Controls->Add(this->buttonAuto);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(170, 600);
			this->panel1->TabIndex = 2;
			// 
			// buttonDriver
			// 
			this->buttonDriver->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->buttonDriver->FlatAppearance->BorderSize = 0;
			this->buttonDriver->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->buttonDriver->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonDriver->Font = (gcnew System::Drawing::Font(L"Montserrat Medium", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonDriver->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonDriver->Location = System::Drawing::Point(-2, 180);
			this->buttonDriver->Margin = System::Windows::Forms::Padding(0);
			this->buttonDriver->Name = L"buttonDriver";
			this->buttonDriver->Padding = System::Windows::Forms::Padding(25, 5, 10, 5);
			this->buttonDriver->Size = System::Drawing::Size(170, 35);
			this->buttonDriver->TabIndex = 8;
			this->buttonDriver->Text = L"Водители";
			this->buttonDriver->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonDriver->UseVisualStyleBackColor = false;
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
			this->buttonOrder->Click += gcnew System::EventHandler(this, &MyFormDriver::buttonOrder_Click);
			this->buttonOrder->MouseLeave += gcnew System::EventHandler(this, &MyFormDriver::button_MouseLeave);
			this->buttonOrder->MouseHover += gcnew System::EventHandler(this, &MyFormDriver::button_MouseHover);
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
			this->buttonFinans->Click += gcnew System::EventHandler(this, &MyFormDriver::buttonFinans_Click);
			this->buttonFinans->MouseLeave += gcnew System::EventHandler(this, &MyFormDriver::button_MouseLeave);
			this->buttonFinans->MouseHover += gcnew System::EventHandler(this, &MyFormDriver::button_MouseHover);
			// 
			// buttonRoute
			// 
			this->buttonRoute->BackColor = System::Drawing::Color::Transparent;
			this->buttonRoute->FlatAppearance->BorderSize = 0;
			this->buttonRoute->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->buttonRoute->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonRoute->Font = (gcnew System::Drawing::Font(L"Montserrat Medium", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonRoute->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonRoute->Location = System::Drawing::Point(0, 215);
			this->buttonRoute->Margin = System::Windows::Forms::Padding(0);
			this->buttonRoute->Name = L"buttonRoute";
			this->buttonRoute->Padding = System::Windows::Forms::Padding(25, 5, 10, 5);
			this->buttonRoute->Size = System::Drawing::Size(170, 35);
			this->buttonRoute->TabIndex = 3;
			this->buttonRoute->Text = L"Рейсы";
			this->buttonRoute->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonRoute->UseVisualStyleBackColor = false;
			this->buttonRoute->Click += gcnew System::EventHandler(this, &MyFormDriver::buttonRoute_Click);
			this->buttonRoute->MouseLeave += gcnew System::EventHandler(this, &MyFormDriver::button_MouseLeave);
			this->buttonRoute->MouseHover += gcnew System::EventHandler(this, &MyFormDriver::button_MouseHover);
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
			this->buttonAuto->TabIndex = 2;
			this->buttonAuto->Text = L"Авто";
			this->buttonAuto->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonAuto->UseVisualStyleBackColor = false;
			this->buttonAuto->Click += gcnew System::EventHandler(this, &MyFormDriver::buttonAuto_Click);
			this->buttonAuto->MouseLeave += gcnew System::EventHandler(this, &MyFormDriver::button_MouseLeave);
			this->buttonAuto->MouseHover += gcnew System::EventHandler(this, &MyFormDriver::button_MouseHover);
			// 
			// dataGridViewDriver
			// 
			this->dataGridViewDriver->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->dataGridViewDriver->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::ColumnHeader;
			this->dataGridViewDriver->BackgroundColor = System::Drawing::Color::White;
			this->dataGridViewDriver->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->dataGridViewDriver->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewDriver->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->id,
					this->Name_driver, this->Surname_driver, this->Patronymic_driver, this->driver_class, this->Partner, this->truck_num, this->AutoBase,
					this->Stage
			});
			this->dataGridViewDriver->Location = System::Drawing::Point(417, 41);
			this->dataGridViewDriver->Name = L"dataGridViewDriver";
			this->dataGridViewDriver->Size = System::Drawing::Size(471, 350);
			this->dataGridViewDriver->TabIndex = 3;
			this->dataGridViewDriver->RowEnter += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyFormDriver::FillingTextBoxFormDriver);
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
			this->label1->Location = System::Drawing::Point(594, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(142, 29);
			this->label1->TabIndex = 4;
			this->label1->Text = L"ВОДИТЕЛИ";
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Montserrat", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(187, 88);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(40, 18);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Имя:";
			// 
			// textBoxName
			// 
			this->textBoxName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBoxName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxName->Location = System::Drawing::Point(268, 85);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(112, 21);
			this->textBoxName->TabIndex = 6;
			// 
			// textBoxSurname
			// 
			this->textBoxSurname->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBoxSurname->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxSurname->Location = System::Drawing::Point(268, 112);
			this->textBoxSurname->Name = L"textBoxSurname";
			this->textBoxSurname->Size = System::Drawing::Size(112, 21);
			this->textBoxSurname->TabIndex = 8;
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Montserrat", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(187, 115);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(75, 18);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Фамилия:";
			// 
			// textBoxDriverClass
			// 
			this->textBoxDriverClass->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBoxDriverClass->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxDriverClass->Location = System::Drawing::Point(268, 194);
			this->textBoxDriverClass->Name = L"textBoxDriverClass";
			this->textBoxDriverClass->Size = System::Drawing::Size(112, 21);
			this->textBoxDriverClass->TabIndex = 10;
			// 
			// labelClassnoDriversClass
			// 
			this->labelClassnoDriversClass->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->labelClassnoDriversClass->AutoSize = true;
			this->labelClassnoDriversClass->Font = (gcnew System::Drawing::Font(L"Montserrat", 9.749999F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->labelClassnoDriversClass->Location = System::Drawing::Point(185, 197);
			this->labelClassnoDriversClass->Name = L"labelClassnoDriversClass";
			this->labelClassnoDriversClass->Size = System::Drawing::Size(87, 18);
			this->labelClassnoDriversClass->TabIndex = 9;
			this->labelClassnoDriversClass->Text = L"Классность:";
			// 
			// textBoxAuto
			// 
			this->textBoxAuto->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBoxAuto->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxAuto->Location = System::Drawing::Point(268, 221);
			this->textBoxAuto->Name = L"textBoxAuto";
			this->textBoxAuto->Size = System::Drawing::Size(112, 21);
			this->textBoxAuto->TabIndex = 14;
			// 
			// label
			// 
			this->label->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label->AutoSize = true;
			this->label->Font = (gcnew System::Drawing::Font(L"Montserrat", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label->Location = System::Drawing::Point(187, 224);
			this->label->Name = L"label";
			this->label->Size = System::Drawing::Size(43, 18);
			this->label->TabIndex = 13;
			this->label->Text = L"Авто:";
			this->label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// buttonAdd
			// 
			this->buttonAdd->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->buttonAdd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->buttonAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonAdd->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonAdd->Location = System::Drawing::Point(451, 435);
			this->buttonAdd->Name = L"buttonAdd";
			this->buttonAdd->Size = System::Drawing::Size(100, 30);
			this->buttonAdd->TabIndex = 19;
			this->buttonAdd->Text = L"Добавить";
			this->buttonAdd->UseVisualStyleBackColor = false;
			this->buttonAdd->Click += gcnew System::EventHandler(this, &MyFormDriver::buttonAdd_Click);
			// 
			// buttonChange
			// 
			this->buttonChange->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->buttonChange->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->buttonChange->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonChange->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonChange->Location = System::Drawing::Point(599, 435);
			this->buttonChange->Name = L"buttonChange";
			this->buttonChange->Size = System::Drawing::Size(100, 30);
			this->buttonChange->TabIndex = 20;
			this->buttonChange->Text = L"Изменить";
			this->buttonChange->UseVisualStyleBackColor = false;
			this->buttonChange->Click += gcnew System::EventHandler(this, &MyFormDriver::buttonChange_Click);
			// 
			// buttonDelete
			// 
			this->buttonDelete->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->buttonDelete->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->buttonDelete->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonDelete->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonDelete->Location = System::Drawing::Point(747, 435);
			this->buttonDelete->Name = L"buttonDelete";
			this->buttonDelete->Size = System::Drawing::Size(100, 30);
			this->buttonDelete->TabIndex = 21;
			this->buttonDelete->Text = L"Удалить";
			this->buttonDelete->UseVisualStyleBackColor = false;
			this->buttonDelete->Click += gcnew System::EventHandler(this, &MyFormDriver::buttonDelete_Click);
			// 
			// textBoxPatronymic
			// 
			this->textBoxPatronymic->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBoxPatronymic->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxPatronymic->Location = System::Drawing::Point(268, 139);
			this->textBoxPatronymic->Name = L"textBoxPatronymic";
			this->textBoxPatronymic->Size = System::Drawing::Size(112, 21);
			this->textBoxPatronymic->TabIndex = 23;
			// 
			// label7
			// 
			this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Montserrat", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(187, 142);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(73, 18);
			this->label7->TabIndex = 22;
			this->label7->Text = L"Отчество:";
			// 
			// textBoxStage
			// 
			this->textBoxStage->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBoxStage->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxStage->Location = System::Drawing::Point(268, 247);
			this->textBoxStage->Name = L"textBoxStage";
			this->textBoxStage->Size = System::Drawing::Size(112, 21);
			this->textBoxStage->TabIndex = 33;
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Montserrat", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(187, 250);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(45, 18);
			this->label4->TabIndex = 32;
			this->label4->Text = L"Стаж:";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBoxPartner
			// 
			this->textBoxPartner->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBoxPartner->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxPartner->Location = System::Drawing::Point(268, 292);
			this->textBoxPartner->Name = L"textBoxPartner";
			this->textBoxPartner->Size = System::Drawing::Size(112, 21);
			this->textBoxPartner->TabIndex = 35;
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Montserrat", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(187, 295);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(71, 18);
			this->label5->TabIndex = 34;
			this->label5->Text = L"Партнер:";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBoxAutoBase
			// 
			this->textBoxAutoBase->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBoxAutoBase->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxAutoBase->Location = System::Drawing::Point(268, 319);
			this->textBoxAutoBase->Name = L"textBoxAutoBase";
			this->textBoxAutoBase->Size = System::Drawing::Size(112, 21);
			this->textBoxAutoBase->TabIndex = 37;
			// 
			// label6
			// 
			this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Montserrat", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(187, 322);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(75, 18);
			this->label6->TabIndex = 36;
			this->label6->Text = L"Автобаза:";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBoxId
			// 
			this->textBoxId->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBoxId->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxId->Location = System::Drawing::Point(268, 41);
			this->textBoxId->Name = L"textBoxId";
			this->textBoxId->ReadOnly = true;
			this->textBoxId->Size = System::Drawing::Size(112, 21);
			this->textBoxId->TabIndex = 39;
			// 
			// label8
			// 
			this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Montserrat", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(186, 44);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(24, 18);
			this->label8->TabIndex = 38;
			this->label8->Text = L"id:";
			// 
			// id
			// 
			this->id->HeaderText = L"id";
			this->id->Name = L"id";
			this->id->Visible = false;
			// 
			// Name_driver
			// 
			this->Name_driver->HeaderText = L"Имя";
			this->Name_driver->Name = L"Name_driver";
			this->Name_driver->Width = 57;
			// 
			// Surname_driver
			// 
			this->Surname_driver->HeaderText = L"Фамилия";
			this->Surname_driver->Name = L"Surname_driver";
			this->Surname_driver->Width = 87;
			// 
			// Patronymic_driver
			// 
			this->Patronymic_driver->HeaderText = L"Отчество";
			this->Patronymic_driver->Name = L"Patronymic_driver";
			this->Patronymic_driver->Width = 85;
			// 
			// driver_class
			// 
			this->driver_class->HeaderText = L"Классность";
			this->driver_class->Name = L"driver_class";
			this->driver_class->Width = 96;
			// 
			// Partner
			// 
			this->Partner->HeaderText = L"Партнер";
			this->Partner->Name = L"Partner";
			this->Partner->Width = 82;
			// 
			// truck_num
			// 
			this->truck_num->HeaderText = L"Номер авто";
			this->truck_num->Name = L"truck_num";
			this->truck_num->Width = 92;
			// 
			// AutoBase
			// 
			this->AutoBase->HeaderText = L"Автобаза";
			this->AutoBase->Name = L"AutoBase";
			this->AutoBase->Width = 84;
			// 
			// Stage
			// 
			this->Stage->HeaderText = L"Стаж";
			this->Stage->Name = L"Stage";
			this->Stage->Width = 60;
			// 
			// MyFormDriver
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScrollMargin = System::Drawing::Size(10, 10);
			this->ClientSize = System::Drawing::Size(900, 600);
			this->Controls->Add(this->textBoxId);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBoxAutoBase);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBoxPartner);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBoxStage);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBoxPatronymic);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->buttonDelete);
			this->Controls->Add(this->buttonChange);
			this->Controls->Add(this->buttonAdd);
			this->Controls->Add(this->textBoxAuto);
			this->Controls->Add(this->label);
			this->Controls->Add(this->textBoxDriverClass);
			this->Controls->Add(this->labelClassnoDriversClass);
			this->Controls->Add(this->textBoxSurname);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBoxName);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridViewDriver);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->buttonExit);
			this->Font = (gcnew System::Drawing::Font(L"Montserrat", 8.249999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyFormDriver";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Kuafer";
			this->Load += gcnew System::EventHandler(this, &MyFormDriver::MyFormDriver_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewDriver))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void buttonOrder_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonAuto_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonRoute_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonFinans_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonAdd_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonChange_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonDelete_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonExit_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void MyFormDriver_Load(System::Object^ sender, System::EventArgs^ e);
private: System::Void button_MouseHover(System::Object^ sender, System::EventArgs^ e);
private: System::Void button_MouseLeave(System::Object^ sender, System::EventArgs^ e);
private: System::Void FillingTextBoxFormDriver(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
private: System::Void ClearTextBoxFormAuto();
};


}

