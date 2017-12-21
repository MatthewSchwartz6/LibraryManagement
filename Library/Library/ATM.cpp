#include "ATM.h"
#include "Library.h"
using namespace Library;

void ATM::Leave(UserAccount *u, LibModel *l, vector<UserAccount*>*users) {
	TheLibrary ^lib = gcnew TheLibrary(u, l, users);
	lib->Show();
	this->Hide();
}