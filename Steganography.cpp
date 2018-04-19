#include "stdafx.h"

using namespace System;
using namespace System::Windows::Forms;

#include "MainForm.h"

[STAThreadAttribute()]
void Main( array<System::String ^> ^args )
{
 Application::EnableVisualStyles();
 Application::SetCompatibleTextRenderingDefault( false );
 Application::Run( gcnew CppTutorial::MainForm() );
}