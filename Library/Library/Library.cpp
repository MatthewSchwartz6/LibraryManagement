#include "Library.h"
#include "MainForm.h"
using namespace Library;
void TheLibrary::leave(vector <UserAccount*>*u, LibModel *l) {
	MainForm ^m = gcnew MainForm(u, l);
	m->Show();
	this->Hide();
}