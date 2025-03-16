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

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(String^ permiso)
		{
			InitializeComponent();
			if (permiso == "Administrador") {

			}
			else if (permiso == "Tecnico") {

			}
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Button^ actualizarStockBtn;
	private: System::Windows::Forms::TextBox^ codigoTB;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ limiteTB;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ categoriaIDTB;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ stockTB;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ nombreStock;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ eliminarStockBtn;
	private: System::Windows::Forms::Button^ editarStockBtn;
	private: System::Windows::Forms::Button^ agregarStockBtn;
	private: System::Windows::Forms::DataGridView^ dataGridViewStock;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ columnaStock;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CategoriaID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ limite;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Código;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Hora;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::Button^ blanquearBtn;
	private: System::Windows::Forms::Button^ actualizarUsuariosBtn;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ buscador;
	private: System::Windows::Forms::TextBox^ legTB;
	private: System::Windows::Forms::TextBox^ permisoTB;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ apellidoTB;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ nombreUsuarios;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Button^ eliminarUsuariosBtn;
	private: System::Windows::Forms::Button^ editarUsuariosBtn;
	private: System::Windows::Forms::Button^ agregarUsuariosBtn;
	private: System::Windows::Forms::DataGridView^ dataGridViewUs;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaNombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaApellido;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaLegajo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaPermiso;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::Button^ editarBtnCat;
	private: System::Windows::Forms::Button^ eliminarBtnCat;
	private: System::Windows::Forms::Button^ agregarBtnCat;
	private: System::Windows::Forms::DataGridView^ dataGridCat;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ IdCategoria;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaCategoria;
	private: System::Windows::Forms::TextBox^ nombreCatTB;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::Button^ actualizarMovBtn;
	private: System::Windows::Forms::DataGridView^ dataGridViewMovimientos;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ articuloId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ usuarioId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ turnoId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ subsectorId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ cantidad;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ tipoMovimiento;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ esPedido;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ esDiferencia;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ fechaHora;
	private: System::Windows::Forms::ToolStripMenuItem^ opcionesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ cerrarSesiónToolStripMenuItem;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;

	protected:




















































































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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle9 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle10 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle11 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle12 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle13 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle14 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle15 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle16 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->actualizarStockBtn = (gcnew System::Windows::Forms::Button());
			this->codigoTB = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->limiteTB = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->categoriaIDTB = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->stockTB = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->nombreStock = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->eliminarStockBtn = (gcnew System::Windows::Forms::Button());
			this->editarStockBtn = (gcnew System::Windows::Forms::Button());
			this->agregarStockBtn = (gcnew System::Windows::Forms::Button());
			this->dataGridViewStock = (gcnew System::Windows::Forms::DataGridView());
			this->nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->columnaStock = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CategoriaID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->limite = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Código = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Hora = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->blanquearBtn = (gcnew System::Windows::Forms::Button());
			this->actualizarUsuariosBtn = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->buscador = (gcnew System::Windows::Forms::TextBox());
			this->legTB = (gcnew System::Windows::Forms::TextBox());
			this->permisoTB = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->apellidoTB = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->nombreUsuarios = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->eliminarUsuariosBtn = (gcnew System::Windows::Forms::Button());
			this->editarUsuariosBtn = (gcnew System::Windows::Forms::Button());
			this->agregarUsuariosBtn = (gcnew System::Windows::Forms::Button());
			this->dataGridViewUs = (gcnew System::Windows::Forms::DataGridView());
			this->ColumnaNombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnaApellido = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnaId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnaLegajo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnaPermiso = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->editarBtnCat = (gcnew System::Windows::Forms::Button());
			this->eliminarBtnCat = (gcnew System::Windows::Forms::Button());
			this->agregarBtnCat = (gcnew System::Windows::Forms::Button());
			this->dataGridCat = (gcnew System::Windows::Forms::DataGridView());
			this->IdCategoria = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnaCategoria = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->nombreCatTB = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->actualizarMovBtn = (gcnew System::Windows::Forms::Button());
			this->dataGridViewMovimientos = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->articuloId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->usuarioId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->turnoId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->subsectorId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cantidad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tipoMovimiento = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->esPedido = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->esDiferencia = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->fechaHora = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->opcionesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cerrarSesiónToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewStock))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewUs))->BeginInit();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridCat))->BeginInit();
			this->tabPage5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewMovimientos))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 24);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1237, 662);
			this->tabControl1->TabIndex = 1;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label9);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1229, 636);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Inicio";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->label9->Location = System::Drawing::Point(28, 330);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(376, 21);
			this->label9->TabIndex = 42;
			this->label9->Text = L"Movimientos: revisar entradas y salidas de objetos";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->label8->Location = System::Drawing::Point(28, 230);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(305, 21);
			this->label8->TabIndex = 41;
			this->label8->Text = L"Usuarios: crear, editar y eliminar usuarios";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->label7->Location = System::Drawing::Point(28, 280);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(320, 21);
			this->label7->TabIndex = 40;
			this->label7->Text = L"Stock: agregar, cambiar y eliminar objetos.";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->label5->Location = System::Drawing::Point(28, 130);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(438, 21);
			this->label5->TabIndex = 39;
			this->label5->Text = L"En esta aplicacion van a poder controlar el trafico de stock ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 17.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(107)),
				static_cast<System::Int32>(static_cast<System::Byte>(135)));
			this->label6->Location = System::Drawing::Point(26, 30);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(182, 31);
			this->label6->TabIndex = 38;
			this->label6->Text = L"¡Bienvenido/a!";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->actualizarStockBtn);
			this->tabPage2->Controls->Add(this->codigoTB);
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->Controls->Add(this->limiteTB);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Controls->Add(this->categoriaIDTB);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Controls->Add(this->stockTB);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->nombreStock);
			this->tabPage2->Controls->Add(this->label10);
			this->tabPage2->Controls->Add(this->eliminarStockBtn);
			this->tabPage2->Controls->Add(this->editarStockBtn);
			this->tabPage2->Controls->Add(this->agregarStockBtn);
			this->tabPage2->Controls->Add(this->dataGridViewStock);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1229, 636);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Stock";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// actualizarStockBtn
			// 
			this->actualizarStockBtn->BackColor = System::Drawing::SystemColors::Control;
			this->actualizarStockBtn->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaption;
			this->actualizarStockBtn->FlatAppearance->BorderSize = 0;
			this->actualizarStockBtn->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->actualizarStockBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->actualizarStockBtn->ForeColor = System::Drawing::Color::SteelBlue;
			this->actualizarStockBtn->Location = System::Drawing::Point(1123, 312);
			this->actualizarStockBtn->Margin = System::Windows::Forms::Padding(2);
			this->actualizarStockBtn->Name = L"actualizarStockBtn";
			this->actualizarStockBtn->Size = System::Drawing::Size(107, 42);
			this->actualizarStockBtn->TabIndex = 47;
			this->actualizarStockBtn->Text = L"Actualizar";
			this->actualizarStockBtn->UseVisualStyleBackColor = false;
			this->actualizarStockBtn->Click += gcnew System::EventHandler(this, &MyForm::actualizarStockBtn_Click);
			// 
			// codigoTB
			// 
			this->codigoTB->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->codigoTB->Location = System::Drawing::Point(162, 213);
			this->codigoTB->Multiline = true;
			this->codigoTB->Name = L"codigoTB";
			this->codigoTB->Size = System::Drawing::Size(204, 30);
			this->codigoTB->TabIndex = 46;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(107)),
				static_cast<System::Int32>(static_cast<System::Byte>(135)));
			this->label1->Location = System::Drawing::Point(20, 212);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(83, 30);
			this->label1->TabIndex = 45;
			this->label1->Text = L"Código";
			// 
			// limiteTB
			// 
			this->limiteTB->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->limiteTB->Location = System::Drawing::Point(162, 164);
			this->limiteTB->Multiline = true;
			this->limiteTB->Name = L"limiteTB";
			this->limiteTB->Size = System::Drawing::Size(204, 30);
			this->limiteTB->TabIndex = 44;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(107)),
				static_cast<System::Int32>(static_cast<System::Byte>(135)));
			this->label3->Location = System::Drawing::Point(20, 164);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(71, 30);
			this->label3->TabIndex = 43;
			this->label3->Text = L"Límite";
			// 
			// categoriaIDTB
			// 
			this->categoriaIDTB->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->categoriaIDTB->Location = System::Drawing::Point(162, 114);
			this->categoriaIDTB->Multiline = true;
			this->categoriaIDTB->Name = L"categoriaIDTB";
			this->categoriaIDTB->Size = System::Drawing::Size(204, 30);
			this->categoriaIDTB->TabIndex = 42;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(107)),
				static_cast<System::Int32>(static_cast<System::Byte>(135)));
			this->label2->Location = System::Drawing::Point(20, 114);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(133, 30);
			this->label2->TabIndex = 41;
			this->label2->Text = L"Categoria ID";
			// 
			// stockTB
			// 
			this->stockTB->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stockTB->Location = System::Drawing::Point(162, 64);
			this->stockTB->Multiline = true;
			this->stockTB->Name = L"stockTB";
			this->stockTB->Size = System::Drawing::Size(204, 30);
			this->stockTB->TabIndex = 40;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(107)),
				static_cast<System::Int32>(static_cast<System::Byte>(135)));
			this->label4->Location = System::Drawing::Point(20, 64);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(65, 30);
			this->label4->TabIndex = 39;
			this->label4->Text = L"Stock";
			// 
			// nombreStock
			// 
			this->nombreStock->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nombreStock->Location = System::Drawing::Point(162, 14);
			this->nombreStock->Multiline = true;
			this->nombreStock->Name = L"nombreStock";
			this->nombreStock->Size = System::Drawing::Size(204, 30);
			this->nombreStock->TabIndex = 38;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(107)),
				static_cast<System::Int32>(static_cast<System::Byte>(135)));
			this->label10->Location = System::Drawing::Point(20, 14);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(93, 30);
			this->label10->TabIndex = 37;
			this->label10->Text = L"Nombre";
			// 
			// eliminarStockBtn
			// 
			this->eliminarStockBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->eliminarStockBtn->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->eliminarStockBtn->FlatAppearance->BorderSize = 0;
			this->eliminarStockBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->eliminarStockBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->eliminarStockBtn->ForeColor = System::Drawing::Color::DarkRed;
			this->eliminarStockBtn->Location = System::Drawing::Point(1123, 460);
			this->eliminarStockBtn->Margin = System::Windows::Forms::Padding(2);
			this->eliminarStockBtn->Name = L"eliminarStockBtn";
			this->eliminarStockBtn->Size = System::Drawing::Size(107, 45);
			this->eliminarStockBtn->TabIndex = 36;
			this->eliminarStockBtn->Text = L"Eliminar";
			this->eliminarStockBtn->UseVisualStyleBackColor = false;
			this->eliminarStockBtn->Click += gcnew System::EventHandler(this, &MyForm::eliminarStockBtn_Click);
			// 
			// editarStockBtn
			// 
			this->editarStockBtn->BackColor = System::Drawing::SystemColors::Control;
			this->editarStockBtn->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaption;
			this->editarStockBtn->FlatAppearance->BorderSize = 0;
			this->editarStockBtn->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->editarStockBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->editarStockBtn->ForeColor = System::Drawing::Color::SteelBlue;
			this->editarStockBtn->Location = System::Drawing::Point(1123, 411);
			this->editarStockBtn->Margin = System::Windows::Forms::Padding(2);
			this->editarStockBtn->Name = L"editarStockBtn";
			this->editarStockBtn->Size = System::Drawing::Size(107, 42);
			this->editarStockBtn->TabIndex = 35;
			this->editarStockBtn->Text = L"Editar";
			this->editarStockBtn->UseVisualStyleBackColor = false;
			this->editarStockBtn->Click += gcnew System::EventHandler(this, &MyForm::editarStockBtn_Click);
			// 
			// agregarStockBtn
			// 
			this->agregarStockBtn->BackColor = System::Drawing::SystemColors::Window;
			this->agregarStockBtn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)), static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->agregarStockBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->agregarStockBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->agregarStockBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->agregarStockBtn->Location = System::Drawing::Point(1123, 360);
			this->agregarStockBtn->Margin = System::Windows::Forms::Padding(2);
			this->agregarStockBtn->Name = L"agregarStockBtn";
			this->agregarStockBtn->Size = System::Drawing::Size(107, 42);
			this->agregarStockBtn->TabIndex = 34;
			this->agregarStockBtn->Text = L"Agregar";
			this->agregarStockBtn->UseVisualStyleBackColor = false;
			this->agregarStockBtn->Click += gcnew System::EventHandler(this, &MyForm::agregarStockBtn_Click);
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
			this->dataGridViewStock->Location = System::Drawing::Point(7, 297);
			this->dataGridViewStock->Margin = System::Windows::Forms::Padding(2);
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
			this->dataGridViewStock->Size = System::Drawing::Size(1075, 270);
			this->dataGridViewStock->TabIndex = 33;
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
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->blanquearBtn);
			this->tabPage3->Controls->Add(this->actualizarUsuariosBtn);
			this->tabPage3->Controls->Add(this->button2);
			this->tabPage3->Controls->Add(this->buscador);
			this->tabPage3->Controls->Add(this->legTB);
			this->tabPage3->Controls->Add(this->permisoTB);
			this->tabPage3->Controls->Add(this->label11);
			this->tabPage3->Controls->Add(this->label12);
			this->tabPage3->Controls->Add(this->apellidoTB);
			this->tabPage3->Controls->Add(this->label13);
			this->tabPage3->Controls->Add(this->nombreUsuarios);
			this->tabPage3->Controls->Add(this->label14);
			this->tabPage3->Controls->Add(this->eliminarUsuariosBtn);
			this->tabPage3->Controls->Add(this->editarUsuariosBtn);
			this->tabPage3->Controls->Add(this->agregarUsuariosBtn);
			this->tabPage3->Controls->Add(this->dataGridViewUs);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(1229, 636);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Usuarios";
			this->tabPage3->UseVisualStyleBackColor = true;
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
			this->blanquearBtn->Location = System::Drawing::Point(1094, 172);
			this->blanquearBtn->Margin = System::Windows::Forms::Padding(2);
			this->blanquearBtn->Name = L"blanquearBtn";
			this->blanquearBtn->Size = System::Drawing::Size(124, 84);
			this->blanquearBtn->TabIndex = 41;
			this->blanquearBtn->Text = L"Blanquear contraseña";
			this->blanquearBtn->UseVisualStyleBackColor = false;
			this->blanquearBtn->Click += gcnew System::EventHandler(this, &MyForm::blanquearBtn_Click);
			// 
			// actualizarUsuariosBtn
			// 
			this->actualizarUsuariosBtn->BackColor = System::Drawing::SystemColors::ControlLight;
			this->actualizarUsuariosBtn->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaption;
			this->actualizarUsuariosBtn->FlatAppearance->BorderSize = 0;
			this->actualizarUsuariosBtn->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->actualizarUsuariosBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->actualizarUsuariosBtn->ForeColor = System::Drawing::Color::SteelBlue;
			this->actualizarUsuariosBtn->Location = System::Drawing::Point(1111, 301);
			this->actualizarUsuariosBtn->Margin = System::Windows::Forms::Padding(2);
			this->actualizarUsuariosBtn->Name = L"actualizarUsuariosBtn";
			this->actualizarUsuariosBtn->Size = System::Drawing::Size(107, 42);
			this->actualizarUsuariosBtn->TabIndex = 40;
			this->actualizarUsuariosBtn->Text = L"Actualizar";
			this->actualizarUsuariosBtn->UseVisualStyleBackColor = false;
			this->actualizarUsuariosBtn->Click += gcnew System::EventHandler(this, &MyForm::actualizarUsuariosBtn_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(191, 274);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(23, 23);
			this->button2->TabIndex = 39;
			this->button2->Text = L"🔍";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// buscador
			// 
			this->buscador->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buscador->Location = System::Drawing::Point(9, 274);
			this->buscador->Name = L"buscador";
			this->buscador->Size = System::Drawing::Size(175, 22);
			this->buscador->TabIndex = 38;
			this->buscador->TextChanged += gcnew System::EventHandler(this, &MyForm::buscador_TextChanged);
			// 
			// legTB
			// 
			this->legTB->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.75F));
			this->legTB->Location = System::Drawing::Point(133, 120);
			this->legTB->Multiline = true;
			this->legTB->Name = L"legTB";
			this->legTB->Size = System::Drawing::Size(204, 30);
			this->legTB->TabIndex = 37;
			// 
			// permisoTB
			// 
			this->permisoTB->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.75F));
			this->permisoTB->Location = System::Drawing::Point(133, 168);
			this->permisoTB->Multiline = true;
			this->permisoTB->Name = L"permisoTB";
			this->permisoTB->Size = System::Drawing::Size(204, 30);
			this->permisoTB->TabIndex = 36;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(107)),
				static_cast<System::Int32>(static_cast<System::Byte>(135)));
			this->label11->Location = System::Drawing::Point(8, 168);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(89, 30);
			this->label11->TabIndex = 35;
			this->label11->Text = L"Permiso";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(107)),
				static_cast<System::Int32>(static_cast<System::Byte>(135)));
			this->label12->Location = System::Drawing::Point(8, 118);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(76, 30);
			this->label12->TabIndex = 34;
			this->label12->Text = L"Legajo";
			// 
			// apellidoTB
			// 
			this->apellidoTB->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.75F));
			this->apellidoTB->Location = System::Drawing::Point(133, 71);
			this->apellidoTB->Multiline = true;
			this->apellidoTB->Name = L"apellidoTB";
			this->apellidoTB->Size = System::Drawing::Size(204, 30);
			this->apellidoTB->TabIndex = 33;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(107)),
				static_cast<System::Int32>(static_cast<System::Byte>(135)));
			this->label13->Location = System::Drawing::Point(8, 71);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(92, 30);
			this->label13->TabIndex = 32;
			this->label13->Text = L"Apellido";
			// 
			// nombreUsuarios
			// 
			this->nombreUsuarios->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nombreUsuarios->Location = System::Drawing::Point(133, 21);
			this->nombreUsuarios->Multiline = true;
			this->nombreUsuarios->Name = L"nombreUsuarios";
			this->nombreUsuarios->Size = System::Drawing::Size(204, 30);
			this->nombreUsuarios->TabIndex = 31;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(107)),
				static_cast<System::Int32>(static_cast<System::Byte>(135)));
			this->label14->Location = System::Drawing::Point(8, 21);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(93, 30);
			this->label14->TabIndex = 30;
			this->label14->Text = L"Nombre";
			// 
			// eliminarUsuariosBtn
			// 
			this->eliminarUsuariosBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->eliminarUsuariosBtn->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->eliminarUsuariosBtn->FlatAppearance->BorderSize = 0;
			this->eliminarUsuariosBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->eliminarUsuariosBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->eliminarUsuariosBtn->ForeColor = System::Drawing::Color::DarkRed;
			this->eliminarUsuariosBtn->Location = System::Drawing::Point(1111, 449);
			this->eliminarUsuariosBtn->Margin = System::Windows::Forms::Padding(2);
			this->eliminarUsuariosBtn->Name = L"eliminarUsuariosBtn";
			this->eliminarUsuariosBtn->Size = System::Drawing::Size(107, 45);
			this->eliminarUsuariosBtn->TabIndex = 29;
			this->eliminarUsuariosBtn->Text = L"Eliminar";
			this->eliminarUsuariosBtn->UseVisualStyleBackColor = false;
			this->eliminarUsuariosBtn->Click += gcnew System::EventHandler(this, &MyForm::eliminarUsuariosBtn_Click);
			// 
			// editarUsuariosBtn
			// 
			this->editarUsuariosBtn->BackColor = System::Drawing::SystemColors::Control;
			this->editarUsuariosBtn->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaption;
			this->editarUsuariosBtn->FlatAppearance->BorderSize = 0;
			this->editarUsuariosBtn->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->editarUsuariosBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->editarUsuariosBtn->ForeColor = System::Drawing::Color::SteelBlue;
			this->editarUsuariosBtn->Location = System::Drawing::Point(1111, 399);
			this->editarUsuariosBtn->Margin = System::Windows::Forms::Padding(2);
			this->editarUsuariosBtn->Name = L"editarUsuariosBtn";
			this->editarUsuariosBtn->Size = System::Drawing::Size(107, 42);
			this->editarUsuariosBtn->TabIndex = 28;
			this->editarUsuariosBtn->Text = L"Editar";
			this->editarUsuariosBtn->UseVisualStyleBackColor = false;
			this->editarUsuariosBtn->Click += gcnew System::EventHandler(this, &MyForm::editarUsuariosBtn_Click);
			// 
			// agregarUsuariosBtn
			// 
			this->agregarUsuariosBtn->BackColor = System::Drawing::SystemColors::Window;
			this->agregarUsuariosBtn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)), static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->agregarUsuariosBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->agregarUsuariosBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->agregarUsuariosBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)), static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->agregarUsuariosBtn->Location = System::Drawing::Point(1111, 349);
			this->agregarUsuariosBtn->Margin = System::Windows::Forms::Padding(2);
			this->agregarUsuariosBtn->Name = L"agregarUsuariosBtn";
			this->agregarUsuariosBtn->Size = System::Drawing::Size(107, 42);
			this->agregarUsuariosBtn->TabIndex = 27;
			this->agregarUsuariosBtn->Text = L"Agregar";
			this->agregarUsuariosBtn->UseVisualStyleBackColor = false;
			this->agregarUsuariosBtn->Click += gcnew System::EventHandler(this, &MyForm::agregarUsuariosBtn_Click);
			// 
			// dataGridViewUs
			// 
			dataGridViewCellStyle5->BackColor = System::Drawing::Color::White;
			this->dataGridViewUs->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle5;
			this->dataGridViewUs->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridViewUs->BackgroundColor = System::Drawing::SystemColors::Window;
			this->dataGridViewUs->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridViewUs->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->dataGridViewUs->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12.5F, System::Drawing::FontStyle::Bold));
			dataGridViewCellStyle6->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::SystemColors::MenuHighlight;
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridViewUs->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle6;
			this->dataGridViewUs->ColumnHeadersHeight = 50;
			this->dataGridViewUs->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->ColumnaNombre,
					this->ColumnaApellido, this->ColumnaId, this->ColumnaLegajo, this->ColumnaPermiso
			});
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle7->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle7->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle7->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			dataGridViewCellStyle7->SelectionBackColor = System::Drawing::Color::WhiteSmoke;
			dataGridViewCellStyle7->SelectionForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle7->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridViewUs->DefaultCellStyle = dataGridViewCellStyle7;
			this->dataGridViewUs->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->dataGridViewUs->EnableHeadersVisualStyles = false;
			this->dataGridViewUs->GridColor = System::Drawing::Color::White;
			this->dataGridViewUs->Location = System::Drawing::Point(9, 301);
			this->dataGridViewUs->Margin = System::Windows::Forms::Padding(2);
			this->dataGridViewUs->MultiSelect = false;
			this->dataGridViewUs->Name = L"dataGridViewUs";
			this->dataGridViewUs->ReadOnly = true;
			dataGridViewCellStyle8->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle8->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle8->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle8->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle8->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle8->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridViewUs->RowHeadersDefaultCellStyle = dataGridViewCellStyle8;
			this->dataGridViewUs->RowHeadersVisible = false;
			this->dataGridViewUs->RowHeadersWidth = 51;
			this->dataGridViewUs->RowTemplate->DividerHeight = 1;
			this->dataGridViewUs->RowTemplate->Height = 30;
			this->dataGridViewUs->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridViewUs->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->dataGridViewUs->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridViewUs->ShowRowErrors = false;
			this->dataGridViewUs->Size = System::Drawing::Size(1075, 270);
			this->dataGridViewUs->StandardTab = true;
			this->dataGridViewUs->TabIndex = 26;
			this->dataGridViewUs->SelectionChanged += gcnew System::EventHandler(this, &MyForm::dataGridViewUs_SelectionChanged);
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
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->editarBtnCat);
			this->tabPage4->Controls->Add(this->eliminarBtnCat);
			this->tabPage4->Controls->Add(this->agregarBtnCat);
			this->tabPage4->Controls->Add(this->dataGridCat);
			this->tabPage4->Controls->Add(this->nombreCatTB);
			this->tabPage4->Controls->Add(this->label15);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(1229, 636);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Categorias";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// editarBtnCat
			// 
			this->editarBtnCat->BackColor = System::Drawing::SystemColors::Control;
			this->editarBtnCat->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaption;
			this->editarBtnCat->FlatAppearance->BorderSize = 0;
			this->editarBtnCat->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->editarBtnCat->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->editarBtnCat->ForeColor = System::Drawing::Color::SteelBlue;
			this->editarBtnCat->Location = System::Drawing::Point(141, 143);
			this->editarBtnCat->Margin = System::Windows::Forms::Padding(2);
			this->editarBtnCat->Name = L"editarBtnCat";
			this->editarBtnCat->Size = System::Drawing::Size(107, 42);
			this->editarBtnCat->TabIndex = 45;
			this->editarBtnCat->Text = L"Editar";
			this->editarBtnCat->UseVisualStyleBackColor = false;
			this->editarBtnCat->Click += gcnew System::EventHandler(this, &MyForm::editarBtnCat_Click);
			// 
			// eliminarBtnCat
			// 
			this->eliminarBtnCat->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->eliminarBtnCat->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->eliminarBtnCat->FlatAppearance->BorderSize = 0;
			this->eliminarBtnCat->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->eliminarBtnCat->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->eliminarBtnCat->ForeColor = System::Drawing::Color::DarkRed;
			this->eliminarBtnCat->Location = System::Drawing::Point(277, 140);
			this->eliminarBtnCat->Margin = System::Windows::Forms::Padding(2);
			this->eliminarBtnCat->Name = L"eliminarBtnCat";
			this->eliminarBtnCat->Size = System::Drawing::Size(107, 45);
			this->eliminarBtnCat->TabIndex = 44;
			this->eliminarBtnCat->Text = L"Eliminar";
			this->eliminarBtnCat->UseVisualStyleBackColor = false;
			this->eliminarBtnCat->Click += gcnew System::EventHandler(this, &MyForm::eliminarBtnCat_Click);
			// 
			// agregarBtnCat
			// 
			this->agregarBtnCat->BackColor = System::Drawing::SystemColors::Window;
			this->agregarBtnCat->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)), static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->agregarBtnCat->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->agregarBtnCat->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->agregarBtnCat->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->agregarBtnCat->Location = System::Drawing::Point(8, 143);
			this->agregarBtnCat->Margin = System::Windows::Forms::Padding(2);
			this->agregarBtnCat->Name = L"agregarBtnCat";
			this->agregarBtnCat->Size = System::Drawing::Size(107, 42);
			this->agregarBtnCat->TabIndex = 43;
			this->agregarBtnCat->Text = L"Agregar";
			this->agregarBtnCat->UseVisualStyleBackColor = false;
			this->agregarBtnCat->Click += gcnew System::EventHandler(this, &MyForm::agregarBtnCat_Click);
			// 
			// dataGridCat
			// 
			dataGridViewCellStyle9->BackColor = System::Drawing::Color::White;
			this->dataGridCat->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle9;
			this->dataGridCat->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridCat->BackgroundColor = System::Drawing::SystemColors::Window;
			this->dataGridCat->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridCat->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->dataGridCat->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle10->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			dataGridViewCellStyle10->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12.5F, System::Drawing::FontStyle::Bold));
			dataGridViewCellStyle10->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle10->SelectionBackColor = System::Drawing::SystemColors::MenuHighlight;
			dataGridViewCellStyle10->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle10->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridCat->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle10;
			this->dataGridCat->ColumnHeadersHeight = 50;
			this->dataGridCat->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->IdCategoria,
					this->ColumnaCategoria
			});
			dataGridViewCellStyle11->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle11->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle11->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle11->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			dataGridViewCellStyle11->SelectionBackColor = System::Drawing::Color::WhiteSmoke;
			dataGridViewCellStyle11->SelectionForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle11->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridCat->DefaultCellStyle = dataGridViewCellStyle11;
			this->dataGridCat->EnableHeadersVisualStyles = false;
			this->dataGridCat->GridColor = System::Drawing::Color::White;
			this->dataGridCat->Location = System::Drawing::Point(3, 209);
			this->dataGridCat->Margin = System::Windows::Forms::Padding(2);
			this->dataGridCat->Name = L"dataGridCat";
			this->dataGridCat->ReadOnly = true;
			dataGridViewCellStyle12->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle12->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle12->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle12->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle12->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle12->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridCat->RowHeadersDefaultCellStyle = dataGridViewCellStyle12;
			this->dataGridCat->RowHeadersVisible = false;
			this->dataGridCat->RowHeadersWidth = 51;
			this->dataGridCat->RowTemplate->DividerHeight = 1;
			this->dataGridCat->RowTemplate->Height = 30;
			this->dataGridCat->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridCat->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->dataGridCat->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridCat->ShowRowErrors = false;
			this->dataGridCat->Size = System::Drawing::Size(1282, 361);
			this->dataGridCat->TabIndex = 42;
			// 
			// IdCategoria
			// 
			this->IdCategoria->FillWeight = 50.76143F;
			this->IdCategoria->HeaderText = L"ID";
			this->IdCategoria->MinimumWidth = 6;
			this->IdCategoria->Name = L"IdCategoria";
			this->IdCategoria->ReadOnly = true;
			this->IdCategoria->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// ColumnaCategoria
			// 
			this->ColumnaCategoria->FillWeight = 149.2386F;
			this->ColumnaCategoria->HeaderText = L"Categoria";
			this->ColumnaCategoria->MinimumWidth = 6;
			this->ColumnaCategoria->Name = L"ColumnaCategoria";
			this->ColumnaCategoria->ReadOnly = true;
			// 
			// nombreCatTB
			// 
			this->nombreCatTB->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nombreCatTB->Location = System::Drawing::Point(128, 51);
			this->nombreCatTB->Multiline = true;
			this->nombreCatTB->Name = L"nombreCatTB";
			this->nombreCatTB->Size = System::Drawing::Size(256, 30);
			this->nombreCatTB->TabIndex = 41;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(107)),
				static_cast<System::Int32>(static_cast<System::Byte>(135)));
			this->label15->Location = System::Drawing::Point(3, 51);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(93, 30);
			this->label15->TabIndex = 40;
			this->label15->Text = L"Nombre";
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->actualizarMovBtn);
			this->tabPage5->Controls->Add(this->dataGridViewMovimientos);
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(1229, 636);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Movimientos";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// actualizarMovBtn
			// 
			this->actualizarMovBtn->BackColor = System::Drawing::SystemColors::Control;
			this->actualizarMovBtn->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaption;
			this->actualizarMovBtn->FlatAppearance->BorderSize = 0;
			this->actualizarMovBtn->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->actualizarMovBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->actualizarMovBtn->ForeColor = System::Drawing::Color::SteelBlue;
			this->actualizarMovBtn->Location = System::Drawing::Point(7, 12);
			this->actualizarMovBtn->Margin = System::Windows::Forms::Padding(2);
			this->actualizarMovBtn->Name = L"actualizarMovBtn";
			this->actualizarMovBtn->Size = System::Drawing::Size(107, 42);
			this->actualizarMovBtn->TabIndex = 34;
			this->actualizarMovBtn->Text = L"Actualizar";
			this->actualizarMovBtn->UseVisualStyleBackColor = false;
			this->actualizarMovBtn->Click += gcnew System::EventHandler(this, &MyForm::actualizarMovBtn_Click);
			// 
			// dataGridViewMovimientos
			// 
			dataGridViewCellStyle13->BackColor = System::Drawing::Color::White;
			this->dataGridViewMovimientos->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle13;
			this->dataGridViewMovimientos->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridViewMovimientos->BackgroundColor = System::Drawing::SystemColors::Window;
			this->dataGridViewMovimientos->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridViewMovimientos->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->dataGridViewMovimientos->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			dataGridViewCellStyle14->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12.5F, System::Drawing::FontStyle::Bold));
			dataGridViewCellStyle14->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle14->SelectionBackColor = System::Drawing::SystemColors::MenuHighlight;
			dataGridViewCellStyle14->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle14->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridViewMovimientos->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle14;
			this->dataGridViewMovimientos->ColumnHeadersHeight = 70;
			this->dataGridViewMovimientos->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {
				this->dataGridViewTextBoxColumn1,
					this->articuloId, this->usuarioId, this->turnoId, this->subsectorId, this->cantidad, this->tipoMovimiento, this->esPedido, this->esDiferencia,
					this->fechaHora
			});
			dataGridViewCellStyle15->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle15->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle15->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle15->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			dataGridViewCellStyle15->SelectionBackColor = System::Drawing::Color::WhiteSmoke;
			dataGridViewCellStyle15->SelectionForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle15->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridViewMovimientos->DefaultCellStyle = dataGridViewCellStyle15;
			this->dataGridViewMovimientos->EnableHeadersVisualStyles = false;
			this->dataGridViewMovimientos->GridColor = System::Drawing::Color::White;
			this->dataGridViewMovimientos->Location = System::Drawing::Point(3, 66);
			this->dataGridViewMovimientos->Margin = System::Windows::Forms::Padding(10);
			this->dataGridViewMovimientos->Name = L"dataGridViewMovimientos";
			this->dataGridViewMovimientos->ReadOnly = true;
			dataGridViewCellStyle16->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle16->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle16->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle16->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle16->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridViewMovimientos->RowHeadersDefaultCellStyle = dataGridViewCellStyle16;
			this->dataGridViewMovimientos->RowHeadersVisible = false;
			this->dataGridViewMovimientos->RowHeadersWidth = 51;
			this->dataGridViewMovimientos->RowTemplate->DividerHeight = 1;
			this->dataGridViewMovimientos->RowTemplate->Height = 30;
			this->dataGridViewMovimientos->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridViewMovimientos->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->dataGridViewMovimientos->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridViewMovimientos->ShowRowErrors = false;
			this->dataGridViewMovimientos->Size = System::Drawing::Size(1282, 504);
			this->dataGridViewMovimientos->TabIndex = 32;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"ID";
			this->dataGridViewTextBoxColumn1->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			// 
			// articuloId
			// 
			this->articuloId->HeaderText = L"Artículo ";
			this->articuloId->MinimumWidth = 6;
			this->articuloId->Name = L"articuloId";
			this->articuloId->ReadOnly = true;
			// 
			// usuarioId
			// 
			this->usuarioId->HeaderText = L"Usuario ";
			this->usuarioId->MinimumWidth = 6;
			this->usuarioId->Name = L"usuarioId";
			this->usuarioId->ReadOnly = true;
			// 
			// turnoId
			// 
			this->turnoId->HeaderText = L"Turno ";
			this->turnoId->MinimumWidth = 6;
			this->turnoId->Name = L"turnoId";
			this->turnoId->ReadOnly = true;
			// 
			// subsectorId
			// 
			this->subsectorId->HeaderText = L"Subsector ";
			this->subsectorId->MinimumWidth = 6;
			this->subsectorId->Name = L"subsectorId";
			this->subsectorId->ReadOnly = true;
			// 
			// cantidad
			// 
			this->cantidad->HeaderText = L"Cantidad";
			this->cantidad->MinimumWidth = 6;
			this->cantidad->Name = L"cantidad";
			this->cantidad->ReadOnly = true;
			// 
			// tipoMovimiento
			// 
			this->tipoMovimiento->HeaderText = L"Tipo movimiento";
			this->tipoMovimiento->MinimumWidth = 6;
			this->tipoMovimiento->Name = L"tipoMovimiento";
			this->tipoMovimiento->ReadOnly = true;
			this->tipoMovimiento->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->tipoMovimiento->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// esPedido
			// 
			this->esPedido->HeaderText = L"Es pedido";
			this->esPedido->MinimumWidth = 6;
			this->esPedido->Name = L"esPedido";
			this->esPedido->ReadOnly = true;
			this->esPedido->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->esPedido->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// esDiferencia
			// 
			this->esDiferencia->HeaderText = L"Es diferencia";
			this->esDiferencia->MinimumWidth = 6;
			this->esDiferencia->Name = L"esDiferencia";
			this->esDiferencia->ReadOnly = true;
			this->esDiferencia->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->esDiferencia->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// fechaHora
			// 
			this->fechaHora->HeaderText = L"Fecha/Hora";
			this->fechaHora->MinimumWidth = 6;
			this->fechaHora->Name = L"fechaHora";
			this->fechaHora->ReadOnly = true;
			// 
			// opcionesToolStripMenuItem
			// 
			this->opcionesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->cerrarSesiónToolStripMenuItem });
			this->opcionesToolStripMenuItem->Name = L"opcionesToolStripMenuItem";
			this->opcionesToolStripMenuItem->Size = System::Drawing::Size(69, 20);
			this->opcionesToolStripMenuItem->Text = L"Opciones";
			// 
			// cerrarSesiónToolStripMenuItem
			// 
			this->cerrarSesiónToolStripMenuItem->Name = L"cerrarSesiónToolStripMenuItem";
			this->cerrarSesiónToolStripMenuItem->Size = System::Drawing::Size(142, 22);
			this->cerrarSesiónToolStripMenuItem->Text = L"Cerrar sesión";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->opcionesToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1237, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1237, 686);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewStock))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewUs))->EndInit();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridCat))->EndInit();
			this->tabPage5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewMovimientos))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

			this->FormClosing += gcnew FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);

		}
