#include "pch.h"
#include "Stock.h"
#include "Movimientos.h"
#include "Inicio.h"
#include "Usuarios.h"
#include "Categorias.h"

using namespace CppCLRWinFormsProject;


	Void Stock::label8_Click(System::Object^ sender, System::EventArgs^ e) {
		Inicio^ inicioForm = gcnew Inicio();
		inicioForm->Show();
		this->Close();
	}
	Void Stock::label6_Click(System::Object^ sender, System::EventArgs^ e) {
		Usuarios^ usuariosForm = gcnew Usuarios();
		usuariosForm->Show();
		this->Close();
	}
	Void Stock::label9_Click(System::Object^ sender, System::EventArgs^ e) {
		Movimientos^ movimientosForm = gcnew Movimientos();
		movimientosForm->Show();
		this->Close();
	}

	Void Stock::label10_Click(System::Object^ sender, System::EventArgs^ e) {
		Categorias^ categoriasForm = gcnew Categorias();
		categoriasForm->Show();
		this->Close();
		}

