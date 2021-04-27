#pragma once

namespace CargoTransportation
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Data::OleDb;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyFormOrder
	/// </summary>
	public ref class MyFormOrder : public System::Windows::Forms::Form
	{
	public:
		MyFormOrder(void)
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
		~MyFormOrder()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ buttonExit;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ buttonOrder;
	private: System::Windows::Forms::Button^ buttonRoute;
	private: System::Windows::Forms::Button^ buttonDriver;
	private: System::Windows::Forms::Button^ buttonAuto;
	private: System::Windows::Forms::Button^ buttonFinans;
	private: System::Windows::Forms::DataGridView^ dataGridViewOrder;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBoxCustomer;
	private: System::Windows::Forms::TextBox^ textBoxFrom;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBoxTo;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBoxCost;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBoxNameCargo;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBoxWeight;
	private: System::Windows::Forms::Label^ label7;


	private: System::Windows::Forms::Button^ buttonAdd;
	private: System::Windows::Forms::Button^ buttonChange;
	private: System::Windows::Forms::Button^ buttonDelete;
	private: System::Windows::Forms::Label^ label9;








	private: System::Windows::Forms::TextBox^ textBoxDistance;

	private: System::Windows::Forms::Label^ distance;
	private: System::Windows::Forms::TextBox^ textBoxId;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::ListBox^ listBoxSort;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ id_order;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ owner;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ cargo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ departure;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Arrival;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ price;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ weight;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ lenght;


































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
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->buttonFinans = (gcnew System::Windows::Forms::Button());
			this->buttonRoute = (gcnew System::Windows::Forms::Button());
			this->buttonDriver = (gcnew System::Windows::Forms::Button());
			this->buttonAuto = (gcnew System::Windows::Forms::Button());
			this->buttonOrder = (gcnew System::Windows::Forms::Button());
			this->dataGridViewOrder = (gcnew System::Windows::Forms::DataGridView());
			this->id_order = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->owner = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cargo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->departure = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Arrival = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->weight = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->lenght = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxCustomer = (gcnew System::Windows::Forms::TextBox());
			this->textBoxFrom = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxTo = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBoxCost = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBoxNameCargo = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBoxWeight = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->buttonAdd = (gcnew System::Windows::Forms::Button());
			this->buttonChange = (gcnew System::Windows::Forms::Button());
			this->buttonDelete = (gcnew System::Windows::Forms::Button());
			this->textBoxDistance = (gcnew System::Windows::Forms::TextBox());
			this->distance = (gcnew System::Windows::Forms::Label());
			this->textBoxId = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->listBoxSort = (gcnew System::Windows::Forms::ListBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewOrder))->BeginInit();
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
			this->buttonExit->Click += gcnew System::EventHandler(this, &MyFormOrder::buttonExit_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->buttonFinans);
			this->panel1->Controls->Add(this->buttonRoute);
			this->panel1->Controls->Add(this->buttonDriver);
			this->panel1->Controls->Add(this->buttonAuto);
			this->panel1->Controls->Add(this->buttonOrder);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(170, 600);
			this->panel1->TabIndex = 2;
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
			this->buttonFinans->Click += gcnew System::EventHandler(this, &MyFormOrder::buttonFinans_Click);
			this->buttonFinans->MouseLeave += gcnew System::EventHandler(this, &MyFormOrder::button_MouseLeave);
			this->buttonFinans->MouseHover += gcnew System::EventHandler(this, &MyFormOrder::button_MouseHover);
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
			this->buttonRoute->Click += gcnew System::EventHandler(this, &MyFormOrder::buttonRoute_Click);
			this->buttonRoute->MouseLeave += gcnew System::EventHandler(this, &MyFormOrder::button_MouseLeave);
			this->buttonRoute->MouseHover += gcnew System::EventHandler(this, &MyFormOrder::button_MouseHover);
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
			this->buttonDriver->Click += gcnew System::EventHandler(this, &MyFormOrder::buttonDriver_Click);
			this->buttonDriver->MouseLeave += gcnew System::EventHandler(this, &MyFormOrder::button_MouseLeave);
			this->buttonDriver->MouseHover += gcnew System::EventHandler(this, &MyFormOrder::button_MouseHover);
			// 
			// buttonAuto
			// 
			this->buttonAuto->BackColor = System::Drawing::Color::Transparent;
			this->buttonAuto->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
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
			this->buttonAuto->TabIndex = 1;
			this->buttonAuto->Text = L"Авто";
			this->buttonAuto->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonAuto->UseVisualStyleBackColor = true;
			this->buttonAuto->Click += gcnew System::EventHandler(this, &MyFormOrder::buttonAuto_Click);
			this->buttonAuto->MouseLeave += gcnew System::EventHandler(this, &MyFormOrder::button_MouseLeave);
			this->buttonAuto->MouseHover += gcnew System::EventHandler(this, &MyFormOrder::button_MouseHover);
			// 
			// buttonOrder
			// 
			this->buttonOrder->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->buttonOrder->FlatAppearance->BorderSize = 0;
			this->buttonOrder->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->buttonOrder->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonOrder->Font = (gcnew System::Drawing::Font(L"Montserrat Medium", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonOrder->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonOrder->Location = System::Drawing::Point(0, 110);
			this->buttonOrder->Margin = System::Windows::Forms::Padding(0);
			this->buttonOrder->Name = L"buttonOrder";
			this->buttonOrder->Padding = System::Windows::Forms::Padding(25, 5, 10, 5);
			this->buttonOrder->Size = System::Drawing::Size(170, 35);
			this->buttonOrder->TabIndex = 0;
			this->buttonOrder->Text = L"Заказы";
			this->buttonOrder->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonOrder->UseVisualStyleBackColor = false;
			// 
			// dataGridViewOrder
			// 
			this->dataGridViewOrder->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->dataGridViewOrder->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::DisplayedCells;
			this->dataGridViewOrder->BackgroundColor = System::Drawing::Color::White;
			this->dataGridViewOrder->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->dataGridViewOrder->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->dataGridViewOrder->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewOrder->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->id_order,
					this->owner, this->cargo, this->departure, this->Arrival, this->price, this->weight, this->lenght
			});
			this->dataGridViewOrder->Location = System::Drawing::Point(417, 41);
			this->dataGridViewOrder->Name = L"dataGridViewOrder";
			this->dataGridViewOrder->ReadOnly = true;
			this->dataGridViewOrder->Size = System::Drawing::Size(471, 350);
			this->dataGridViewOrder->TabIndex = 3;
			this->dataGridViewOrder->RowEnter += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyFormOrder::FillingTextBoxFormOrder);
			// 
			// id_order
			// 
			this->id_order->HeaderText = L"id";
			this->id_order->Name = L"id_order";
			this->id_order->ReadOnly = true;
			this->id_order->Visible = false;
			// 
			// owner
			// 
			this->owner->HeaderText = L"Заказчик";
			this->owner->Name = L"owner";
			this->owner->ReadOnly = true;
			this->owner->Width = 84;
			// 
			// cargo
			// 
			this->cargo->HeaderText = L"Груз";
			this->cargo->Name = L"cargo";
			this->cargo->ReadOnly = true;
			this->cargo->Width = 57;
			// 
			// departure
			// 
			this->departure->HeaderText = L"г. Отправления";
			this->departure->Name = L"departure";
			this->departure->ReadOnly = true;
			this->departure->Width = 110;
			// 
			// Arrival
			// 
			this->Arrival->HeaderText = L"г. Назначения";
			this->Arrival->Name = L"Arrival";
			this->Arrival->ReadOnly = true;
			this->Arrival->Width = 103;
			// 
			// price
			// 
			this->price->HeaderText = L"Стоимость";
			this->price->Name = L"price";
			this->price->ReadOnly = true;
			this->price->Width = 93;
			// 
			// weight
			// 
			this->weight->HeaderText = L"Вес";
			this->weight->Name = L"weight";
			this->weight->ReadOnly = true;
			this->weight->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->weight->Width = 53;
			// 
			// lenght
			// 
			this->lenght->HeaderText = L"Расстояние";
			this->lenght->Name = L"lenght";
			this->lenght->ReadOnly = true;
			this->lenght->Width = 99;
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
			this->label1->Location = System::Drawing::Point(601, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(108, 29);
			this->label1->TabIndex = 4;
			this->label1->Text = L"ЗАКАЗЫ";
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Montserrat", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(178, 119);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 18);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Заказчик:";
			// 
			// textBoxCustomer
			// 
			this->textBoxCustomer->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBoxCustomer->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxCustomer->Location = System::Drawing::Point(274, 116);
			this->textBoxCustomer->Name = L"textBoxCustomer";
			this->textBoxCustomer->Size = System::Drawing::Size(112, 21);
			this->textBoxCustomer->TabIndex = 6;
			// 
			// textBoxFrom
			// 
			this->textBoxFrom->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBoxFrom->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxFrom->Location = System::Drawing::Point(274, 163);
			this->textBoxFrom->Name = L"textBoxFrom";
			this->textBoxFrom->Size = System::Drawing::Size(112, 21);
			this->textBoxFrom->TabIndex = 8;
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Montserrat", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(178, 166);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(59, 18);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Откуда:";
			// 
			// textBoxTo
			// 
			this->textBoxTo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBoxTo->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxTo->Location = System::Drawing::Point(274, 190);
			this->textBoxTo->Name = L"textBoxTo";
			this->textBoxTo->Size = System::Drawing::Size(112, 21);
			this->textBoxTo->TabIndex = 10;
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Montserrat", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(178, 193);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(43, 18);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Куда:";
			// 
			// textBoxCost
			// 
			this->textBoxCost->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBoxCost->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxCost->Location = System::Drawing::Point(274, 266);
			this->textBoxCost->Name = L"textBoxCost";
			this->textBoxCost->Size = System::Drawing::Size(112, 21);
			this->textBoxCost->TabIndex = 12;
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Montserrat", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(178, 269);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(81, 18);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Стоимость:";
			// 
			// textBoxNameCargo
			// 
			this->textBoxNameCargo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBoxNameCargo->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxNameCargo->Location = System::Drawing::Point(274, 315);
			this->textBoxNameCargo->Name = L"textBoxNameCargo";
			this->textBoxNameCargo->Size = System::Drawing::Size(112, 21);
			this->textBoxNameCargo->TabIndex = 14;
			// 
			// label6
			// 
			this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Montserrat", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(178, 318);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(39, 18);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Груз:";
			// 
			// textBoxWeight
			// 
			this->textBoxWeight->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBoxWeight->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxWeight->Location = System::Drawing::Point(274, 342);
			this->textBoxWeight->Name = L"textBoxWeight";
			this->textBoxWeight->Size = System::Drawing::Size(112, 21);
			this->textBoxWeight->TabIndex = 16;
			// 
			// label7
			// 
			this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Montserrat", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(178, 345);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(36, 18);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Вес:";
			// 
			// buttonAdd
			// 
			this->buttonAdd->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->buttonAdd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->buttonAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonAdd->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonAdd->Location = System::Drawing::Point(452, 435);
			this->buttonAdd->Name = L"buttonAdd";
			this->buttonAdd->Size = System::Drawing::Size(100, 30);
			this->buttonAdd->TabIndex = 19;
			this->buttonAdd->Text = L"Добавить";
			this->buttonAdd->UseVisualStyleBackColor = false;
			this->buttonAdd->Click += gcnew System::EventHandler(this, &MyFormOrder::buttonAdd_Click);
			// 
			// buttonChange
			// 
			this->buttonChange->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->buttonChange->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->buttonChange->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonChange->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonChange->Location = System::Drawing::Point(600, 435);
			this->buttonChange->Name = L"buttonChange";
			this->buttonChange->Size = System::Drawing::Size(100, 30);
			this->buttonChange->TabIndex = 20;
			this->buttonChange->Text = L"Изменить";
			this->buttonChange->UseVisualStyleBackColor = false;
			this->buttonChange->Click += gcnew System::EventHandler(this, &MyFormOrder::buttonChange_Click);
			// 
			// buttonDelete
			// 
			this->buttonDelete->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->buttonDelete->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->buttonDelete->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonDelete->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonDelete->Location = System::Drawing::Point(748, 435);
			this->buttonDelete->Name = L"buttonDelete";
			this->buttonDelete->Size = System::Drawing::Size(100, 30);
			this->buttonDelete->TabIndex = 21;
			this->buttonDelete->Text = L"Удалить";
			this->buttonDelete->UseVisualStyleBackColor = false;
			this->buttonDelete->Click += gcnew System::EventHandler(this, &MyFormOrder::buttonDelete_Click);
			// 
			// textBoxDistance
			// 
			this->textBoxDistance->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBoxDistance->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxDistance->Location = System::Drawing::Point(274, 217);
			this->textBoxDistance->Name = L"textBoxDistance";
			this->textBoxDistance->Size = System::Drawing::Size(112, 21);
			this->textBoxDistance->TabIndex = 23;
			// 
			// distance
			// 
			this->distance->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->distance->AutoSize = true;
			this->distance->Font = (gcnew System::Drawing::Font(L"Montserrat", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->distance->Location = System::Drawing::Point(178, 220);
			this->distance->Name = L"distance";
			this->distance->Size = System::Drawing::Size(90, 18);
			this->distance->TabIndex = 22;
			this->distance->Text = L"Расстояние:";
			// 
			// textBoxId
			// 
			this->textBoxId->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBoxId->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxId->Location = System::Drawing::Point(274, 41);
			this->textBoxId->Name = L"textBoxId";
			this->textBoxId->ReadOnly = true;
			this->textBoxId->Size = System::Drawing::Size(112, 21);
			this->textBoxId->TabIndex = 25;
			// 
			// label8
			// 
			this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Montserrat", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(178, 44);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(24, 18);
			this->label8->TabIndex = 24;
			this->label8->Text = L"id:";
			// 
			// label10
			// 
			this->label10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Montserrat", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(178, 393);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(93, 18);
			this->label10->TabIndex = 26;
			this->label10->Text = L"Сортировка:";
			// 
			// listBoxSort
			// 
			this->listBoxSort->FormattingEnabled = true;
			this->listBoxSort->ItemHeight = 15;
			this->listBoxSort->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Вес", L"Расстояние" });
			this->listBoxSort->Location = System::Drawing::Point(274, 393);
			this->listBoxSort->Name = L"listBoxSort";
			this->listBoxSort->Size = System::Drawing::Size(112, 34);
			this->listBoxSort->TabIndex = 28;
			this->listBoxSort->SelectedIndexChanged += gcnew System::EventHandler(this, &MyFormOrder::listBoxSort_SelectedIndexChanged);
			// 
			// MyFormOrder
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScrollMargin = System::Drawing::Size(10, 10);
			this->ClientSize = System::Drawing::Size(900, 600);
			this->Controls->Add(this->listBoxSort);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBoxId);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBoxDistance);
			this->Controls->Add(this->distance);
			this->Controls->Add(this->buttonDelete);
			this->Controls->Add(this->buttonChange);
			this->Controls->Add(this->buttonAdd);
			this->Controls->Add(this->textBoxWeight);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBoxNameCargo);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBoxCost);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBoxTo);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBoxFrom);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBoxCustomer);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridViewOrder);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->buttonExit);
			this->Font = (gcnew System::Drawing::Font(L"Montserrat", 8.249999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyFormOrder";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Kuafer";
			this->Load += gcnew System::EventHandler(this, &MyFormOrder::MyFormOrder_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewOrder))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void buttonAuto_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonDriver_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonRoute_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonFinans_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonAdd_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonChange_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonDelete_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonExit_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button_MouseHover(System::Object^ sender, System::EventArgs^ e);
private: System::Void button_MouseLeave(System::Object^ sender, System::EventArgs^ e);
private: System::Void MyFormOrder_Load(System::Object^ sender, System::EventArgs^ e);
private: System::Void FillingTextBoxFormOrder(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
private: System::Void ClearTextBoxFormOrder();
private: System::Void listBoxSort_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);


};


}

