#include "pch.h"
#include "Movimientos.h"
#include "Inicio.h"
#include "Stock.h"
#include "Usuarios.h"
#include "Categorias.h"

using namespace CppCLRWinFormsProject;


Void Movimientos::label8_Click(System::Object^ sender, System::EventArgs^ e) {
	Inicio^ inicioForm = gcnew Inicio();
	inicioForm->Show();
	this->Close();
}
Void Movimientos::label7_Click(System::Object^ sender, System::EventArgs^ e) {
	Stock^ stockForm = gcnew Stock();
	stockForm->Show();
	this->Close();
}
Void Movimientos::label6_Click(System::Object^ sender, System::EventArgs^ e) {
	Usuarios^ usuariosForm = gcnew Usuarios();
	usuariosForm->Show();
	this->Close();
}
Void Movimientos::label10_Click(System::Object^ sender, System::EventArgs^ e) {
	Categorias^ categoriasForm = gcnew Categorias();
	categoriasForm->Show();
	this->Close();
}
