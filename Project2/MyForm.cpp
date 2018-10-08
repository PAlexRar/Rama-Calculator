#include "MyForm.h"
#include <math.h>

using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void main(array<String^>^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(0);
	Project2::MyForm Rama;
	Application::Run(%Rama);
}