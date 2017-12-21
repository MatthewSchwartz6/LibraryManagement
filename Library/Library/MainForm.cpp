#include "MainForm.h"

using namespace Library; 
[STAThread]
	void Entry() {
		Application::EnableVisualStyles();
		Application::SetCompatibleTextRenderingDefault(false);
		MainForm ^ mForm = gcnew MainForm();
		Application::Run(mForm);
	}
