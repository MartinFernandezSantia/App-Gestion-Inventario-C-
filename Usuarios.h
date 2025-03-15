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
	
	/*ref class Stock;
	ref class Inicio;
	ref class Movimientos;*/

	/// <summary>
	/// Resumen de Usuarios
	/// </summary>
	public ref class Usuarios : public System::Windows::Forms::Form

	{
	public:
		Usuarios(void)
		{
			InitializeComponent();
			
			CargarUsuarios();
			this->buscador->TextChanged += gcnew System::EventHandler(this, &Usuarios::buscador_TextChanged);


			
			
			
			this->label10->Click += gcnew System::EventHandler(this, &Usuarios::label10_Click);
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Usuarios()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label3;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridViewUs;






	private: System::Windows::Forms::Button^ agregarBtn;




	private: System::Windows::Forms::Button^ editarBtn;
	private: System::Windows::Forms::Button^ eliminarBtn;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ nombreTB;
	private: System::Windows::Forms::TextBox^ apellidoTB;




	private: System::Windows::Forms::Label^ label5;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ permisoTB;

	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::TextBox^ legTB;
	private: System::Windows::Forms::TextBox^ buscador;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ actualizarBtn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaNombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaApellido;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaLegajo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaPermiso;
	private: System::Windows::Forms::Button^ blanquearBtn;
































	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridViewUs = (gcnew System::Windows::Forms::DataGridView());
			this->ColumnaNombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnaApellido = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnaId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnaLegajo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnaPermiso = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->agregarBtn = (gcnew System::Windows::Forms::Button());
			this->editarBtn = (gcnew System::Windows::Forms::Button());
			this->eliminarBtn = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->nombreTB = (gcnew System::Windows::Forms::TextBox());
			this->apellidoTB = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->permisoTB = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->legTB = (gcnew System::Windows::Forms::TextBox());
			this->buscador = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->actualizarBtn = (gcnew System::Windows::Forms::Button());
			this->blanquearBtn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewUs))->BeginInit();
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Cursor = System::Windows::Forms::Cursors::Default;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16.2F, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(107)),
				static_cast<System::Int32>(static_cast<System::Byte>(135)));
			this->label3->Location = System::Drawing::Point(768, 46);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(126, 38);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Usuarios";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->label2->Location = System::Drawing::Point(501, 46);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 38);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Stock";
			this->label2->Click += gcnew System::EventHandler(this, &Usuarios::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->label1->Location = System::Drawing::Point(235, 46);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(85, 38);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Inicio";
			this->label1->Click += gcnew System::EventHandler(this, &Usuarios::label1_Click);
			// 
			// dataGridViewUs
			// 
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::White;
			this->dataGridViewUs->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridViewUs->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridViewUs->BackgroundColor = System::Drawing::SystemColors::Window;
			this->dataGridViewUs->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridViewUs->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->dataGridViewUs->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12.5F, System::Drawing::FontStyle::Bold));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::MenuHighlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridViewUs->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridViewUs->ColumnHeadersHeight = 50;
			this->dataGridViewUs->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->ColumnaNombre,
					this->ColumnaApellido, this->ColumnaId, this->ColumnaLegajo, this->ColumnaPermiso
			});
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::WhiteSmoke;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridViewUs->DefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridViewUs->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->dataGridViewUs->EnableHeadersVisualStyles = false;
			this->dataGridViewUs->GridColor = System::Drawing::Color::White;
			this->dataGridViewUs->Location = System::Drawing::Point(21, 492);
			this->dataGridViewUs->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridViewUs->MultiSelect = false;
			this->dataGridViewUs->Name = L"dataGridViewUs";
			this->dataGridViewUs->ReadOnly = true;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridViewUs->RowHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridViewUs->RowHeadersVisible = false;
			this->dataGridViewUs->RowHeadersWidth = 51;
			this->dataGridViewUs->RowTemplate->DividerHeight = 1;
			this->dataGridViewUs->RowTemplate->Height = 30;
			this->dataGridViewUs->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridViewUs->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->dataGridViewUs->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridViewUs->ShowRowErrors = false;
			this->dataGridViewUs->Size = System::Drawing::Size(1433, 332);
			this->dataGridViewUs->StandardTab = true;
			this->dataGridViewUs->TabIndex = 6;
			this->dataGridViewUs->SelectionChanged += gcnew System::EventHandler(this, &Usuarios::dataGridViewUs_SelectionChanged);
			// 
			// ColumnaNombre
			// 
			this->ColumnaNombre->HeaderText = L"Nombre";
			this->ColumnaNombre->MinimumWidth = 6;
			this->ColumnaNombre->Name = L"ColumnaNombre";
			this->ColumnaNombre->ReadOnly = true;
			// 
			// ColumnaApellido
			// 
			this->ColumnaApellido->HeaderText = L"Apellido";
			this->ColumnaApellido->MinimumWidth = 6;
			this->ColumnaApellido->Name = L"ColumnaApellido";
			this->ColumnaApellido->ReadOnly = true;
			// 
			// ColumnaId
			// 
			this->ColumnaId->HeaderText = L"ID Usuario";
			this->ColumnaId->MinimumWidth = 6;
			this->ColumnaId->Name = L"ColumnaId";
			this->ColumnaId->ReadOnly = true;
			// 
			// ColumnaLegajo
			// 
			this->ColumnaLegajo->HeaderText = L"Legajo";
			this->ColumnaLegajo->MinimumWidth = 6;
			this->ColumnaLegajo->Name = L"ColumnaLegajo";
			this->ColumnaLegajo->ReadOnly = true;
			// 
			// ColumnaPermiso
			// 
			this->ColumnaPermiso->HeaderText = L"Nivel permiso";
			this->ColumnaPermiso->MinimumWidth = 6;
			this->ColumnaPermiso->Name = L"ColumnaPermiso";
			this->ColumnaPermiso->ReadOnly = true;
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
			this->agregarBtn->Location = System::Drawing::Point(1491, 551);
			this->agregarBtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->agregarBtn->Name = L"agregarBtn";
			this->agregarBtn->Size = System::Drawing::Size(143, 52);
			this->agregarBtn->TabIndex = 7;
			this->agregarBtn->Text = L"Agregar";
			this->agregarBtn->UseVisualStyleBackColor = false;
			this->agregarBtn->Click += gcnew System::EventHandler(this, &Usuarios::agregarBtn_Click);
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
			this->editarBtn->Location = System::Drawing::Point(1491, 613);
			this->editarBtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->editarBtn->Name = L"editarBtn";
			this->editarBtn->Size = System::Drawing::Size(143, 52);
			this->editarBtn->TabIndex = 8;
			this->editarBtn->Text = L"Editar";
			this->editarBtn->UseVisualStyleBackColor = false;
			this->editarBtn->Click += gcnew System::EventHandler(this, &Usuarios::editarBtn_Click);
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
			this->eliminarBtn->Location = System::Drawing::Point(1491, 674);
			this->eliminarBtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->eliminarBtn->Name = L"eliminarBtn";
			this->eliminarBtn->Size = System::Drawing::Size(143, 55);
			this->eliminarBtn->TabIndex = 9;
			this->eliminarBtn->Text = L"Eliminar";
			this->eliminarBtn->UseVisualStyleBackColor = false;
			this->eliminarBtn->Click += gcnew System::EventHandler(this, &Usuarios::eliminarBtn_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(107)),
				static_cast<System::Int32>(static_cast<System::Byte>(135)));
			this->label4->Location = System::Drawing::Point(20, 148);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(118, 37);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Nombre";
			// 
			// nombreTB
			// 
			this->nombreTB->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nombreTB->Location = System::Drawing::Point(187, 148);
			this->nombreTB->Margin = System::Windows::Forms::Padding(4);
			this->nombreTB->Multiline = true;
			this->nombreTB->Name = L"nombreTB";
			this->nombreTB->Size = System::Drawing::Size(271, 36);
			this->nombreTB->TabIndex = 11;
			// 
			// apellidoTB
			// 
			this->apellidoTB->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.75F));
			this->apellidoTB->Location = System::Drawing::Point(187, 209);
			this->apellidoTB->Margin = System::Windows::Forms::Padding(4);
			this->apellidoTB->Multiline = true;
			this->apellidoTB->Name = L"apellidoTB";
			this->apellidoTB->Size = System::Drawing::Size(271, 36);
			this->apellidoTB->TabIndex = 13;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(107)),
				static_cast<System::Int32>(static_cast<System::Byte>(135)));
			this->label5->Location = System::Drawing::Point(20, 209);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(118, 37);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Apellido";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(107)),
				static_cast<System::Int32>(static_cast<System::Byte>(135)));
			this->label6->Location = System::Drawing::Point(20, 267);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(97, 37);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Legajo";
			// 
			// permisoTB
			// 
			this->permisoTB->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.75F));
			this->permisoTB->Location = System::Drawing::Point(187, 329);
			this->permisoTB->Margin = System::Windows::Forms::Padding(4);
			this->permisoTB->Multiline = true;
			this->permisoTB->Name = L"permisoTB";
			this->permisoTB->Size = System::Drawing::Size(271, 36);
			this->permisoTB->TabIndex = 17;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(107)),
				static_cast<System::Int32>(static_cast<System::Byte>(135)));
			this->label7->Location = System::Drawing::Point(20, 329);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(115, 37);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Permiso";
			// 
			// legTB
			// 
			this->legTB->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.75F));
			this->legTB->Location = System::Drawing::Point(187, 269);
			this->legTB->Margin = System::Windows::Forms::Padding(4);
			this->legTB->Multiline = true;
			this->legTB->Name = L"legTB";
			this->legTB->Size = System::Drawing::Size(271, 36);
			this->legTB->TabIndex = 19;
			// 
			// buscador
			// 
			this->buscador->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buscador->Location = System::Drawing::Point(21, 459);
			this->buscador->Margin = System::Windows::Forms::Padding(4);
			this->buscador->Name = L"buscador";
			this->buscador->Size = System::Drawing::Size(232, 26);
			this->buscador->TabIndex = 20;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(264, 459);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(31, 28);
			this->button1->TabIndex = 21;
			this->button1->Text = L"🔍";
			this->button1->UseVisualStyleBackColor = true;
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
			this->label9->TabIndex = 22;
			this->label9->Text = L"Movimientos";
			this->label9->Click += gcnew System::EventHandler(this, &Usuarios::label9_Click);
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
			this->label10->TabIndex = 23;
			this->label10->Text = L"Categorias";
			this->label10->Click += gcnew System::EventHandler(this, &Usuarios::label10_Click);
			// 
			// actualizarBtn
			// 
			this->actualizarBtn->BackColor = System::Drawing::SystemColors::ControlLight;
			this->actualizarBtn->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaption;
			this->actualizarBtn->FlatAppearance->BorderSize = 0;
			this->actualizarBtn->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->actualizarBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->actualizarBtn->ForeColor = System::Drawing::Color::SteelBlue;
			this->actualizarBtn->Location = System::Drawing::Point(1491, 492);
			this->actualizarBtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->actualizarBtn->Name = L"actualizarBtn";
			this->actualizarBtn->Size = System::Drawing::Size(143, 52);
			this->actualizarBtn->TabIndex = 24;
			this->actualizarBtn->Text = L"Actualizar";
			this->actualizarBtn->UseVisualStyleBackColor = false;
			this->actualizarBtn->Click += gcnew System::EventHandler(this, &Usuarios::actualizarBtn_Click);
			// 
			// blanquearBtn
			// 
			this->blanquearBtn->BackColor = System::Drawing::SystemColors::ControlLight;
			this->blanquearBtn->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaption;
			this->blanquearBtn->FlatAppearance->BorderSize = 0;
			this->blanquearBtn->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->blanquearBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->blanquearBtn->ForeColor = System::Drawing::Color::SteelBlue;
			this->blanquearBtn->Location = System::Drawing::Point(1468, 334);
			this->blanquearBtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->blanquearBtn->Name = L"blanquearBtn";
			this->blanquearBtn->Size = System::Drawing::Size(166, 103);
			this->blanquearBtn->TabIndex = 25;
			this->blanquearBtn->Text = L"Blanquear contraseña";
			this->blanquearBtn->UseVisualStyleBackColor = false;
			this->blanquearBtn->Click += gcnew System::EventHandler(this, &Usuarios::blanquearBtn_Click);
			// 
			// Usuarios
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1685, 838);
			this->Controls->Add(this->blanquearBtn);
			this->Controls->Add(this->actualizarBtn);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->buscador);
			this->Controls->Add(this->legTB);
			this->Controls->Add(this->permisoTB);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->apellidoTB);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->nombreTB);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->eliminarBtn);
			this->Controls->Add(this->editarBtn);
			this->Controls->Add(this->agregarBtn);
			this->Controls->Add(this->dataGridViewUs);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Usuarios";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Usuarios";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewUs))->EndInit();
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
		


	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void CargarUsuarios() {
		String^ apiUrl = "https://api-gestion-inventario.up.railway.app/usuarios";

		try {
			// Crear solicitud HTTP GET
			HttpWebRequest^ request = dynamic_cast<HttpWebRequest^>(WebRequest::Create(apiUrl));
			request->Method = "GET";
			request->ContentType = "application/json";
			request->Accept = "application/json";

			// Obtener la respuesta del servidor
			HttpWebResponse^ response = dynamic_cast<HttpWebResponse^>(request->GetResponse());
			StreamReader^ reader = gcnew StreamReader(response->GetResponseStream());
			String^ responseJson = reader->ReadToEnd();
			reader->Close();

			// Parsear el JSON
			JArray^ usuarios = JArray::Parse(responseJson);

			// Limpiar el DataGridView antes de cargar datos
			dataGridViewUs->Rows->Clear();
			dataGridViewUs->Columns->Clear();

			// Definir columnas
			dataGridViewUs->Columns->Add("ColumnaNombre", "Nombre");
			dataGridViewUs->Columns->Add("ColumnaApellido", "Apellido");
			dataGridViewUs->Columns->Add("ColumnaId", "ID Usuario");
			dataGridViewUs->Columns->Add("ColumnaLegajo", "Legajo");
			dataGridViewUs->Columns->Add("ColumnaPermiso", "Nivel de Permiso");
			

			// Agregar filas con los datos de la API
			for each (JObject ^ usuario in usuarios) {
				if (Convert::ToBoolean(usuario["borrado"])) continue;
				String^ nombre = usuario["nombre"]->ToString();
				String^ apellido = usuario["apellido"]->ToString();
				int id = (usuario->ContainsKey("id") && usuario["id"]->Type != JTokenType::Null) ? Int32::Parse(usuario["id"]->ToString()) : 0;
				int legajo = (usuario->ContainsKey("legajo") && usuario["legajo"]->Type != JTokenType::Null) ? Int32::Parse(usuario["legajo"]->ToString()) : 0;
				String^ permiso = usuario["permiso"]["nombre"]->ToString(); // Obtener el nombre del permiso

				dataGridViewUs->Rows->Add(nombre, apellido, id, legajo, permiso);
			}
		}
		catch (WebException^ ex) {
			MessageBox::Show("Error al obtener los usuarios: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void agregarBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ apiUrl = "https://api-gestion-inventario.up.railway.app/usuarios";

		// Obtener valores de los TextBox
		String^ nombre = nombreTB->Text;
		String^ apellido = apellidoTB->Text;
		String^ legajoStr = legTB->Text;
		String^ permisoStr = permisoTB->Text;

		try {
			// Validar que los campos no estén vacíos
			if (String::IsNullOrWhiteSpace(nombre) || String::IsNullOrWhiteSpace(apellido) ||
				String::IsNullOrWhiteSpace(legajoStr) || String::IsNullOrWhiteSpace(permisoStr))
			{
				MessageBox::Show("Todos los campos son obligatorios.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			// Convertir legajo y permiso a enteros
			int legajo = Int32::Parse(legajoStr);
			int permisoId = Int32::Parse(permisoStr);

			// Verificar si el legajo ya existe
			if (VerificarLegajoExistente(legajo)) {
				MessageBox::Show("Legajo ya existente.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			// Crear el JSON del cuerpo de la solicitud
			JObject^ jsonBody = gcnew JObject();
			jsonBody["nombre"] = nombre;
			jsonBody["apellido"] = apellido;
			jsonBody["legajo"] = legajo;
			jsonBody["permisoId"] = permisoId;
			String^ postData = jsonBody->ToString();

			// Convertir el string JSON a bytes (UTF-8)
			array<Byte>^ postBytes = Encoding::UTF8->GetBytes(postData);

			// Crear la solicitud HTTP
			HttpWebRequest^ request = dynamic_cast<HttpWebRequest^>(WebRequest::Create(apiUrl));
			request->Method = "POST";
			request->ContentType = "application/json";
			request->Accept = "application/json";
			request->ContentLength = postBytes->Length;

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
			MessageBox::Show("Usuario agregado correctamente.", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);

			// Limpiar los TextBox después de agregar el usuario
			nombreTB->Clear();
			apellidoTB->Clear();
			legTB->Clear();
			permisoTB->Clear();

			CargarUsuarios();
		}
		catch (FormatException^) {
			MessageBox::Show("Legajo y Permiso deben ser números válidos.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		catch (WebException^ ex) {
			// Capturar errores HTTP
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

		   // Función para verificar si el legajo ya existe
private: bool VerificarLegajoExistente(int legajo) {
	String^ apiUrl = "https://api-gestion-inventario.up.railway.app/usuarios/legajo/" + legajo.ToString();

	try {
		// Hacer una solicitud GET para verificar si el legajo ya existe
		HttpWebRequest^ request = dynamic_cast<HttpWebRequest^>(WebRequest::Create(apiUrl));
		request->Method = "GET";
		HttpWebResponse^ response = dynamic_cast<HttpWebResponse^>(request->GetResponse());

		return true;  // El legajo existe
	}
	catch (WebException^ ex) {
		// Manejar error de conexión o respuesta inesperada
		return false;
	}
}



		private: System::Void eliminarBtn_Click(System::Object^ sender, System::EventArgs^ e) {
			// Verificar si hay una fila seleccionada
			if (dataGridViewUs->SelectedRows->Count == 0) {
				MessageBox::Show("Seleccione un usuario para eliminar.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			// Obtener el legajo del usuario seleccionado
			int legajo = Convert::ToInt32(dataGridViewUs->SelectedRows[0]->Cells["ColumnaLegajo"]->Value);
			int id = Convert::ToInt32(dataGridViewUs->SelectedRows[0]->Cells["ColumnaId"]->Value);

			// Confirmación de eliminación
			System::Windows::Forms::DialogResult result = MessageBox::Show(
				"¿Está seguro de que desea eliminar este usuario?",
				"Confirmación",
				MessageBoxButtons::YesNo,
				MessageBoxIcon::Warning
			);

			if (result != System::Windows::Forms::DialogResult::Yes) {
				return;
			}

			// Construir la URL de la API para eliminar el usuario
			String^ apiUrl = "https://api-gestion-inventario.up.railway.app/usuarios/" + id;

			try {
				// Crear la solicitud HTTP DELETE
				HttpWebRequest^ request = dynamic_cast<HttpWebRequest^>(WebRequest::Create(apiUrl));
				request->Method = "DELETE";

				// Obtener la respuesta del servidor
				HttpWebResponse^ response = dynamic_cast<HttpWebResponse^>(request->GetResponse());
				StreamReader^ reader = gcnew StreamReader(response->GetResponseStream());
				String^ responseJson = reader->ReadToEnd();
				reader->Close();

				// Mostrar mensaje de éxito
				MessageBox::Show("Usuario eliminado correctamente.", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);

				// Recargar los datos en el DataGridView
				CargarUsuarios();
			}
			catch (WebException^ ex) {
				// Capturar errores HTTP
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

		private: System::Void editarBtn_Click(System::Object^ sender, System::EventArgs^ e) {
			// Verificar si hay una fila seleccionada
			if (dataGridViewUs->SelectedRows->Count == 0) {
				MessageBox::Show("Seleccione un usuario para editar.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			// Obtener datos del usuario seleccionado
			int legajo = Convert::ToInt32(dataGridViewUs->SelectedRows[0]->Cells["ColumnaLegajo"]->Value);
			int id = Convert::ToInt32(dataGridViewUs->SelectedRows[0]->Cells["ColumnaId"]->Value);

			// Obtener valores editados de los TextBox
			String^ nombre = nombreTB->Text;
			String^ apellido = apellidoTB->Text;
			String^ permisoStr = permisoTB->Text;

			try {
				// Validar que los campos no estén vacíos
				if (String::IsNullOrWhiteSpace(nombre) || String::IsNullOrWhiteSpace(apellido) ||
					String::IsNullOrWhiteSpace(permisoStr))
				{
					MessageBox::Show("Todos los campos son obligatorios.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}

				// Convertir permiso a entero
				int permisoId = Int32::Parse(permisoStr);

				// Construir la URL de la API para actualizar el usuario
				String^ apiUrl = "https://api-gestion-inventario.up.railway.app/usuarios";


				// Crear el JSON del cuerpo de la solicitud
				JObject^ jsonBody = gcnew JObject();
				jsonBody["id"] = id;
				jsonBody["nombre"] = nombre;
				jsonBody["apellido"] = apellido;
				jsonBody["legajo"] = legajo;
				jsonBody["permisoId"] = permisoId;
				String^ putData = jsonBody->ToString();

				MessageBox::Show("JSON enviado: " + jsonBody->ToString());

				// Crear la solicitud HTTP PUT
				HttpWebRequest^ request = dynamic_cast<HttpWebRequest^>(WebRequest::Create(apiUrl));
				request->Method = "PUT";
				request->ContentType = "application/json";
				request->Accept = "application/json";

				// Convertir el string JSON a bytes
				array<Byte>^ putBytes = System::Text::Encoding::UTF8->GetBytes(putData);
				request->ContentLength = putBytes->Length;

				// Escribir los datos en la solicitud
				Stream^ dataStream = request->GetRequestStream();
				dataStream->Write(putBytes, 0, putBytes->Length);
				dataStream->Close();

				// Obtener la respuesta del servidor
				HttpWebResponse^ response = dynamic_cast<HttpWebResponse^>(request->GetResponse());
				StreamReader^ reader = gcnew StreamReader(response->GetResponseStream());
				String^ responseJson = reader->ReadToEnd();
				reader->Close();

				// Mostrar mensaje de éxito
				MessageBox::Show("Usuario actualizado correctamente.", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);
				

				// Recargar los datos en el DataGridView
				CargarUsuarios();
			}
			catch (WebException^ ex) {
				// Capturar errores HTTP
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
				MessageBox::Show("El permiso debe ser un número válido.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error inesperado: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

		// Métodos para manejar los clics en los labels
		private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e);

		private: System::Void buscador_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			String^ filtro = buscador->Text->ToLower(); // Convertir a minúsculas para búsqueda sin distinción de mayúsculas

			// Asegurar que no hay celdas en modo edición antes de ocultar filas
			dataGridViewUs->EndEdit();
			dataGridViewUs->ClearSelection();

			// Si el filtro está vacío, mostrar todas las filas automáticamente
			if (String::IsNullOrWhiteSpace(filtro)) {
				for each(DataGridViewRow ^ row in dataGridViewUs->Rows) {
					row->Visible = true;
				}
				return;
			}

			// Recorrer todas las filas del DataGridView
			for each(DataGridViewRow ^ row in dataGridViewUs->Rows) {
				if (row->IsNewRow) continue; // Evitar error en la fila nueva

				bool coincide = false;

				// Recorrer todas las celdas de la fila
				for each(DataGridViewCell ^ cell in row->Cells) {
					if (cell->Value != nullptr && cell->Value->ToString()->ToLower()->Contains(filtro)) {
						coincide = true;
						break; // Si hay coincidencia en alguna celda, no es necesario seguir verificando
					}
				}

				// Mostrar u ocultar la fila según si coincide con el filtro
				row->Visible = coincide;
			}
		}

			   
		private: System::Void actualizarBtn_Click(System::Object^ sender, System::EventArgs^ e) {
			CargarUsuarios(); // Llama al método que carga los datos desde la API
			MessageBox::Show("Datos recargados correctamente.", "Información", MessageBoxButtons::OK, MessageBoxIcon::Information);

		}

		private: System::Void dataGridViewUs_SelectionChanged(System::Object^ sender, System::EventArgs^ e) {
	if (dataGridViewUs->SelectedRows->Count > 0) {
		DataGridViewRow^ selectedRow = dataGridViewUs->SelectedRows[0];

		legTB->Text = selectedRow->Cells["ColumnaLegajo"]->Value != nullptr ? selectedRow->Cells["ColumnaLegajo"]->Value->ToString() : "";
	}
	}



		private: System::Void blanquearBtn_Click(System::Object^ sender, System::EventArgs^ e) {

			// Obtener legajo del usuario seleccionado
			int legajo = Convert::ToInt32(dataGridViewUs->SelectedRows[0]->Cells["ColumnaLegajo"]->Value);


			String^ apiUrl = "https://api-gestion-inventario.up.railway.app/usuarios/password/" + legajo;

			try {
			
				// Crear la solicitud HTTP PUT
				HttpWebRequest^ request = dynamic_cast<HttpWebRequest^>(WebRequest::Create(apiUrl));
				request->Method = "PUT";
				request->ContentType = "application/json";
				request->Accept = "application/json";


				// Obtener la respuesta del servidor
				HttpWebResponse^ response = dynamic_cast<HttpWebResponse^>(request->GetResponse());
				StreamReader^ reader = gcnew StreamReader(response->GetResponseStream());
				String^ responseJson = reader->ReadToEnd();
				reader->Close();

				// Mostrar mensaje de éxito
				MessageBox::Show("Contraseña restablecida correctamente.", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			catch (WebException^ ex) {
				// Capturar la respuesta de error del servidor
				if (ex->Response != nullptr) {
					HttpWebResponse^ errorResponse = dynamic_cast<HttpWebResponse^>(ex->Response);
					StreamReader^ reader = gcnew StreamReader(errorResponse->GetResponseStream());
					String^ errorMessage = reader->ReadToEnd();
					reader->Close();
					MessageBox::Show("Error del servidor: " + errorMessage, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				else {
					MessageBox::Show("Error de conexión: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error inesperado: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
}
};
}
