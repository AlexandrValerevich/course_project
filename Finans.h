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
	/// Сводка для MyFormFinans
	/// </summary>
	public ref class MyFormFinans : public System::Windows::Forms::Form
	{
	public:
		MyFormFinans(void)
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
		~MyFormFinans()
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
	private: System::Windows::Forms::Button^ buttonAuto;
	private: System::Windows::Forms::DataGridView^ dataGridViewFinance;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBoxCustomer;
	private: System::Windows::Forms::TextBox^ textBoxPayment;



	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBoxCost;

	private: System::Windows::Forms::Label^ label4;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ buttonAdd;
	private: System::Windows::Forms::Button^ buttonChange;
	private: System::Windows::Forms::Button^ buttonDelete;



	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ buttonOrder;

	private: System::Windows::Forms::Button^ buttonFinanse;
	private: System::Windows::Forms::TextBox^ textBoxId;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBoxProfit;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ labelProfitSum;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ order_owner;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ price;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Cost;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Profit;


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
			this->buttonFinanse = (gcnew System::Windows::Forms::Button());
			this->buttonOrder = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->buttonAuto = (gcnew System::Windows::Forms::Button());
			this->buttonRoute = (gcnew System::Windows::Forms::Button());
			this->buttonDriver = (gcnew System::Windows::Forms::Button());
			this->dataGridViewFinance = (gcnew System::Windows::Forms::DataGridView());
			this->id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->order_owner = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Cost = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Profit = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxCustomer = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPayment = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxCost = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->buttonAdd = (gcnew System::Windows::Forms::Button());
			this->buttonChange = (gcnew System::Windows::Forms::Button());
			this->buttonDelete = (gcnew System::Windows::Forms::Button());
			this->textBoxId = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBoxProfit = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->labelProfitSum = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewFinance))->BeginInit();
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
			this->buttonExit->Click += gcnew System::EventHandler(this, &MyFormFinans::buttonExit_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->panel1->Controls->Add(this->buttonFinanse);
			this->panel1->Controls->Add(this->buttonOrder);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->buttonAuto);
			this->panel1->Controls->Add(this->buttonRoute);
			this->panel1->Controls->Add(this->buttonDriver);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(170, 600);
			this->panel1->TabIndex = 2;
			// 
			// buttonFinanse
			// 
			this->buttonFinanse->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->buttonFinanse->FlatAppearance->BorderSize = 0;
			this->buttonFinanse->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->buttonFinanse->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonFinanse->Font = (gcnew System::Drawing::Font(L"Montserrat Medium", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonFinanse->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonFinanse->Location = System::Drawing::Point(0, 250);
			this->buttonFinanse->Margin = System::Windows::Forms::Padding(0);
			this->buttonFinanse->Name = L"buttonFinanse";
			this->buttonFinanse->Padding = System::Windows::Forms::Padding(25, 5, 10, 5);
			this->buttonFinanse->Size = System::Drawing::Size(170, 35);
			this->buttonFinanse->TabIndex = 7;
			this->buttonFinanse->Text = L"Финансы";
			this->buttonFinanse->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonFinanse->UseVisualStyleBackColor = false;
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
			this->buttonOrder->Click += gcnew System::EventHandler(this, &MyFormFinans::buttonOrder_Click);
			this->buttonOrder->MouseLeave += gcnew System::EventHandler(this, &MyFormFinans::button_MouseLeave);
			this->buttonOrder->MouseHover += gcnew System::EventHandler(this, &MyFormFinans::button_MouseHover);
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
			this->buttonAuto->TabIndex = 4;
			this->buttonAuto->Text = L"Авто";
			this->buttonAuto->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonAuto->UseVisualStyleBackColor = false;
			this->buttonAuto->Click += gcnew System::EventHandler(this, &MyFormFinans::buttonAuto_Click);
			this->buttonAuto->MouseLeave += gcnew System::EventHandler(this, &MyFormFinans::button_MouseLeave);
			this->buttonAuto->MouseHover += gcnew System::EventHandler(this, &MyFormFinans::button_MouseHover);
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
			this->buttonRoute->Click += gcnew System::EventHandler(this, &MyFormFinans::buttonRoute_Click);
			this->buttonRoute->MouseLeave += gcnew System::EventHandler(this, &MyFormFinans::button_MouseLeave);
			this->buttonRoute->MouseHover += gcnew System::EventHandler(this, &MyFormFinans::button_MouseHover);
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
			this->buttonDriver->Click += gcnew System::EventHandler(this, &MyFormFinans::buttonDriver_Click);
			this->buttonDriver->MouseLeave += gcnew System::EventHandler(this, &MyFormFinans::button_MouseLeave);
			this->buttonDriver->MouseHover += gcnew System::EventHandler(this, &MyFormFinans::button_MouseHover);
			// 
			// dataGridViewFinance
			// 
			this->dataGridViewFinance->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->dataGridViewFinance->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridViewFinance->BackgroundColor = System::Drawing::Color::White;
			this->dataGridViewFinance->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->dataGridViewFinance->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewFinance->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->id,
					this->order_owner, this->price, this->Cost, this->Profit
			});
			this->dataGridViewFinance->Location = System::Drawing::Point(417, 41);
			this->dataGridViewFinance->Name = L"dataGridViewFinance";
			this->dataGridViewFinance->ReadOnly = true;
			this->dataGridViewFinance->Size = System::Drawing::Size(471, 481);
			this->dataGridViewFinance->TabIndex = 3;
			this->dataGridViewFinance->RowEnter += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyFormFinans::FillingTextBoxFormFinance);
			// 
			// id
			// 
			this->id->HeaderText = L"id";
			this->id->Name = L"id";
			this->id->Visible = false;
			// 
			// order_owner
			// 
			this->order_owner->HeaderText = L"Заказчик";
			this->order_owner->Name = L"order_owner";
			// 
			// price
			// 
			this->price->HeaderText = L"Цена";
			this->price->Name = L"price";
			// 
			// Cost
			// 
			this->Cost->HeaderText = L"Издержки";
			this->Cost->Name = L"Cost";
			// 
			// Profit
			// 
			this->Profit->HeaderText = L"Прибыль";
			this->Profit->Name = L"Profit";
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
			this->label1->Location = System::Drawing::Point(597, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(136, 29);
			this->label1->TabIndex = 4;
			this->label1->Text = L"ФИНАНСЫ";
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
			this->label2->Size = System::Drawing::Size(75, 18);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Заказчик:";
			// 
			// textBoxCustomer
			// 
			this->textBoxCustomer->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBoxCustomer->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxCustomer->Location = System::Drawing::Point(268, 85);
			this->textBoxCustomer->Name = L"textBoxCustomer";
			this->textBoxCustomer->ReadOnly = true;
			this->textBoxCustomer->Size = System::Drawing::Size(112, 21);
			this->textBoxCustomer->TabIndex = 6;
			// 
			// textBoxPayment
			// 
			this->textBoxPayment->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBoxPayment->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxPayment->Location = System::Drawing::Point(268, 141);
			this->textBoxPayment->Name = L"textBoxPayment";
			this->textBoxPayment->ReadOnly = true;
			this->textBoxPayment->Size = System::Drawing::Size(112, 21);
			this->textBoxPayment->TabIndex = 8;
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Montserrat", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(187, 144);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(52, 18);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Плата:";
			// 
			// textBoxCost
			// 
			this->textBoxCost->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBoxCost->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxCost->Location = System::Drawing::Point(268, 168);
			this->textBoxCost->Name = L"textBoxCost";
			this->textBoxCost->ReadOnly = true;
			this->textBoxCost->Size = System::Drawing::Size(112, 21);
			this->textBoxCost->TabIndex = 10;
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Montserrat", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(187, 171);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(82, 18);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Издержки:";
			// 
			// label6
			// 
			this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Montserrat", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(186, 258);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(123, 18);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Общая прибыль:";
			// 
			// buttonAdd
			// 
			this->buttonAdd->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->buttonAdd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->buttonAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonAdd->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonAdd->Location = System::Drawing::Point(454, 538);
			this->buttonAdd->Name = L"buttonAdd";
			this->buttonAdd->Size = System::Drawing::Size(100, 30);
			this->buttonAdd->TabIndex = 19;
			this->buttonAdd->Text = L"Добавить";
			this->buttonAdd->UseCompatibleTextRendering = true;
			this->buttonAdd->UseVisualStyleBackColor = false;
			this->buttonAdd->Visible = false;
			this->buttonAdd->Click += gcnew System::EventHandler(this, &MyFormFinans::buttonAdd_Click);
			// 
			// buttonChange
			// 
			this->buttonChange->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->buttonChange->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->buttonChange->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonChange->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonChange->Location = System::Drawing::Point(602, 538);
			this->buttonChange->Name = L"buttonChange";
			this->buttonChange->Size = System::Drawing::Size(100, 30);
			this->buttonChange->TabIndex = 20;
			this->buttonChange->Text = L"Изменить";
			this->buttonChange->UseCompatibleTextRendering = true;
			this->buttonChange->UseVisualStyleBackColor = false;
			this->buttonChange->Visible = false;
			this->buttonChange->Click += gcnew System::EventHandler(this, &MyFormFinans::buttonChange_Click);
			// 
			// buttonDelete
			// 
			this->buttonDelete->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->buttonDelete->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->buttonDelete->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonDelete->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonDelete->Location = System::Drawing::Point(750, 538);
			this->buttonDelete->Name = L"buttonDelete";
			this->buttonDelete->Size = System::Drawing::Size(100, 30);
			this->buttonDelete->TabIndex = 21;
			this->buttonDelete->Text = L"Удалить";
			this->buttonDelete->UseCompatibleTextRendering = true;
			this->buttonDelete->UseVisualStyleBackColor = false;
			this->buttonDelete->Visible = false;
			this->buttonDelete->Click += gcnew System::EventHandler(this, &MyFormFinans::buttonDelete_Click);
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
			this->textBoxId->TabIndex = 29;
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
			this->label8->TabIndex = 28;
			this->label8->Text = L"id:";
			// 
			// textBoxProfit
			// 
			this->textBoxProfit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBoxProfit->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxProfit->Location = System::Drawing::Point(268, 195);
			this->textBoxProfit->Name = L"textBoxProfit";
			this->textBoxProfit->ReadOnly = true;
			this->textBoxProfit->Size = System::Drawing::Size(112, 21);
			this->textBoxProfit->TabIndex = 31;
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Montserrat", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(187, 198);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(74, 18);
			this->label5->TabIndex = 30;
			this->label5->Text = L"Прибыль:";
			// 
			// labelProfitSum
			// 
			this->labelProfitSum->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->labelProfitSum->AutoSize = true;
			this->labelProfitSum->Font = (gcnew System::Drawing::Font(L"Montserrat", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelProfitSum->Location = System::Drawing::Point(315, 258);
			this->labelProfitSum->Name = L"labelProfitSum";
			this->labelProfitSum->Size = System::Drawing::Size(48, 18);
			this->labelProfitSum->TabIndex = 32;
			this->labelProfitSum->Text = L"0 руб.";
			// 
			// MyFormFinans
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScrollMargin = System::Drawing::Size(10, 10);
			this->ClientSize = System::Drawing::Size(900, 600);
			this->Controls->Add(this->labelProfitSum);
			this->Controls->Add(this->textBoxProfit);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBoxId);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->buttonDelete);
			this->Controls->Add(this->buttonChange);
			this->Controls->Add(this->buttonAdd);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBoxCost);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBoxPayment);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBoxCustomer);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridViewFinance);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->buttonExit);
			this->Font = (gcnew System::Drawing::Font(L"Montserrat", 8.249999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyFormFinans";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Kuafer";
			this->Load += gcnew System::EventHandler(this, &MyFormFinans::MyFormFinans_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewFinance))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void buttonOrder_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonAuto_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonDriver_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonRoute_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonAdd_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonChange_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonDelete_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonExit_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void MyFormFinans_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_MouseHover(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_MouseLeave(System::Object^ sender, System::EventArgs^ e);
	private:System::Void ClearTextBoxFormFinance();
	private:System::Void FillingTextBoxFormFinance(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);

};


}

