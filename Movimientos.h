#pragma once
#include <thread>



namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading::Tasks;
	using namespace Newtonsoft::Json::Linq;
	using namespace System::Windows::Forms;
	using namespace System::Net;
	using namespace System::IO;
	using namespace System::Text;

	/*ref class Usuarios;
	ref class Categorias;
	ref class Inicio;
	ref class Stock;*/


	/// <summary>
	/// Resumen de Movimientos
	/// </summary>
	public ref class Movimientos : public System::Windows::Forms::Form

	{
		// Declarar el BackgroundWorker como miembro de la clase

	public:
		
		Movimientos(void)
		{
			InitializeComponent();
			CargarMovimientos();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Movimientos()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label9;
	protected:
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;











	private: System::Windows::Forms::DataGridView^ dataGridViewMovimientos;










	private: System::Windows::Forms::Button^ actualizarBtn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ articuloId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ usuarioId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ turnoId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ subsectorId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ cantidad;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ tipoMovimiento;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ esPedido;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ esDiferencia;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ fechaHora;






















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
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->dataGridViewMovimientos = (gcnew System::Windows::Forms::DataGridView());
			this->actualizarBtn = (gcnew System::Windows::Forms::Button());
			this->Id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->articuloId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->usuarioId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->turnoId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->subsectorId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cantidad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tipoMovimiento = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->esPedido = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->esDiferencia = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->fechaHora = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewMovimientos))->BeginInit();
			this->SuspendLayout();
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16.2F, System::Drawing::FontStyle::Bold));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(107)),
				static_cast<System::Int32>(static_cast<System::Byte>(135)));
			this->label9->Location = System::Drawing::Point(1021, 58);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(183, 38);
			this->label9->TabIndex = 30;
			this->label9->Text = L"Movimientos";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16.2F, System::Drawing::FontStyle::Bold));
			this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->label10->Location = System::Drawing::Point(1287, 58);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(152, 38);
			this->label10->TabIndex = 29;
			this->label10->Text = L"Categorias";
			this->label10->Click += gcnew System::EventHandler(this, &Movimientos::label10_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16.2F, System::Drawing::FontStyle::Bold));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->label6->Location = System::Drawing::Point(754, 58);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(126, 38);
			this->label6->TabIndex = 28;
			this->label6->Text = L"Usuarios";
			this->label6->Click += gcnew System::EventHandler(this, &Movimientos::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->label7->Location = System::Drawing::Point(487, 58);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(86, 38);
			this->label7->TabIndex = 27;
			this->label7->Text = L"Stock";
			this->label7->Click += gcnew System::EventHandler(this, &Movimientos::label7_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->label8->Location = System::Drawing::Point(221, 58);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(85, 38);
			this->label8->TabIndex = 26;
			this->label8->Text = L"Inicio";
			this->label8->Click += gcnew System::EventHandler(this, &Movimientos::label8_Click);
			// 
			// dataGridViewMovimientos
			// 
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::White;
			this->dataGridViewMovimientos->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			//this->dataGridViewMovimientos->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;

			this->dataGridViewMovimientos->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridViewMovimientos->BackgroundColor = System::Drawing::SystemColors::Window;
			this->dataGridViewMovimientos->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridViewMovimientos->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->dataGridViewMovimientos->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			//dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12.5F, System::Drawing::FontStyle::Bold));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::MenuHighlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridViewMovimientos->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridViewMovimientos->ColumnHeadersHeight = 70;
			

			this->dataGridViewMovimientos->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {
				this->Id,
					this->articuloId, this->usuarioId, this->turnoId, this->subsectorId, this->cantidad, this->tipoMovimiento, this->esPedido, this->esDiferencia,
					this->fechaHora
			});
			//dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::WhiteSmoke;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridViewMovimientos->DefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridViewMovimientos->EnableHeadersVisualStyles = false;
			this->dataGridViewMovimientos->GridColor = System::Drawing::Color::White;
			this->dataGridViewMovimientos->Location = System::Drawing::Point(23, 142);
			this->dataGridViewMovimientos->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridViewMovimientos->Name = L"dataGridViewMovimientos";
			this->dataGridViewMovimientos->ReadOnly = true;
			//dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridViewMovimientos->RowHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridViewMovimientos->RowHeadersVisible = false;
			this->dataGridViewMovimientos->RowHeadersWidth = 51;
			this->dataGridViewMovimientos->RowTemplate->DividerHeight = 1;
			this->dataGridViewMovimientos->RowTemplate->Height = 30;
			this->dataGridViewMovimientos->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridViewMovimientos->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->dataGridViewMovimientos->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridViewMovimientos->ShowRowErrors = false;
			this->dataGridViewMovimientos->Size = System::Drawing::Size(1606, 522);
			this->dataGridViewMovimientos->TabIndex = 31;
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
			this->actualizarBtn->Location = System::Drawing::Point(783, 692);
			this->actualizarBtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->actualizarBtn->Name = L"actualizarBtn";
			this->actualizarBtn->Size = System::Drawing::Size(143, 52);
			this->actualizarBtn->TabIndex = 33;
			this->actualizarBtn->Text = L"Actualizar";
			this->actualizarBtn->UseVisualStyleBackColor = false;
			this->actualizarBtn->Click += gcnew System::EventHandler(this, &Movimientos::actualizarBtn_Click_1);
			// 
			// Id
			// 
			this->Id->HeaderText = L"ID";
			this->Id->MinimumWidth = 6;
			this->Id->Name = L"Id";
			this->Id->ReadOnly = true;
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
			// Movimientos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1685, 838);
			this->Controls->Add(this->actualizarBtn);
			this->Controls->Add(this->dataGridViewMovimientos);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Name = L"Movimientos";
			this->Text = L"Movimientos";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewMovimientos))->EndInit();
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
			for each(JObject ^ movimiento in movimientos) {
    // Asumir que los valores siempre están presentes
	
	int id = (movimiento->ContainsKey("id") && movimiento["id"]->Type != JTokenType::Null) ? Int32::Parse(movimiento["id"]->ToString()) : 0;
	
	// Obtener articuloId y nombre articulo
	JObject^ articulo = (movimiento->ContainsKey("articulo") && movimiento["articulo"]->Type == JTokenType::Object)? safe_cast<JObject^>(movimiento["articulo"]): nullptr;
	int articuloId = (articulo->ContainsKey("id") && articulo["id"]->Type != JTokenType::Null) ? Int32::Parse(articulo["id"]->ToString()) : 0;
	String^ articuloNombre = articulo["nombre"]->ToString();

	// Obtener usuarioId y nombre usuario
	JObject^ usuario = (movimiento->ContainsKey("usuario") && movimiento["usuario"]->Type == JTokenType::Object)? safe_cast<JObject^>(movimiento["usuario"]): nullptr;
	int usuarioId = (usuario->ContainsKey("id") && usuario["id"]->Type != JTokenType::Null) ? Int32::Parse(usuario["id"]->ToString()) : 0;
	String^ usuarioNombre = usuario["nombre"]->ToString() + " " + usuario["apellido"]->ToString();

	// Obtener turnoId y nombre turno
	JObject^ turno = (movimiento->ContainsKey("turno") && movimiento["turno"]->Type == JTokenType::Object)? safe_cast<JObject^>(movimiento["turno"]): nullptr;
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
	


	   // Métodos para manejar los clics en los labels
	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void actualizarBtn_Click_1(System::Object^ sender, System::EventArgs^ e) {
	CargarMovimientos();
	MessageBox::Show("Datos recargados correctamente.", "Información", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
};
}