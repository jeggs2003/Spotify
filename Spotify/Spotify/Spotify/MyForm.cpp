#include "MyForm.h"


using namespace std;
using namespace System;
using namespace System::Windows::Forms;

int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Spotify::MyForm form;
	Application::Run(% form);
	return 0;
}
