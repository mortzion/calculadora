#include "telaPrincipal.h"


using namespace System;
using namespace System::Windows::Forms;
using namespace std;

int main(void) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	//HAN SOLO MORRE!
	Calculadora::telaPrincipal form;
	Application::Run(%form);

	return 0;
}
