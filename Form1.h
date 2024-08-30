#pragma once
#include "Inicio.h"


namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
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
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ passLog;
	private: System::Windows::Forms::TextBox^ nameLog;





	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ nameLabel;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ loginBtn;

	private: System::Windows::Forms::LinkLabel^ linkLabel1;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->loginBtn = (gcnew System::Windows::Forms::Button());
			this->passLog = (gcnew System::Windows::Forms::TextBox());
			this->nameLog = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->nameLabel = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::WhiteSmoke;
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
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel1->LinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(75)), static_cast<System::Int32>(static_cast<System::Byte>(75)),
				static_cast<System::Int32>(static_cast<System::Byte>(75)));
			this->linkLabel1->Location = System::Drawing::Point(99, 554);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(178, 16);
			this->linkLabel1->TabIndex = 7;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"¿Haz olvidado tu contraseña\?";
			this->linkLabel1->VisitedLinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(117)),
				static_cast<System::Int32>(static_cast<System::Byte>(117)), static_cast<System::Int32>(static_cast<System::Byte>(117)));
			// 
			// loginBtn
			// 
			this->loginBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
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
			this->passLog->Size = System::Drawing::Size(340, 29);
			this->passLog->TabIndex = 5;
			// 
			// nameLog
			// 
			this->nameLog->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nameLog->Location = System::Drawing::Point(21, 360);
			this->nameLog->Name = L"nameLog";
			this->nameLog->Size = System::Drawing::Size(340, 29);
			this->nameLog->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
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
			this->nameLabel->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nameLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->nameLabel->Location = System::Drawing::Point(17, 335);
			this->nameLabel->Name = L"nameLabel";
			this->nameLabel->Size = System::Drawing::Size(78, 22);
			this->nameLabel->TabIndex = 2;
			this->nameLabel->Text = L"Nombre";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
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
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(12, 25);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(349, 209);
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
			this->ClientSize = System::Drawing::Size(1264, 681);
			this->Controls->Add(this->panel1);
			this->Name = L"Form1";
			this->Text = L"Hpc";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void loginBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		/* / Obtener los valores ingresados por el usuario
		String^ nombre = nameLog->Text;
		String^ contraseña = passLog->Text;

		// Cadena de conexión a la base de datos
		String^ connString = "server=your_server;uid=your_username;pwd=your_password;database=your_database";
		SqlConnection^ conn = gcnew SqlConnection(connString);

		try {
			// Abrir la conexión
			conn->Open();

			// Crear la consulta SQL para buscar el usuario
			String^ query = "SELECT COUNT(*) FROM usuarios WHERE nombre=@nombre AND contraseña=@contraseña";

			SqlCommand^ cmd = gcnew SqlCommand(query, conn);
			cmd->Parameters->AddWithValue("@nombre", nombre);
			cmd->Parameters->AddWithValue("@contraseña", contraseña);

			// Ejecutar la consulta y obtener el resultado
			int count = Convert::ToInt32(cmd->ExecuteScalar());

			// Verificar si el usuario existe
			if (count == 1) {
				MessageBox::Show("Inicio de sesión exitoso.");
				// Aquí puedes agregar el código para redirigir al usuario a la siguiente ventana o pantalla.
			}
			else {
				MessageBox::Show("Nombre de usuario o contraseña incorrectos.");
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error: " + ex->Message);
		}
		finally {
			// Cerrar la conexión
			conn->Close();
		}*/
	}

};
}
