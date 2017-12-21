#include "MyForm.h"
#include "MainForm.h"
using namespace Library;
void MyForm::leave(vector<UserAccount *>*u,LibModel *l) {
	MainForm ^m = gcnew MainForm(u,l);
	m->Show();
	this->Close();
}
