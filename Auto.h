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
	/// Сводка для MyFormAuto
	/// </summary>
	public ref class MyFormAuto : public System::Windows::Forms::Form
	{
	public:
		MyFormAuto(void)
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
		~MyFormAuto()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ buttonExit;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ buttonRoute;
	private: System::Windows::Forms::Button^ buttonDriver;
	private: System::Windows::Forms::Button^ buttonFinans;
	private: System::Windows::Forms::DataGridView^ dataGridViewAuto;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBoxMark;
	private: System::Windows::Forms::TextBox^ textBoxNumber;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBoxTonnage;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBoxLenght;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBoxExpences;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ buttonAdd;
	private: System::Windows::Forms::Button^ buttonChange;
	private: System::Windows::Forms::Button^ buttonDelete;



	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ buttonOrder;

	private: System::Windows::Forms::Button^ buttonAuto;
	private: System::Windows::Forms::TextBox^ textBoxId;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ truck_name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ license_num;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ load_copacity;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ fuel_consumption;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ trailer_length;


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
			this->buttonAuto = (gcnew System::Windows::Forms::Button());
			this->buttonOrder = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->buttonFinans = (gcnew System::Windows::Forms::Button());
			this->buttonRoute = (gcnew System::Windows::Forms::Button());
			this->buttonDriver = (gcnew System::Windows::Forms::Button());
			this->dataGridViewAuto = (gcnew System::Windows::Forms::DataGridView());
			this->id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->truck_name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->license_num = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->load_copacity = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->fuel_consumption = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->trailer_length = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxMark = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNumber = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxTonnage = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBoxLenght = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBoxExpences = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->buttonAdd = (gcnew System::Windows::Forms::Button());
			this->buttonChange = (gcnew System::Windows::Forms::Button());
			this->buttonDelete = (gcnew System::Windows::Forms::Button());
			this->textBoxId = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewAuto))->BeginInit();
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
			this->buttonExit->Click += gcnew System::EventHandler(this, &MyFormAuto::buttonExit_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->panel1->Controls->Add(this->buttonAuto);
			this->panel1->Controls->Add(this->buttonOrder);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->buttonFinans);
			this->panel1->Controls->Add(this->buttonRoute);
			this->panel1->Controls->Add(this->buttonDriver);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(170, 600);
			this->panel1->TabIndex = 2;
			// 
			// buttonAuto
			// 
			this->buttonAuto->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->buttonAuto->FlatAppearance->BorderSize = 0;
			this->buttonAuto->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->buttonAuto->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonAuto->Font = (gcnew System::Drawing::Font(L"Montserrat Medium", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonAuto->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonAuto->Location = System::Drawing::Point(0, 145);
			this->buttonAuto->Margin = System::Windows::Forms::Padding(0);
			this->buttonAuto->Name = L"buttonAuto";
			this->buttonAuto->Padding = System::Windows::Forms::Padding(25, 5, 10, 5);
			this->buttonAuto->Size = System::Drawing::Size(170, 35);
			this->buttonAuto->TabIndex = 7;
			this->buttonAuto->Text = L"Авто";
			this->buttonAuto->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonAuto->UseVisualStyleBackColor = false;
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
			this->buttonOrder->Click += gcnew System::EventHandler(this, &MyFormAuto::buttonOrder_Click);
			this->buttonOrder->MouseLeave += gcnew System::EventHandler(this, &MyFormAuto::button_MouseLeave);
			this->buttonOrder->MouseHover += gcnew System::EventHandler(this, &MyFormAuto::button_MouseHover);
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
			this->buttonFinans->Click += gcnew System::EventHandler(this, &MyFormAuto::buttonFinans_Click);
			this->buttonFinans->MouseLeave += gcnew System::EventHandler(this, &MyFormAuto::button_MouseLeave);
			this->buttonFinans->MouseHover += gcnew System::EventHandler(this, &MyFormAuto::button_MouseHover);
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
			this->buttonRoute->Click += gcnew System::EventHandler(this, &MyFormAuto::buttonRoute_Click);
			this->buttonRoute->MouseLeave += gcnew System::EventHandler(this, &MyFormAuto::button_MouseLeave);
			this->buttonRoute->MouseHover += gcnew System::EventHandler(this, &MyFormAuto::button_MouseHover);
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
			this->buttonDriver->Click += gcnew System::EventHandler(this, &MyFormAuto::buttonDriver_Click);
			this->buttonDriver->MouseLeave += gcnew System::EventHandler(this, &MyFormAuto::button_MouseLeave);
			this->buttonDriver->MouseHover += gcnew System::EventHandler(this, &MyFormAuto::button_MouseHover);
			// 
			// dataGridViewAuto
			// 
			this->dataGridViewAuto->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->dataGridViewAuto->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridViewAuto->BackgroundColor = System::Drawing::Color::White;
			this->dataGridViewAuto->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->dataGridViewAuto->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewAuto->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->id,
					this->truck_name, this->license_num, this->load_copacity, this->fuel_consumption, this->trailer_length
			});
			this->dataGridViewAuto->Location = System::Drawing::Point(417, 41);
			this->dataGridViewAuto->Name = L"dataGridViewAuto";
			this->dataGridViewAuto->Size = System::Drawing::Size(471, 350);
			this->dataGridViewAuto->TabIndex = 3;
			this->dataGridViewAuto->RowEnter += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyFormAuto::FillingTextBoxFormAuto);
			// 
			// id
			// 
			this->id->HeaderText = L"id";
			this->id->Name = L"id";
			this->id->Visible = false;
			// 
			// truck_name
			// 
			this->truck_name->HeaderText = L"Марка";
			this->truck_name->Name = L"truck_name";
			// 
			// license_num
			// 
			this->license_num->HeaderText = L"Номер";
			this->license_num->Name = L"license_num";
			// 
			// load_copacity
			// 
			this->load_copacity->HeaderText = L"Грузоподъемность";
			this->load_copacity->Name = L"load_copacity";
			// 
			// fuel_consumption
			// 
			this->fuel_consumption->HeaderText = L"Расход (руб/км)";
			this->fuel_consumption->Name = L"fuel_consumption";
			// 
			// trailer_length
			// 
			this->trailer_length->HeaderText = L"Длина";
			this->trailer_length->Name = L"trailer_length";
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
			this->label1->Size = System::Drawing::Size(76, 29);
			this->label1->TabIndex = 4;
			this->label1->Text = L"АВТО";
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Montserrat", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(183, 124);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 18);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Марка:";
			// 
			// textBoxMark
			// 
			this->textBoxMark->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBoxMark->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxMark->Location = System::Drawing::Point(264, 121);
			this->textBoxMark->Name = L"textBoxMark";
			this->textBoxMark->Size = System::Drawing::Size(112, 21);
			this->textBoxMark->TabIndex = 6;
			// 
			// textBoxNumber
			// 
			this->textBoxNumber->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBoxNumber->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxNumber->Location = System::Drawing::Point(264, 148);
			this->textBoxNumber->Name = L"textBoxNumber";
			this->textBoxNumber->Size = System::Drawing::Size(112, 21);
			this->textBoxNumber->TabIndex = 8;
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Montserrat", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(183, 151);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(57, 18);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Номер:";
			// 
			// textBoxTonnage
			// 
			this->textBoxTonnage->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBoxTonnage->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxTonnage->Location = System::Drawing::Point(264, 228);
			this->textBoxTonnage->Name = L"textBoxTonnage";
			this->textBoxTonnage->Size = System::Drawing::Size(112, 21);
			this->textBoxTonnage->TabIndex = 10;
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Montserrat", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(183, 231);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(63, 18);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Тоннаж:";
			// 
			// textBoxLenght
			// 
			this->textBoxLenght->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBoxLenght->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxLenght->Location = System::Drawing::Point(264, 255);
			this->textBoxLenght->Name = L"textBoxLenght";
			this->textBoxLenght->Size = System::Drawing::Size(112, 21);
			this->textBoxLenght->TabIndex = 12;
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Montserrat", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(183, 258);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(55, 18);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Длина:";
			// 
			// textBoxExpences
			// 
			this->textBoxExpences->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBoxExpences->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxExpences->Location = System::Drawing::Point(264, 283);
			this->textBoxExpences->Name = L"textBoxExpences";
			this->textBoxExpences->Size = System::Drawing::Size(112, 21);
			this->textBoxExpences->TabIndex = 14;
			// 
			// label6
			// 
			this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Montserrat", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(183, 286);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(58, 18);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Расход:";
			// 
			// buttonAdd
			// 
			this->buttonAdd->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->buttonAdd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->buttonAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonAdd->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonAdd->Location = System::Drawing::Point(455, 435);
			this->buttonAdd->Name = L"buttonAdd";
			this->buttonAdd->Size = System::Drawing::Size(100, 30);
			this->buttonAdd->TabIndex = 19;
			this->buttonAdd->Text = L"Добавить";
			this->buttonAdd->UseVisualStyleBackColor = false;
			this->buttonAdd->Click += gcnew System::EventHandler(this, &MyFormAuto::buttonAdd_Click);
			// 
			// buttonChange
			// 
			this->buttonChange->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->buttonChange->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->buttonChange->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonChange->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonChange->Location = System::Drawing::Point(603, 435);
			this->buttonChange->Name = L"buttonChange";
			this->buttonChange->Size = System::Drawing::Size(100, 30);
			this->buttonChange->TabIndex = 20;
			this->buttonChange->Text = L"Изменить";
			this->buttonChange->UseVisualStyleBackColor = false;
			this->buttonChange->Click += gcnew System::EventHandler(this, &MyFormAuto::buttonChange_Click);
			// 
			// buttonDelete
			// 
			this->buttonDelete->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->buttonDelete->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->buttonDelete->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonDelete->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonDelete->Location = System::Drawing::Point(751, 435);
			this->buttonDelete->Name = L"buttonDelete";
			this->buttonDelete->Size = System::Drawing::Size(100, 30);
			this->buttonDelete->TabIndex = 21;
			this->buttonDelete->Text = L"Удалить";
			this->buttonDelete->UseVisualStyleBackColor = false;
			this->buttonDelete->Click += gcnew System::EventHandler(this, &MyFormAuto::buttonDelete_Click);
			// 
			// textBoxId
			// 
			this->textBoxId->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBoxId->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxId->Location = System::Drawing::Point(264, 41);
			this->textBoxId->Name = L"textBoxId";
			this->textBoxId->ReadOnly = true;
			this->textBoxId->Size = System::Drawing::Size(112, 21);
			this->textBoxId->TabIndex = 27;
			// 
			// label8
			// 
			this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Montserrat", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(182, 44);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(24, 18);
			this->label8->TabIndex = 26;
			this->label8->Text = L"id:";
			// 
			// MyFormAuto
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScrollMargin = System::Drawing::Size(10, 10);
			this->ClientSize = System::Drawing::Size(900, 600);
			this->Controls->Add(this->textBoxId);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->buttonDelete);
			this->Controls->Add(this->buttonChange);
			this->Controls->Add(this->buttonAdd);
			this->Controls->Add(this->textBoxExpences);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBoxLenght);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBoxTonnage);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBoxNumber);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBoxMark);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridViewAuto);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->buttonExit);
			this->Font = (gcnew System::Drawing::Font(L"Montserrat", 8.249999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyFormAuto";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Kuafer";
			this->Load += gcnew System::EventHandler(this, &MyFormAuto::MyFormAuto_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewAuto))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void buttonOrder_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonDriver_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonRoute_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonFinans_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonAdd_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonChange_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonDelete_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button_MouseHover(System::Object^ sender, System::EventArgs^ e);
private: System::Void button_MouseLeave(System::Object^ sender, System::EventArgs^ e);
private: System::Void MyFormAuto_Load(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonExit_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ClearTextBoxFormAuto();
private: System::Void FillingTextBoxFormAuto(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
};


}

