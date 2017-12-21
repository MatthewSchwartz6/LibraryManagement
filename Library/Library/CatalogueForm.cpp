#include "CatalogueForm.h"
#include "Library.h"
using namespace Library;
void CatalogueForm::leave(UserAccount *u, LibModel *l, vector<UserAccount*>*users) {
	TheLibrary ^lib = gcnew TheLibrary(u, l, users);
	lib->Show();
	this->Hide();
}
