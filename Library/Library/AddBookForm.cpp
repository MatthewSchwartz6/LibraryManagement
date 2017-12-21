#include "AddBookForm.h"
#include "Library.h"
using namespace Library;
void AddBookForm::addBookAndReturn(UserAccount *u, LibModel *l,vector<UserAccount*>*us) {
	TheLibrary ^library = gcnew TheLibrary(u, l,us);
	library->Show();
	this->Hide();
}