#pragma once


namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Net;
	using namespace System::IO;
	using namespace Newtonsoft::Json::Linq;
	using namespace System::Text;

	/*ref class Categorias;
	ref class Inicio;
	ref class Movimientos;*/

	/// <summary>
	/// Resumen de Stock
	/// </summary>re
	public ref class Stock : public System::Windows::Forms::Form
	{
	public:
		Stock(void)
		{
			InitializeComponent();
			CargarStock();

			
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Stock()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ eliminarBtn;
	protected:
	private: System::Windows::Forms::Button^ editarBtn;
	private: System::Windows::Forms::Button^ agregarBtn;
	private: System::Windows::Forms::DataGridView^ dataGridViewStock;
	private: System::Windows::Forms::TextBox^ nombreTB;






	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ stockTB;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ categoriaIDTB;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;




	private: System::Windows::Forms::TextBox^ limiteTB;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ codigoTB;




	private: System::Windows::Forms::DataGridViewTextBoxColumn^ nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ columnaStock;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CategoriaID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ limite;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Código;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Hora;
	private: System::Windows::Forms::Button^ actualizarBtn;











































	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->eliminarBtn = (gcnew System::Windows::Forms::Button());
			this->editarBtn = (gcnew System::Windows::Forms::Button());
			this->agregarBtn = (gcnew System::Windows::Forms::Button());
			this->dataGridViewStock = (gcnew System::Windows::Forms::DataGridView());
			this->nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->columnaStock = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CategoriaID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->limite = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Código = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Hora = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->nombreTB = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->stockTB = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->categoriaIDTB = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->limiteTB = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->codigoTB = (gcnew System::Windows::Forms::TextBox());
			this->actualizarBtn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewStock))->BeginInit();
			this->SuspendLayout();
			// 
			// eliminarBtn
			// 
			this->eliminarBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->eliminarBtn->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->eliminarBtn->FlatAppearance->BorderSize = 0;
			this->eliminarBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->eliminarBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->eliminarBtn->ForeColor = System::Drawing::Color::DarkRed;
			this->eliminarBtn->Location = System::Drawing::Point(1490, 675);
			this->eliminarBtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->eliminarBtn->Name = L"eliminarBtn";
			this->eliminarBtn->Size = System::Drawing::Size(143, 55);
			this->eliminarBtn->TabIndex = 13;
			this->eliminarBtn->Text = L"Eliminar";
			this->eliminarBtn->UseVisualStyleBackColor = false;
			this->eliminarBtn->Click += gcnew System::EventHandler(this, &Stock::eliminarBtn_Click);
			// 
			// editarBtn
			// 
			this->editarBtn->BackColor = System::Drawing::SystemColors::Control;
			this->editarBtn->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaption;
			this->editarBtn->FlatAppearance->BorderSize = 0;
			this->editarBtn->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->editarBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->editarBtn->ForeColor = System::Drawing::Color::SteelBlue;
			this->editarBtn->Location = System::Drawing::Point(1490, 614);
			this->editarBtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->editarBtn->Name = L"editarBtn";
			this->editarBtn->Size = System::Drawing::Size(143, 52);
			this->editarBtn->TabIndex = 12;
			this->editarBtn->Text = L"Editar";
			this->editarBtn->UseVisualStyleBackColor = false;
			this->editarBtn->Click += gcnew System::EventHandler(this, &Stock::editarBtn_Click);
			// 
			// agregarBtn
			// 
			this->agregarBtn->BackColor = System::Drawing::SystemColors::Window;
			this->agregarBtn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)), static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->agregarBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->agregarBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->agregarBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->agregarBtn->Location = System::Drawing::Point(1490, 552);
			this->agregarBtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->agregarBtn->Name = L"agregarBtn";
			this->agregarBtn->Size = System::Drawing::Size(143, 52);
			this->agregarBtn->TabIndex = 11;
			this->agregarBtn->Text = L"Agregar";
			this->agregarBtn->UseVisualStyleBackColor = false;
			this->agregarBtn->Click += gcnew System::EventHandler(this, &Stock::agregarBtn_Click);
			// 
			// dataGridViewStock
			// 
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::White;
			this->dataGridViewStock->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridViewStock->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridViewStock->BackgroundColor = System::Drawing::SystemColors::Window;
			this->dataGridViewStock->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridViewStock->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->dataGridViewStock->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12.5F, System::Drawing::FontStyle::Bold));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::MenuHighlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridViewStock->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridViewStock->ColumnHeadersHeight = 50;
			this->dataGridViewStock->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->nombre,
					this->id, this->columnaStock, this->CategoriaID, this->limite, this->Código, this->Hora
			});
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::WhiteSmoke;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridViewStock->DefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridViewStock->EnableHeadersVisualStyles = false;
			this->dataGridViewStock->GridColor = System::Drawing::Color::White;
			this->dataGridViewStock->Location = System::Drawing::Point(21, 492);
			this->dataGridViewStock->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridViewStock->Name = L"dataGridViewStock";
			this->dataGridViewStock->ReadOnly = true;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridViewStock->RowHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridViewStock->RowHeadersVisible = false;
			this->dataGridViewStock->RowHeadersWidth = 51;
			this->dataGridViewStock->RowTemplate->DividerHeight = 1;
			this->dataGridViewStock->RowTemplate->Height = 30;
			this->dataGridViewStock->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridViewStock->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->dataGridViewStock->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridViewStock->ShowRowErrors = false;
			this->dataGridViewStock->Size = System::Drawing::Size(1433, 332);
			this->dataGridViewStock->TabIndex = 10;
			// 
			// nombre
			// 
			this->nombre->HeaderText = L"Nombre";
			this->nombre->MinimumWidth = 6;
			this->nombre->Name = L"nombre";
			this->nombre->ReadOnly = true;
			// 
			// id
			// 
			this->id->HeaderText = L"Artículo ID";
			this->id->MinimumWidth = 6;
			this->id->Name = L"id";
			this->id->ReadOnly = true;
			// 
			// columnaStock
			// 
			this->columnaStock->HeaderText = L"Stock";
			this->columnaStock->MinimumWidth = 6;
			this->columnaStock->Name = L"columnaStock";
			this->columnaStock->ReadOnly = true;
			// 
			// CategoriaID
			// 
			this->CategoriaID->HeaderText = L"Categoria";
			this->CategoriaID->MinimumWidth = 6;
			this->CategoriaID->Name = L"CategoriaID";
			this->CategoriaID->ReadOnly = true;
			// 
			// limite
			// 
			this->limite->HeaderText = L"Limite";
			this->limite->MinimumWidth = 6;
			this->limite->Name = L"limite";
			this->limite->ReadOnly = true;
			// 
			// Código
			// 
			this->Código->HeaderText = L"Código";
			this->Código->MinimumWidth = 6;
			this->Código->Name = L"Código";
			this->Código->ReadOnly = true;
			// 
			// Hora
			// 
			this->Hora->HeaderText = L"Hora";
			this->Hora->MinimumWidth = 6;
			this->Hora->Name = L"Hora";
			this->Hora->ReadOnly = true;
			// 
			// nombreTB
			// 
			this->nombreTB->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nombreTB->Location = System::Drawing::Point(209, 126);
			this->nombreTB->Margin = System::Windows::Forms::Padding(4);
			this->nombreTB->Multiline = true;
			this->nombreTB->Name = L"nombreTB";
			this->nombreTB->Size = System::Drawing::Size(271, 36);
			this->nombreTB->TabIndex = 15;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(107)),
				static_cast<System::Int32>(static_cast<System::Byte>(135)));
			this->label4->Location = System::Drawing::Point(20, 126);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(118, 37);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Nombre";
			// 
			// stockTB
			// 
			this->stockTB->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stockTB->Location = System::Drawing::Point(209, 187);
			this->stockTB->Margin = System::Windows::Forms::Padding(4);
			this->stockTB->Multiline = true;
			this->stockTB->Name = L"stockTB";
			this->stockTB->Size = System::Drawing::Size(271, 36);
			this->stockTB->TabIndex = 17;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(107)),
				static_cast<System::Int32>(static_cast<System::Byte>(135)));
			this->label1->Location = System::Drawing::Point(20, 187);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(84, 37);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Stock";
			// 
			// categoriaIDTB
			// 
			this->categoriaIDTB->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->categoriaIDTB->Location = System::Drawing::Point(209, 249);
			this->categoriaIDTB->Margin = System::Windows::Forms::Padding(4);
			this->categoriaIDTB->Multiline = true;
			this->categoriaIDTB->Name = L"categoriaIDTB";
			this->categoriaIDTB->Size = System::Drawing::Size(271, 36);
			this->categoriaIDTB->TabIndex = 19;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(107)),
				static_cast<System::Int32>(static_cast<System::Byte>(135)));
			this->label2->Location = System::Drawing::Point(20, 249);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(169, 37);
			this->label2->TabIndex = 18;
			this->label2->Text = L"Categoria ID";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16.2F, System::Drawing::FontStyle::Bold));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->label6->Location = System::Drawing::Point(768, 46);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(126, 38);
			this->label6->TabIndex = 23;
			this->label6->Text = L"Usuarios";
			this->label6->Click += gcnew System::EventHandler(this, &Stock::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(107)),
				static_cast<System::Int32>(static_cast<System::Byte>(135)));
			this->label7->Location = System::Drawing::Point(501, 46);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(86, 38);
			this->label7->TabIndex = 22;
			this->label7->Text = L"Stock";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->label8->Location = System::Drawing::Point(235, 46);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(85, 38);
			this->label8->TabIndex = 21;
			this->label8->Text = L"Inicio";
			this->label8->Click += gcnew System::EventHandler(this, &Stock::label8_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16.2F, System::Drawing::FontStyle::Bold));
			this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->label10->Location = System::Drawing::Point(1301, 46);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(152, 38);
			this->label10->TabIndex = 24;
			this->label10->Text = L"Categorias";
			this->label10->Click += gcnew System::EventHandler(this, &Stock::label10_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16.2F, System::Drawing::FontStyle::Bold));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->label9->Location = System::Drawing::Point(1035, 46);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(183, 38);
			this->label9->TabIndex = 25;
			this->label9->Text = L"Movimientos";
			this->label9->Click += gcnew System::EventHandler(this, &Stock::label9_Click);
			// 
			// limiteTB
			// 
			this->limiteTB->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->limiteTB->Location = System::Drawing::Point(209, 310);
			this->limiteTB->Margin = System::Windows::Forms::Padding(4);
			this->limiteTB->Multiline = true;
			this->limiteTB->Name = L"limiteTB";
			this->limiteTB->Size = System::Drawing::Size(271, 36);
			this->limiteTB->TabIndex = 27;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(107)),
				static_cast<System::Int32>(static_cast<System::Byte>(135)));
			this->label3->Location = System::Drawing::Point(20, 310);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(92, 37);
			this->label3->TabIndex = 26;
			this->label3->Text = L"Límite";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(107)),
				static_cast<System::Int32>(static_cast<System::Byte>(135)));
			this->label5->Location = System::Drawing::Point(20, 369);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(105, 37);
			this->label5->TabIndex = 28;
			this->label5->Text = L"Código";
			// 
			// codigoTB
			// 
			this->codigoTB->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->codigoTB->Location = System::Drawing::Point(209, 370);
			this->codigoTB->Margin = System::Windows::Forms::Padding(4);
			this->codigoTB->Multiline = true;
			this->codigoTB->Name = L"codigoTB";
			this->codigoTB->Size = System::Drawing::Size(271, 36);
			this->codigoTB->TabIndex = 29;
			// 
			// actualizarBtn
			// 
			this->actualizarBtn->BackColor = System::Drawing::SystemColors::Control;
			this->actualizarBtn->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaption;
			this->actualizarBtn->FlatAppearance->BorderSize = 0;
			this->actualizarBtn->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->actualizarBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->actualizarBtn->ForeColor = System::Drawing::Color::SteelBlue;
			this->actualizarBtn->Location = System::Drawing::Point(1490, 492);
			this->actualizarBtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->actualizarBtn->Name = L"actualizarBtn";
			this->actualizarBtn->Size = System::Drawing::Size(143, 52);
			this->actualizarBtn->TabIndex = 32;
			this->actualizarBtn->Text = L"Actualizar";
			this->actualizarBtn->UseVisualStyleBackColor = false;
			this->actualizarBtn->Click += gcnew System::EventHandler(this, &Stock::actualizarBtn_Click);
			// 
			// Stock
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1685, 838);
			this->Controls->Add(this->actualizarBtn);
			this->Controls->Add(this->codigoTB);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->limiteTB);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->categoriaIDTB);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->stockTB);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->nombreTB);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->eliminarBtn);
			this->Controls->Add(this->editarBtn);
			this->Controls->Add(this->agregarBtn);
			this->Controls->Add(this->dataGridViewStock);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Stock";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Stock";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewStock))->EndInit();
			//PictureBox^ pictureBox = gcnew PictureBox();
			//pictureBox->Location = System::Drawing::Point(10, 10); // posición en la esquina superior izquierda
			//pictureBox->Size = System::Drawing::Size(220, 115); // tamaño del logo
			//pictureBox->SizeMode = PictureBoxSizeMode::Zoom;
			//pictureBox->Image = Image::FromFile("logo.png");
			//this->Controls->Add(pictureBox);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CargarStock() {
		// URL de la API
		String^ apiUrl = "https://api-gestion-inventario.up.railway.app/articulos";

		try {
			// Crear la solicitud HTTP GET
			HttpWebRequest^ request = dynamic_cast<HttpWebRequest^>(WebRequest::Create(apiUrl));
			request->Method = "GET";
			request->ContentType = "application/json";

			// Obtener la respuesta del servidor
			HttpWebResponse^ response = dynamic_cast<HttpWebResponse^>(request->GetResponse());
			StreamReader^ reader = gcnew StreamReader(response->GetResponseStream());
			String^ responseJson = reader->ReadToEnd();
			reader->Close();

			// Verificar si el JSON recibido es válido
			if (String::IsNullOrEmpty(responseJson)) {
				MessageBox::Show("La API devolvió una respuesta vacía.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			// Parsear la respuesta JSON
			JArray^ Stock = JArray::Parse(responseJson);

			// Verificar si el JSON está vacío
			if (Object::ReferenceEquals(Stock, nullptr) || Stock->Count == 0) {
				MessageBox::Show("No se encontraron artículos en la API.", "Información", MessageBoxButtons::OK, MessageBoxIcon::Information);
				return;
			}

			// Limpiar el DataGridView antes de cargar los datos
			dataGridViewStock->Rows->Clear();
			dataGridViewStock->Columns->Clear();

			// Agregar columnas al DataGridView
			dataGridViewStock->Columns->Add("nombre", "Nombre");
			dataGridViewStock->Columns->Add("id", "Artículo ID");
			dataGridViewStock->Columns->Add("stock", "Stock");
			dataGridViewStock->Columns->Add("categoriaId", "Categoria");
			dataGridViewStock->Columns->Add("limite", "Limite");
			dataGridViewStock->Columns->Add("codigo", "Código");
			dataGridViewStock->Columns->Add("fechaHora", "Hora");

			// Recorrer los artículos y agregarlos al DataGridView
			for each(JObject ^ articulo in Stock) {
				if (Convert::ToBoolean(articulo["borrado"])) continue;
				String^ nombre = (articulo->ContainsKey("nombre") && articulo["nombre"]->Type != JTokenType::Null) ? articulo["nombre"]->ToString() : "N/A";
				String^ fechaHora = (articulo->ContainsKey("fechaHora") && articulo["fechaHora"]->Type != JTokenType::Null) ? articulo["fechaHora"]->ToString() : "00:00";
				int stock = (articulo->ContainsKey("stock") && articulo["stock"]->Type != JTokenType::Null) ? Int32::Parse(articulo["stock"]->ToString()) : 0;
				int codigo = (articulo->ContainsKey("codigo") && articulo["codigo"]->Type != JTokenType::Null) ? Int32::Parse(articulo["codigo"]->ToString()) : 0;
				int limite = (articulo->ContainsKey("limite") && articulo["limite"]->Type != JTokenType::Null) ? Int32::Parse(articulo["limite"]->ToString()) : 0;
				int id = (articulo->ContainsKey("id") && articulo["id"]->Type != JTokenType::Null) ? Int32::Parse(articulo["id"]->ToString()) : 0;

				// Acceder al objeto "categoria" para obtener el id y nombre
				JObject^ categoria = (articulo->ContainsKey("categoria") && articulo["categoria"]->Type != JTokenType::Null) ? safe_cast<JObject^>(articulo["categoria"]) : nullptr;
				int categoriaId = (categoria->ContainsKey("id") && categoria["id"]->Type != JTokenType::Null) ? Int32::Parse(categoria["id"]->ToString()) : 0;
				String^ categoriaNombre = (categoria->ContainsKey("nombre") && categoria["nombre"]->Type != JTokenType::Null) ? categoria["nombre"]->ToString() : "N/A";

				dataGridViewStock->Rows->Add(nombre, id, stock, categoriaId, limite, codigo, fechaHora);
			}
		}
		catch (WebException^ ex) {
			MessageBox::Show("Error al obtener los artículos: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error inesperado: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void agregarBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ apiUrl = "https://api-gestion-inventario.up.railway.app/articulos";

		// Obtener valores de los TextBox
		String^ nombre = nombreTB->Text;
		String^ stockStr = stockTB->Text;
		String^ categoriaIdStr = categoriaIDTB->Text;
		String^ limiteStr = limiteTB->Text;
		String^ codigoStr = codigoTB->Text;

		try {
			// Validar que los campos no estén vacíos
			if (String::IsNullOrWhiteSpace(nombre) || String::IsNullOrWhiteSpace(stockStr) ||
				String::IsNullOrWhiteSpace(categoriaIdStr) || String::IsNullOrWhiteSpace(limiteStr) ||
				String::IsNullOrWhiteSpace(codigoStr)) {
				MessageBox::Show("Todos los campos son obligatorios.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			// Validar que el código tenga exactamente 5 dígitos
			if (codigoStr->Length != 5) {
				MessageBox::Show("El código debe tener exactamente 5 dígitos.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			// Convertir valores numéricos
			int stock = Int32::Parse(stockStr);
			int categoriaId = Int32::Parse(categoriaIdStr);
			int limite = Int32::Parse(limiteStr);
			int codigo = Int32::Parse(codigoStr);

			// Asignar una fecha hardcodeada
			String^ fechaHora = "2024-01-01 00:00:00";

			// Crear el JSON del cuerpo de la solicitud
			JObject^ jsonBody = gcnew JObject();
			jsonBody["nombre"] = nombre;
			jsonBody["stock"] = stock;
			jsonBody["categoriaId"] = categoriaId;
			jsonBody["limite"] = limite;
			jsonBody["codigo"] = codigo;
			jsonBody["fechaHora"] = fechaHora; // Fecha hardcodeada
			String^ postData = jsonBody->ToString();

			// Crear la solicitud HTTP
			HttpWebRequest^ request = dynamic_cast<HttpWebRequest^>(WebRequest::Create(apiUrl));
			request->Method = "POST";
			request->ContentType = "application/json";
			request->Accept = "application/json";
			request->ContentLength = Encoding::UTF8->GetByteCount(postData);

			// Convertir el string JSON a bytes
			array<Byte>^ postBytes = Encoding::UTF8->GetBytes(postData);

			// Escribir los datos en la solicitud
			Stream^ dataStream = request->GetRequestStream();
			dataStream->Write(postBytes, 0, postBytes->Length);
			dataStream->Close();

			// Obtener la respuesta del servidor
			HttpWebResponse^ response = dynamic_cast<HttpWebResponse^>(request->GetResponse());
			StreamReader^ reader = gcnew StreamReader(response->GetResponseStream());
			String^ responseJson = reader->ReadToEnd();
			reader->Close();

			// Mostrar mensaje de éxito
			MessageBox::Show("Artículo agregado correctamente.", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);

			// Limpiar los TextBox después de agregar el artículo
			nombreTB->Clear();
			stockTB->Clear();
			categoriaIDTB->Clear();
			limiteTB->Clear();
			codigoTB->Clear();

			// Recargar el DataGrid para mostrar el nuevo artículo
			CargarStock();
		}

		catch (WebException^ ex) {
			if (ex->Response != nullptr) {
				HttpWebResponse^ httpResponse = dynamic_cast<HttpWebResponse^>(ex->Response);
				StreamReader^ errorReader = gcnew StreamReader(httpResponse->GetResponseStream());
				String^ errorResponse = errorReader->ReadToEnd();
				errorReader->Close();
				MessageBox::Show("Error de API: " + errorResponse, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else {
				MessageBox::Show("Error de conexión: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		catch (FormatException^) {
			MessageBox::Show("Stock, Categoría ID y Límite deben ser números válidos.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error inesperado: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void editarBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (dataGridViewStock->SelectedRows->Count == 0) {
			MessageBox::Show("Seleccione un artículo para editar.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Obtener el ID del artículo seleccionado
		int id = Convert::ToInt32(dataGridViewStock->SelectedRows[0]->Cells["id"]->Value);

		// Obtener valores editados de los TextBox
		String^ nombre = nombreTB->Text;
		String^ stockStr = stockTB->Text;
		String^ categoriaIdStr = categoriaIDTB->Text;
		String^ limiteStr = limiteTB->Text;
		String^ codigoStr = codigoTB->Text;

		// Fecha hardcodeada
		String^ fechaHora = "2000-01-01 00:00:00";

		try {
			if (String::IsNullOrWhiteSpace(nombre) || String::IsNullOrWhiteSpace(stockStr) ||
				String::IsNullOrWhiteSpace(categoriaIdStr) || String::IsNullOrWhiteSpace(codigoStr)) {
				MessageBox::Show("Todos los campos (excepto Límite) son obligatorios.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			// Convertir a tipos numéricos
			int stock = Int32::Parse(stockStr);
			int categoriaId = Int32::Parse(categoriaIdStr);
			int codigo = Int32::Parse(codigoStr);
			int limite = Int32::Parse(limiteStr);

			// Crear JSON del cuerpo de la solicitud
			JObject^ jsonBody = gcnew JObject();
			jsonBody["id"] = id;
			jsonBody["nombre"] = nombre;
			jsonBody["stock"] = stock;
			jsonBody["codigo"] = codigo;
			jsonBody["fechaHora"] = fechaHora;  // Se usa la fecha hardcodeada
			jsonBody["categoriaId"] = categoriaId;
			jsonBody["limite"] = limite;

			String^ putData = jsonBody->ToString();

			// URL de la API
			String^ apiUrl = "https://api-gestion-inventario.up.railway.app/articulos";

			// Crear la solicitud HTTP
			HttpWebRequest^ request = dynamic_cast<HttpWebRequest^>(WebRequest::Create(apiUrl));
			request->Method = "PUT";
			request->ContentType = "application/json";
			request->Accept = "application/json";

			// Convertir JSON a bytes y enviarlo
			array<Byte>^ putBytes = Encoding::UTF8->GetBytes(putData);
			request->ContentLength = putBytes->Length;
			Stream^ dataStream = request->GetRequestStream();
			dataStream->Write(putBytes, 0, putBytes->Length);
			dataStream->Close();

			// Obtener la respuesta del servidor
			HttpWebResponse^ response = dynamic_cast<HttpWebResponse^>(request->GetResponse());
			StreamReader^ reader = gcnew StreamReader(response->GetResponseStream());
			String^ responseJson = reader->ReadToEnd();
			reader->Close();

			// Mostrar mensaje de éxito
			MessageBox::Show("Artículo actualizado correctamente.", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);

			// Recargar el DataGridView después de la edición
			CargarStock();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void eliminarBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		// Verificar que hay una fila seleccionada en el DataGridView
		if (dataGridViewStock->SelectedRows->Count == 0) {
			MessageBox::Show("Seleccione un artículo para eliminar.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Obtener el ID del artículo seleccionado
		int id = Convert::ToInt32(dataGridViewStock->SelectedRows[0]->Cells["id"]->Value);

		// Confirmación antes de eliminar
		System::Windows::Forms::DialogResult resultado;
		resultado = MessageBox::Show("¿Está seguro de que desea eliminar este artículo?", "Confirmar eliminación",
			MessageBoxButtons::YesNo, MessageBoxIcon::Warning);

		if (resultado == System::Windows::Forms::DialogResult::No) {
			return;
		}

		try {
			// URL de la API con el ID del artículo
			String^ apiUrl = "https://api-gestion-inventario.up.railway.app/articulos/" + id;

			// Crear la solicitud HTTP
			HttpWebRequest^ request = dynamic_cast<HttpWebRequest^>(WebRequest::Create(apiUrl));
			request->Method = "DELETE";
			request->ContentType = "application/json";
			request->Accept = "application/json";

			// Obtener la respuesta del servidor
			HttpWebResponse^ response = dynamic_cast<HttpWebResponse^>(request->GetResponse());
			StreamReader^ reader = gcnew StreamReader(response->GetResponseStream());
			String^ responseJson = reader->ReadToEnd();
			reader->Close();

			// Mostrar mensaje de éxito
			MessageBox::Show("Artículo eliminado correctamente.", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);

			// Recargar el DataGridView después de eliminar el artículo
			CargarStock();
		}
		catch (WebException^ ex) {
			// Manejar errores HTTP
			if (ex->Response != nullptr) {
				HttpWebResponse^ httpResponse = dynamic_cast<HttpWebResponse^>(ex->Response);
				StreamReader^ errorReader = gcnew StreamReader(httpResponse->GetResponseStream());
				String^ errorResponse = errorReader->ReadToEnd();
				errorReader->Close();
				MessageBox::Show("Error de API: " + errorResponse, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else {
				MessageBox::Show("Error de conexión: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error inesperado: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	
		   // Métodos para manejar los clics en los labels
		Void label8_Click(System::Object^ sender, System::EventArgs^ e);
		Void label6_Click(System::Object^ sender, System::EventArgs^ e);
		Void label9_Click(System::Object^ sender, System::EventArgs^ e);
		Void label10_Click(System::Object^ sender, System::EventArgs^ e);


private: System::Void actualizarBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	CargarStock(); // Llama al método que carga los datos desde la API
	MessageBox::Show("Datos recargados correctamente.", "Información", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
};

};