#pragma endregion
	public: System::Void init() {
		CargarCategorias();
		CargarMovimientos();
		CargarStock();
		CargarUsuarios();
	}
	private: System::Void MyForm_FormClosing(System::Object^ sender, FormClosingEventArgs^ e) {
		Application::Exit();
	}

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
			for each (JObject ^ articulo in Stock) {
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
	private: System::Void agregarStockBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ apiUrl = "https://api-gestion-inventario.up.railway.app/articulos";

		// Obtener valores de los TextBox
		String^ nombre = nombreStock->Text;
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
			nombreStock->Clear();
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
	private: System::Void actualizarStockBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		CargarStock(); // Llama al método que carga los datos desde la API
		MessageBox::Show("Datos recargados correctamente.", "Información", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	private: System::Void editarStockBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (dataGridViewStock->SelectedRows->Count == 0) {
			MessageBox::Show("Seleccione un artículo para editar.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Obtener el ID del artículo seleccionado
		int id = Convert::ToInt32(dataGridViewStock->SelectedRows[0]->Cells["id"]->Value);

		// Obtener valores editados de los TextBox
		String^ nombre = nombreStock->Text;
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
	private: System::Void eliminarStockBtn_Click(System::Object^ sender, System::EventArgs^ e) {
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
	private: System::Void actualizarUsuariosBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		CargarUsuarios(); // Llama al método que carga los datos desde la API
		MessageBox::Show("Datos recargados correctamente.", "Información", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	private: System::Void agregarUsuariosBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ apiUrl = "https://api-gestion-inventario.up.railway.app/usuarios";

		// Obtener valores de los TextBox
		String^ nombre = nombreUsuarios->Text;
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
			nombreUsuarios->Clear();
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
	private: System::Void editarUsuariosBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		// Verificar si hay una fila seleccionada
		if (dataGridViewUs->SelectedRows->Count == 0) {
			MessageBox::Show("Seleccione un usuario para editar.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Obtener datos del usuario seleccionado
		int legajo = Convert::ToInt32(dataGridViewUs->SelectedRows[0]->Cells["ColumnaLegajo"]->Value);
		int id = Convert::ToInt32(dataGridViewUs->SelectedRows[0]->Cells["ColumnaId"]->Value);

		// Obtener valores editados de los TextBox
		String^ nombre = nombreUsuarios->Text;
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
	private: System::Void eliminarUsuariosBtn_Click(System::Object^ sender, System::EventArgs^ e) {
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
	private: System::Void dataGridViewUs_SelectionChanged(System::Object^ sender, System::EventArgs^ e) {
		if (dataGridViewUs->SelectedRows->Count > 0) {
			DataGridViewRow^ selectedRow = dataGridViewUs->SelectedRows[0];

			legTB->Text = selectedRow->Cells["ColumnaLegajo"]->Value != nullptr ? selectedRow->Cells["ColumnaLegajo"]->Value->ToString() : "";
		}
	}
	private: System::Void buscador_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ filtro = buscador->Text->ToLower(); // Convertir a minúsculas para búsqueda sin distinción de mayúsculas

		// Asegurar que no hay celdas en modo edición antes de ocultar filas
		dataGridViewUs->EndEdit();
		dataGridViewUs->ClearSelection();

		// Si el filtro está vacío, mostrar todas las filas automáticamente
		if (String::IsNullOrWhiteSpace(filtro)) {
			for each (DataGridViewRow ^ row in dataGridViewUs->Rows) {
				row->Visible = true;
			}
			return;
		}

		// Recorrer todas las filas del DataGridView
		for each (DataGridViewRow ^ row in dataGridViewUs->Rows) {
			if (row->IsNewRow) continue; // Evitar error en la fila nueva

			bool coincide = false;

			// Recorrer todas las celdas de la fila
			for each (DataGridViewCell ^ cell in row->Cells) {
				if (cell->Value != nullptr && cell->Value->ToString()->ToLower()->Contains(filtro)) {
					coincide = true;
					break; // Si hay coincidencia en alguna celda, no es necesario seguir verificando
				}
			}

			// Mostrar u ocultar la fila según si coincide con el filtro
			row->Visible = coincide;
		}
	}


	private: System::Void CargarCategorias() {
		String^ apiUrl = "https://api-gestion-inventario.up.railway.app/categorias";

		try {
			// Crear la solicitud GET
			HttpWebRequest^ request = dynamic_cast<HttpWebRequest^>(WebRequest::Create(apiUrl));
			request->Method = "GET";
			request->ContentType = "application/json";
			request->Accept = "application/json";

			// Obtener la respuesta del servidor
			HttpWebResponse^ response = dynamic_cast<HttpWebResponse^>(request->GetResponse());
			StreamReader^ reader = gcnew StreamReader(response->GetResponseStream());
			String^ responseJson = reader->ReadToEnd();
			reader->Close();

			// Convertir la respuesta JSON en un array de objetos
			JArray^ categorias = JArray::Parse(responseJson);

			// Limpiar las filas actuales del DataGridView
			dataGridCat->Rows->Clear();

			// Llenar el DataGridView con los datos obtenidos
			for each (JObject ^ categoria in categorias) {
				if (Convert::ToBoolean(categoria["borrado"])) continue;
				int id = safe_cast<int>(categoria["id"]);
				String^ nombre = safe_cast<String^>(categoria["nombre"]);
				dataGridCat->Rows->Add(id, nombre);
			}
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
	private: System::Void agregarBtnCat_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ apiUrl = "https://api-gestion-inventario.up.railway.app/categorias";

		// Obtener el valor del TextBox
		String^ nombreCategoria = nombreCatTB->Text;

		try {
			// Validar que el campo no esté vacío
			if (String::IsNullOrWhiteSpace(nombreCategoria)) {
				MessageBox::Show("El nombre de la categoría es obligatorio.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			// Crear el JSON del cuerpo de la solicitud
			JObject^ jsonBody = gcnew JObject();
			jsonBody["nombre"] = nombreCategoria;
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
			MessageBox::Show("Categoría agregada correctamente.", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);

			// Limpiar el TextBox después de agregar la categoría
			nombreCatTB->Clear();
			CargarCategorias();

			// Opcional: Llamar a un método para actualizar la lista de categorías si tienes un DataGridView
			// cargarCategorias();
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
	private: System::Void editarBtnCat_Click(System::Object^ sender, System::EventArgs^ e) {
		// Verificar si hay una fila seleccionada
		if (dataGridCat->SelectedRows->Count == 0) {
			MessageBox::Show("Seleccione una categoría para actualizar.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Obtener el ID de la categoría seleccionada
		int categoriaId = Convert::ToInt32(dataGridCat->SelectedRows[0]->Cells["IdCategoria"]->Value);

		// Obtener el nuevo nombre desde el TextBox
		String^ nuevoNombre = nombreCatTB->Text;

		// Validar que el nombre no esté vacío
		if (String::IsNullOrWhiteSpace(nuevoNombre)) {
			MessageBox::Show("El nombre de la categoría no puede estar vacío.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// URL de la API
		String^ apiUrl = "https://api-gestion-inventario.up.railway.app/categorias";

		try {
			// Crear el JSON con los datos a actualizar
			JObject^ jsonBody = gcnew JObject();
			jsonBody["id"] = categoriaId;
			jsonBody["nombre"] = nuevoNombre;
			String^ putData = jsonBody->ToString();

			// Crear la solicitud HTTP
			HttpWebRequest^ request = dynamic_cast<HttpWebRequest^>(WebRequest::Create(apiUrl));
			request->Method = "PUT";
			request->ContentType = "application/json";
			request->Accept = "application/json";

			// Convertir JSON a bytes
			array<Byte>^ putBytes = System::Text::Encoding::UTF8->GetBytes(putData);
			request->ContentLength = putBytes->Length;

			// Enviar los datos
			Stream^ dataStream = request->GetRequestStream();
			dataStream->Write(putBytes, 0, putBytes->Length);
			dataStream->Close();

			// Obtener la respuesta del servidor
			HttpWebResponse^ response = dynamic_cast<HttpWebResponse^>(request->GetResponse());
			StreamReader^ reader = gcnew StreamReader(response->GetResponseStream());
			String^ responseJson = reader->ReadToEnd();
			reader->Close();

			// Mostrar mensaje de éxito
			MessageBox::Show("Categoría actualizada correctamente.", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);

			// Volver a cargar las categorías en el DataGrid
			CargarCategorias();

			// Limpiar el TextBox
			nombreCatTB->Clear();
		}
		catch (WebException^ ex) {
			// Manejo de errores
			if (ex->Response != nullptr) {
				StreamReader^ errorReader = gcnew StreamReader(ex->Response->GetResponseStream());
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
	private: System::Void eliminarBtnCat_Click(System::Object^ sender, System::EventArgs^ e) {
		// Verificar si hay una fila seleccionada
		if (dataGridCat->SelectedRows->Count == 0) {
			MessageBox::Show("Seleccione una categoría para eliminar.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Obtener el ID de la categoría seleccionada
		int categoriaId = Convert::ToInt32(dataGridCat->SelectedRows[0]->Cells["IdCategoria"]->Value);

		// Confirmación de eliminación
		System::Windows::Forms::DialogResult result = MessageBox::Show(
			"¿Está seguro de que desea eliminar esta categoría?",
			"Confirmación",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Warning
		);

		if (result != System::Windows::Forms::DialogResult::Yes) {
			return;
		}

		// Construir la URL de la API para eliminar la categoría
		String^ apiUrl = "https://api-gestion-inventario.up.railway.app/categorias/" + categoriaId;

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
			MessageBox::Show("Categoría eliminada correctamente.", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);

			// Recargar los datos en el DataGridView
			CargarCategorias();
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


	private: System::Void CargarMovimientos() {
		String^ apiUrl = "https://api-gestion-inventario.up.railway.app/movimientos";

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

			// Verificar si la respuesta está vacía
			if (String::IsNullOrEmpty(responseJson)) {
				MessageBox::Show("Error: La respuesta de la API está vacía.");
				return;
			}


			// Parsear el JSON
			JArray^ movimientos = nullptr;
			try {
				movimientos = JArray::Parse(responseJson);
			}
			catch (Exception^ e) {
				MessageBox::Show("Error al parsear JSON: " + e->Message);
				return;
			}

			// Limpiar el DataGridView antes de cargar datos
			dataGridViewMovimientos->Rows->Clear();
			dataGridViewMovimientos->Columns->Clear();

			// Agregar columnas si no existen
			if (dataGridViewMovimientos->ColumnCount == 0) {
				dataGridViewMovimientos->Columns->Add("id", "ID");
				dataGridViewMovimientos->Columns->Add("articuloNombre", "Artículo");
				dataGridViewMovimientos->Columns->Add("usuarioNombre", "Usuario");
				dataGridViewMovimientos->Columns->Add("turnoNombre", "Turno");
				dataGridViewMovimientos->Columns->Add("subsectorNombre", "Subsector");
				dataGridViewMovimientos->Columns->Add("cantidad", "Cantidad");


				dataGridViewMovimientos->Columns->Add("tipoMovimiento", "Tipo movimiento");

				DataGridViewCheckBoxColumn^ colEsPedido = gcnew DataGridViewCheckBoxColumn();
				colEsPedido->Name = "esPedido";
				colEsPedido->HeaderText = "Es Pedido";
				dataGridViewMovimientos->Columns->Add(colEsPedido);

				DataGridViewCheckBoxColumn^ colEsDiferencia = gcnew DataGridViewCheckBoxColumn();
				colEsDiferencia->Name = "esDiferencia";
				colEsDiferencia->HeaderText = "Es Diferencia";
				dataGridViewMovimientos->Columns->Add(colEsDiferencia);

				dataGridViewMovimientos->Columns->Add("fechaHora", "Fecha Hora");
			}


			// Iterar sobre cada movimiento en el JSON
			for each (JObject ^ movimiento in movimientos) {
				// Asumir que los valores siempre están presentes

				int id = (movimiento->ContainsKey("id") && movimiento["id"]->Type != JTokenType::Null) ? Int32::Parse(movimiento["id"]->ToString()) : 0;

				// Obtener articuloId y nombre articulo
				JObject^ articulo = (movimiento->ContainsKey("articulo") && movimiento["articulo"]->Type == JTokenType::Object) ? safe_cast<JObject^>(movimiento["articulo"]) : nullptr;
				int articuloId = (articulo->ContainsKey("id") && articulo["id"]->Type != JTokenType::Null) ? Int32::Parse(articulo["id"]->ToString()) : 0;
				String^ articuloNombre = articulo["nombre"]->ToString();

				// Obtener usuarioId y nombre usuario
				JObject^ usuario = (movimiento->ContainsKey("usuario") && movimiento["usuario"]->Type == JTokenType::Object) ? safe_cast<JObject^>(movimiento["usuario"]) : nullptr;
				int usuarioId = (usuario->ContainsKey("id") && usuario["id"]->Type != JTokenType::Null) ? Int32::Parse(usuario["id"]->ToString()) : 0;
				String^ usuarioNombre = usuario["nombre"]->ToString() + " " + usuario["apellido"]->ToString();

				// Obtener turnoId y nombre turno
				JObject^ turno = (movimiento->ContainsKey("turno") && movimiento["turno"]->Type == JTokenType::Object) ? safe_cast<JObject^>(movimiento["turno"]) : nullptr;
				int turnoId = (turno->ContainsKey("id") && turno["id"]->Type != JTokenType::Null) ? Int32::Parse(turno["id"]->ToString()) : 0;
				String^ turnoNombre = turno["nombre"]->ToString();

				// Obtener subsectorId
				JObject^ subsector = (movimiento->ContainsKey("subsector") && movimiento["subsector"]->Type == JTokenType::Object)
					? safe_cast<JObject^>(movimiento["subsector"])
					: nullptr;
				int subsectorId = (subsector->ContainsKey("id") && subsector["id"]->Type != JTokenType::Null) ? Int32::Parse(subsector["id"]->ToString()) : 0;
				String^ subsectorNombre = subsector["nombre"]->ToString();


				int cantidad = (movimiento->ContainsKey("cantidad") && movimiento["cantidad"]->Type != JTokenType::Null) ? Int32::Parse(movimiento["cantidad"]->ToString()) : 0;


				String^ tipoMovimiento = safe_cast<bool>(movimiento["tipoMovimiento"]) ? "Entrada" : "Salida";
				bool esPedido = safe_cast<bool>(movimiento["esPedido"]);
				bool esDiferencia = safe_cast<bool>(movimiento["esDiferencia"]);
				String^ fechaHora = movimiento["fechaHora"]->ToString();

				// Agregar datos al DataGridView
				dataGridViewMovimientos->Rows->Add(id, articuloNombre, usuarioNombre, turnoNombre, subsectorNombre, cantidad, tipoMovimiento, esPedido, esDiferencia, fechaHora);
			}
		}
		catch (Exception^ e) {
			MessageBox::Show("Error al obtener datos: " + e->Message);
		}
	}
	private: System::Void actualizarMovBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		CargarMovimientos();
		MessageBox::Show("Datos recargados correctamente.", "Información", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
};
}
