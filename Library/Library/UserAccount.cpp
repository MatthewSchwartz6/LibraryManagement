#include "UserAccount.h"
using namespace std;

UserAccount::UserAccount(){
	canCheckOutBooks = true;
  userName = "";
  createdAccount = "";
  userBalance = 0;
}
UserAccount::UserAccount(UserAccount *u) {
	userBalance = 0;
	this->canCheckOutBooks = u->canCheckOutBooks;
	this->setUserName(u->getUserName());
	this->setAccountCreationDate(u->getAccountCreationDate());
	this->addMoneyToAccount(u->getUserBalanace());
}
void UserAccount::setUserName(string u){
  userName = u;
}
void UserAccount::setAccountCreationDate(string c){
  createdAccount = c;
}
void UserAccount::addMoneyToAccount(double m) {
	userBalance += m;
}
string UserAccount::getAccountCreationDate(){
  return createdAccount;
}
string UserAccount::getUserName(){
  return userName;
}
void UserAccount::payForBook(double a){
  userBalance -= a;
}
double UserAccount::getUserBalanace(){
  return userBalance;
}
