#include "pch.h"
#include "Inicio.h"
#include "Movimientos.h"
#include "Stock.h"
#include "Usuarios.h"
#include "Categorias.h"

using namespace CppCLRWinFormsProject;



Void Inicio::label3_Click(System::Object^ sender, System::EventArgs^ e) {
	Usuarios^ usuariosForm = gcnew Usuarios();
	usuariosForm->Show();
	this->Close();
}
Void Inicio::label10_Click(System::Object^ sender, System::EventArgs^ e) {
	Categorias^ categoriasForm = gcnew Categorias();
	categoriasForm->Show();
	this->Close();
}

Void Inicio::label2_Click(System::Object^ sender, System::EventArgs^ e) {
	Stock^ stockForm = gcnew Stock();
	stockForm->Show();
	this->Close();
}

Void Inicio::label4_Click(System::Object^ sender, System::EventArgs^ e) {
	Movimientos^ movimientosForm = gcnew Movimientos();
	movimientosForm->Show();
	this->Close();

}

