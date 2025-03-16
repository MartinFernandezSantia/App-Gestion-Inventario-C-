#include "pch.h"

using namespace System;

// int main(array<System::String ^> ^args)
// {
//    return 0;
// }

#include "Form1.h"

using namespace System::Windows::Forms;
using namespace CppCLRWinFormsProject;

[STAThread]
int main()
{
  Application::EnableVisualStyles();
  Application::SetCompatibleTextRenderingDefault(false);

  Application::Run(gcnew CppCLRWinFormsProject::Form1());
  //Controller^ controller = gcnew Controller();
  return 0;
}