#ifndef BOOK_H
#define BOOK_H
#include <string>
#include <vector>
using namespace std;
class Book {

private:
  string bookTitle;
  string bookAuthor;
  bool checkedOutStatus; //if true the book is checked out
  string dateCheckedOut;
  string dateCheckedIn;
  string nameCheckedOut;
  bool pendingStatus; //true if someone is waiting for the book to be returned
  string namePending;
  string bookType;
  string bookDueDate;
  vector<string> namePreviousCheckedOut;
  vector<string> datePreviousCheckedOut;

public:
  Book();
  Book(string,string,bool);
  //Book(string,string,bool,string,string,bool,string);
  void setBookTitle(string);
  string getBookTitle();
  void setBookAuthor(string);
  string getBookAuthor();
  void changeBookStatus(bool); //set to true to set bool isCheckedOut to true
  bool isCheckedOut();
  void setDateCheckedOut(string);
  string getDateCheckedOut();
  void setDateCheckedIn(string);
  string getDateCheckedIn();
  void setNameCheckedOut(string);
  string getNameCheckedOut();
  void changePendingStatus(bool);
  bool isPending();
  void setNamePending(string);
  string getNamePending();
  void setBookType(string);
  string getBookType();
  void setDueDate(string);
  string getDueDate();

};
#endif
