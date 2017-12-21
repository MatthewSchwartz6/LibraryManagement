#ifndef USERACCOUNT_H
#define USERACCOUNT_H
#include <string>

//append the pending status of a book to a user's account when the book they want has been brought back
using namespace std;
class UserAccount {
private:
  
  string userName;
  string createdAccount;
  double userBalance;

public:
	bool canCheckOutBooks;
	UserAccount();
	UserAccount(UserAccount*);
  void setUserName(string);
  void setAccountCreationDate(string);
  void addMoneyToAccount(double);
  string getAccountCreationDate();
  string getUserName();

  void payForBook(double);
  double getUserBalanace();
};
#endif
