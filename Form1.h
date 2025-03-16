#pragma once
#include "MyForm.h"




namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System;
	using namespace System::Net;
	using namespace System::IO;
	using namespace System::Text;
	using namespace System::Windows::Forms;
	using namespace Newtonsoft::Json;
	using namespace Newtonsoft::Json::Linq;


	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			this->Show();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	public: Boolean^ LoginSuccessful = false;
	private: System::Windows::Forms::Panel^ panel1;
	public: System::Windows::Forms::TextBox^ passLog;
	private:
	public: System::Windows::Forms::TextBox^ nameLog;







	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ nameLabel;



	private: System::Windows::Forms::Label^ label1;
	public: System::Windows::Forms::Button^ loginBtn;
	private:



	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ picShowPassword;
	private: System::IO::Ports::SerialPort^ serialPort1;
	private: System::ComponentModel::IContainer^ components;




	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->picShowPassword = (gcnew System::Windows::Forms::PictureBox());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->loginBtn = (gcnew System::Windows::Forms::Button());
			this->passLog = (gcnew System::Windows::Forms::TextBox());
			this->nameLog = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->nameLabel = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picShowPassword))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel1->Controls->Add(this->picShowPassword);
			this->panel1->Controls->Add(this->linkLabel1);
			this->panel1->Controls->Add(this->loginBtn);
			this->panel1->Controls->Add(this->passLog);
			this->panel1->Controls->Add(this->nameLog);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->nameLabel);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(391, 657);
			this->panel1->TabIndex = 0;
			// 
			// picShowPassword
			// 
			this->picShowPassword->Location = System::Drawing::Point(353, 441);
			this->picShowPassword->Margin = System::Windows::Forms::Padding(2);
			this->picShowPassword->Name = L"picShowPassword";
			this->picShowPassword->Size = System::Drawing::Size(26, 28);
			this->picShowPassword->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picShowPassword->TabIndex = 8;
			this->picShowPassword->TabStop = false;
			this->picShowPassword->Click += gcnew System::EventHandler(this, &Form1::picShowPassword_Click);
			// 
			// linkLabel1
			// 
			this->linkLabel1->ActiveLinkColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->BackColor = System::Drawing::Color::Transparent;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel1->LinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(75)), static_cast<System::Int32>(static_cast<System::Byte>(75)),
				static_cast<System::Int32>(static_cast<System::Byte>(75)));
			this->linkLabel1->Location = System::Drawing::Point(99, 554);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(178, 16);
			this->linkLabel1->TabIndex = 7;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"¿Has olvidado tu contraseña\?";
			this->linkLabel1->VisitedLinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(117)),
				static_cast<System::Int32>(static_cast<System::Byte>(117)), static_cast<System::Int32>(static_cast<System::Byte>(117)));
			// 
			// loginBtn
			// 
			this->loginBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->loginBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->loginBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->loginBtn->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loginBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->loginBtn->Location = System::Drawing::Point(60, 500);
			this->loginBtn->Name = L"loginBtn";
			this->loginBtn->Size = System::Drawing::Size(260, 34);
			this->loginBtn->TabIndex = 6;
			this->loginBtn->Text = L"Entrar";
			this->loginBtn->UseVisualStyleBackColor = false;
			this->loginBtn->Click += gcnew System::EventHandler(this, &Form1::loginBtn_Click);
			// 
			// passLog
			// 
			this->passLog->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passLog->Location = System::Drawing::Point(21, 441);
			this->passLog->Name = L"passLog";
			this->passLog->Size = System::Drawing::Size(320, 29);
			this->passLog->TabIndex = 5;
			this->passLog->UseSystemPasswordChar = true;
			// 
			// nameLog
			// 
			this->nameLog->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nameLog->Location = System::Drawing::Point(21, 360);
			this->nameLog->Name = L"nameLog";
			this->nameLog->Size = System::Drawing::Size(320, 29);
			this->nameLog->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->label3->Location = System::Drawing::Point(17, 416);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(107, 22);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Contraseña";
			// 
			// nameLabel
			// 
			this->nameLabel->AutoSize = true;
			this->nameLabel->BackColor = System::Drawing::Color::Transparent;
			this->nameLabel->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nameLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->nameLabel->Location = System::Drawing::Point(17, 335);
			this->nameLabel->Name = L"nameLabel";
			this->nameLabel->Size = System::Drawing::Size(68, 22);
			this->nameLabel->TabIndex = 2;
			this->nameLabel->Text = L"Legajo";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->label1->Location = System::Drawing::Point(15, 266);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(194, 32);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Iniciar Sesión";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(102, 30);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(182, 170);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(1269, 612);
			this->Controls->Add(this->panel1);
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Hpc";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picShowPassword))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	public:
		String^ accessToken;
		int id;
		String^ legajo;
		String^ nombreUsuario;
		String^ tipo;
		bool isPasswordVisible = false; // Variable de estado
		String^ permiso = "Desconocido";

	private: System::Void loginBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ apiUrl = "https://api-gestion-inventario.up.railway.app/auth/login";
		String^ apiUsuarioUrl = "https://api-gestion-inventario.up.railway.app/usuarios/legajo/";

		String^ inputLegajo = nameLog->Text;
		String^ inputPass = passLog->Text;

		try {
			int legajoNum = Int32::Parse(inputLegajo);

			// Crear el JSON del cuerpo de la solicitud
			JObject^ jsonBody = gcnew JObject();
			jsonBody["legajo"] = legajoNum;
			jsonBody["password"] = inputPass;
			String^ postData = jsonBody->ToString();

			// Crear la solicitud POST para login
			HttpWebRequest^ request = dynamic_cast<HttpWebRequest^>(WebRequest::Create(apiUrl));
			request->Method = "POST";
			request->ContentType = "application/json";
			request->Accept = "application/json";
			request->ContentLength = Encoding::UTF8->GetByteCount(postData);

			array<Byte>^ postBytes = Encoding::UTF8->GetBytes(postData);
			Stream^ dataStream = request->GetRequestStream();
			dataStream->Write(postBytes, 0, postBytes->Length);
			dataStream->Close();

			// Obtener la respuesta del login
			HttpWebResponse^ response = dynamic_cast<HttpWebResponse^>(request->GetResponse());
			StreamReader^ streamReader = gcnew StreamReader(response->GetResponseStream());
			String^ responseJson = streamReader->ReadToEnd();
			streamReader->Close();

			JObject^ jsonResponse = JObject::Parse(responseJson);
			if (jsonResponse->ContainsKey("accessToken")) {
				// Guardar el token en una variable de instancia
				this->accessToken = safe_cast<String^>(jsonResponse["accessToken"]);

				// Realizar GET para obtener los datos del usuario
				HttpWebRequest^ userRequest = dynamic_cast<HttpWebRequest^>(WebRequest::Create(apiUsuarioUrl + legajoNum));
				userRequest->Method = "GET";
				userRequest->Headers->Add("Authorization", "Bearer " + this->accessToken);

				HttpWebResponse^ userResponse = dynamic_cast<HttpWebResponse^>(userRequest->GetResponse());
				StreamReader^ userReader = gcnew StreamReader(userResponse->GetResponseStream());
				String^ userJson = userReader->ReadToEnd();
				userReader->Close();

				JObject^ userObject = JObject::Parse(userJson);

				// Asignar los datos del usuario a las variables
				this->id = safe_cast<int>(userObject["id"]);
				this->legajo = safe_cast<String^>(userObject["legajo"]);
				this->nombreUsuario = safe_cast<String^>(userObject["nombre"]);
				String^ apellido = safe_cast<String^>(userObject["apellido"]);

				// Acceder al campo "permiso" anidado
				if (userObject->ContainsKey("permiso")) {
					JObject^ permisoObject = safe_cast<JObject^>(userObject["permiso"]);
					permiso = safe_cast<String^>(permisoObject["nombre"]);
				}

				if (permiso != "Administrador" && permiso != "Tecnico") {
					MessageBox::Show("Permisos del usuario insuficientes", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}
				// Redirigir a la pantalla de inicio
				MyForm^ mainForm = gcnew MyForm(permiso);
				mainForm->init();
				mainForm->Show();
				this->Hide();

			}
			else {
				MessageBox::Show("Legajo o contraseña incorrectos.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
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
		catch (Exception^ ex) {
			MessageBox::Show("Error inesperado: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void picShowPassword_Click(System::Object^ sender, System::EventArgs^ e) {
		isPasswordVisible = !isPasswordVisible;
		passLog->UseSystemPasswordChar = !isPasswordVisible;
	}
};
}
