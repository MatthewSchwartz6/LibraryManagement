#ifndef LIBMODEL_H
#define LIBMODEL_H

#include <vector>
#include <iostream>
#include <string>
#include "Book.h"
#include "UserAccount.h"
//The system date should be used to update the checkout date and return date.
using namespace std;
class LibModel {
private:
  Book book;
  
  vector<UserAccount> allUsers;
  void createFileDatabase();
  void addRecordToDatabase(Book aBook);
  int findBookInDatabase(Book aBook);
  void deleteRecordInDatabase(Book aBook);
public:
  vector<Book> *allBooks;
  LibModel();
  LibModel(LibModel *l);
  void addBook(Book bookToAdd);
  void displayBook(Book bookToDisplay);
  void checkInBook(Book bookToCheckIn, string date);
  void checkOutBook (Book bookToCheckOut, string date);
  void deleteBook (Book bookToDelete);
  void checkIfPending (Book bookToCheck);
  void createUserAccount(string name, string dateCreated, double money);
  void deleteUserAccount(UserAccount user);
  void printAccountDetails();
  void updateUserAccount();


};
#endif
