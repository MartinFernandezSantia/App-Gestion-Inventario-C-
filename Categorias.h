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

	/*ref class Usuarios;
	ref class Stock;
	ref class Inicio;
	ref class Movimientos;*/


	/// <summary>
	/// Resumen de Categorias
	/// </summary>
	public ref class Categorias : public System::Windows::Forms::Form
	{
	public:
		Categorias(void)
		{
			InitializeComponent();
			cargarCategorias();

			// Asignar eventos a los labels
			
			
			
			
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Categorias()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label10;
	protected:
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridCat;








	private: System::Windows::Forms::Button^ agregarBtnCat;
	private: System::Windows::Forms::Button^ eliminarBtnCat;


	private: System::Windows::Forms::Button^ editarBtnCat;





	private: System::Windows::Forms::TextBox^ nombreCatTB;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ IdCategoria;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaCategoria;













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
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridCat = (gcnew System::Windows::Forms::DataGridView());
			this->IdCategoria = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnaCategoria = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->agregarBtnCat = (gcnew System::Windows::Forms::Button());
			this->eliminarBtnCat = (gcnew System::Windows::Forms::Button());
			this->editarBtnCat = (gcnew System::Windows::Forms::Button());
			this->nombreCatTB = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridCat))->BeginInit();
			this->SuspendLayout();
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16.2, System::Drawing::FontStyle::Bold));
			this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(107)),
				static_cast<System::Int32>(static_cast<System::Byte>(135)));
			this->label10->Location = System::Drawing::Point(1279, 49);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(152, 38);
			this->label10->TabIndex = 28;
			this->label10->Text = L"Categorias";
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16.2, System::Drawing::FontStyle::Bold));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->label9->Location = System::Drawing::Point(1012, 49);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(183, 38);
			this->label9->TabIndex = 27;
			this->label9->Text = L"Movimientos";
			this->label9->Click += gcnew System::EventHandler(this, &Categorias::label9_Click);
			this->label3->AutoSize = true;
			this->label3->Cursor = System::Windows::Forms::Cursors::Default;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16.2, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->label3->Location = System::Drawing::Point(745, 49);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(126, 38);
			this->label3->TabIndex = 26;
			this->label3->Text = L"Usuarios";
			this->label3->Click += gcnew System::EventHandler(this, &Categorias::label3_Click);
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16.2, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->label2->Location = System::Drawing::Point(479, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 38);
			this->label2->TabIndex = 25;
			this->label2->Text = L"Stock";
			this->label2->Click += gcnew System::EventHandler(this, &Categorias::label2_Click);
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16.2, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->label1->Location = System::Drawing::Point(212, 49);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(85, 38);
			this->label1->TabIndex = 24;
			this->label1->Text = L"Inicio";
			this->label1->Click += gcnew System::EventHandler(this, &Categorias::label1_Click);
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::White;
			this->dataGridCat->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridCat->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridCat->BackgroundColor = System::Drawing::SystemColors::Window;
			this->dataGridCat->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridCat->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->dataGridCat->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12.5, System::Drawing::FontStyle::Bold));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::MenuHighlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridCat->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridCat->ColumnHeadersHeight = 50;
			this->dataGridCat->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->IdCategoria,
					this->ColumnaCategoria
			});
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::WhiteSmoke;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridCat->DefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridCat->EnableHeadersVisualStyles = false;
			this->dataGridCat->GridColor = System::Drawing::Color::White;
			this->dataGridCat->Location = System::Drawing::Point(15, 492);
			this->dataGridCat->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridCat->Name = L"dataGridCat";
			this->dataGridCat->ReadOnly = true;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridCat->RowHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridCat->RowHeadersVisible = false;
			this->dataGridCat->RowHeadersWidth = 51;
			this->dataGridCat->RowTemplate->DividerHeight = 1;
			this->dataGridCat->RowTemplate->Height = 30;
			this->dataGridCat->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridCat->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->dataGridCat->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridCat->ShowRowErrors = false;
			this->dataGridCat->Size = System::Drawing::Size(1656, 332);
			this->dataGridCat->TabIndex = 29;
			this->IdCategoria->FillWeight = 50.76143;
			this->IdCategoria->HeaderText = L"ID";
			this->IdCategoria->MinimumWidth = 6;
			this->IdCategoria->Name = L"IdCategoria";
			this->IdCategoria->ReadOnly = true;
			this->IdCategoria->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->ColumnaCategoria->FillWeight = 149.2386;
			this->ColumnaCategoria->HeaderText = L"Categoria";
			this->ColumnaCategoria->MinimumWidth = 6;
			this->ColumnaCategoria->Name = L"ColumnaCategoria";
			this->ColumnaCategoria->ReadOnly = true;
			this->agregarBtnCat->BackColor = System::Drawing::SystemColors::Window;
			this->agregarBtnCat->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)), static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->agregarBtnCat->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->agregarBtnCat->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->agregarBtnCat->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->agregarBtnCat->Location = System::Drawing::Point(15, 421);
			this->agregarBtnCat->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->agregarBtnCat->Name = L"agregarBtnCat";
			this->agregarBtnCat->Size = System::Drawing::Size(143, 52);
			this->agregarBtnCat->TabIndex = 31;
			this->agregarBtnCat->Text = L"Agregar";
			this->agregarBtnCat->UseVisualStyleBackColor = false;
			this->agregarBtnCat->Click += gcnew System::EventHandler(this, &Categorias::agregarBtnCat_Click);
			this->eliminarBtnCat->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->eliminarBtnCat->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->eliminarBtnCat->FlatAppearance->BorderSize = 0;
			this->eliminarBtnCat->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->eliminarBtnCat->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->eliminarBtnCat->ForeColor = System::Drawing::Color::DarkRed;
			this->eliminarBtnCat->Location = System::Drawing::Point(425, 417);
			this->eliminarBtnCat->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->eliminarBtnCat->Name = L"eliminarBtnCat";
			this->eliminarBtnCat->Size = System::Drawing::Size(143, 55);
			this->eliminarBtnCat->TabIndex = 32;
			this->eliminarBtnCat->Text = L"Eliminar";
			this->eliminarBtnCat->UseVisualStyleBackColor = false;
			this->eliminarBtnCat->Click += gcnew System::EventHandler(this, &Categorias::eliminarBtnCat_Click);
			this->editarBtnCat->BackColor = System::Drawing::SystemColors::Control;
			this->editarBtnCat->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaption;
			this->editarBtnCat->FlatAppearance->BorderSize = 0;
			this->editarBtnCat->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->editarBtnCat->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->editarBtnCat->ForeColor = System::Drawing::Color::SteelBlue;
			this->editarBtnCat->Location = System::Drawing::Point(219, 421);
			this->editarBtnCat->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->editarBtnCat->Name = L"editarBtnCat";
			this->editarBtnCat->Size = System::Drawing::Size(143, 52);
			this->editarBtnCat->TabIndex = 33;
			this->editarBtnCat->Text = L"Editar";
			this->editarBtnCat->UseVisualStyleBackColor = false;
			this->editarBtnCat->Click += gcnew System::EventHandler(this, &Categorias::editarBtnCat_Click);
			this->nombreCatTB->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.75, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nombreCatTB->Location = System::Drawing::Point(199, 230);
			this->nombreCatTB->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->nombreCatTB->Multiline = true;
			this->nombreCatTB->Name = L"nombreCatTB";
			this->nombreCatTB->Size = System::Drawing::Size(340, 36);
			this->nombreCatTB->TabIndex = 39;
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(107)),
				static_cast<System::Int32>(static_cast<System::Byte>(135)));
			this->label4->Location = System::Drawing::Point(32, 230);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(118, 37);
			this->label4->TabIndex = 38;
			this->label4->Text = L"Nombre";
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1685, 838);
			this->Controls->Add(this->nombreCatTB);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->editarBtnCat);
			this->Controls->Add(this->eliminarBtnCat);
			this->Controls->Add(this->agregarBtnCat);
			this->Controls->Add(this->dataGridCat);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"Categorias";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Categorias";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridCat))->EndInit();
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
			cargarCategorias();

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

	private: System::Void cargarCategorias() {
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
			cargarCategorias();

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
		cargarCategorias();
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


	   // Métodos para manejar los clics en los labels
	Void label1_Click(System::Object^ sender, System::EventArgs^ e);
	Void label2_Click(System::Object^ sender, System::EventArgs^ e);
	Void label3_Click(System::Object^ sender, System::EventArgs^ e);
	Void label9_Click(System::Object^ sender, System::EventArgs^ e);
};
}
