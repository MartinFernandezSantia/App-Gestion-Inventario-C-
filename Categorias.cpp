#include "pch.h"
#include "Categorias.h"
#include "Movimientos.h"
#include "Inicio.h"
#include "Stock.h"
#include "Usuarios.h"


using namespace CppCLRWinFormsProject;


	Void Categorias::label1_Click(System::Object^ sender, System::EventArgs^ e) {
		Inicio^ inicioForm = gcnew Inicio();
		inicioForm->Show();
		this->Close();
	}
	Void Categorias::label2_Click(System::Object^ sender, System::EventArgs^ e) {
			Stock^ stockForm = gcnew Stock();
			stockForm->Show();
			this->Close();
		}
	Void Categorias::label3_Click(System::Object^ sender, System::EventArgs^ e) {
			Usuarios^ usuariosForm = gcnew Usuarios();
			usuariosForm->Show();
			this->Close();
		}
	Void Categorias::label9_Click(System::Object^ sender, System::EventArgs^ e) {
			Movimientos^ movimientosForm = gcnew Movimientos();
			movimientosForm->Show();
			this->Close();
	}

