#include "pch.h"
#include "Usuarios.h"
#include "Movimientos.h"
#include "Inicio.h"
#include "Stock.h"
#include "Categorias.h"

using namespace CppCLRWinFormsProject;



		Void Usuarios::label1_Click(System::Object^ sender, System::EventArgs^ e) {
			Inicio^ inicioForm = gcnew Inicio();
			inicioForm->Show();
			this->Close();
		}
		Void Usuarios::label2_Click(System::Object^ sender, System::EventArgs^ e) {
					Stock^ stockForm = gcnew Stock();
					stockForm->Show();
					this->Close();
				}
		Void Usuarios::label9_Click(System::Object^ sender, System::EventArgs^ e) {
					Movimientos^ movimientosForm = gcnew Movimientos();
					movimientosForm->Show();
					this->Close();
				}
		Void Usuarios::label10_Click(System::Object^ sender, System::EventArgs^ e) {
					Categorias^ categoriasForm = gcnew Categorias();
					categoriasForm->Show();
					this->Close();
		}

