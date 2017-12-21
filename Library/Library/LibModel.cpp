#include <iostream>
#include "LibModel.h"

using namespace std;
LibModel::LibModel()
{
	allBooks = new vector<Book>();
}
LibModel::LibModel(LibModel *lib) {
	allBooks = new vector<Book>();
		for (unsigned int i = 0; i < lib->allBooks->size(); i++) {
			this->allBooks->push_back(lib->allBooks->at(i));
		}
	
}
int LibModel::findBookInDatabase(Book aBook){

  for (unsigned int i = 0; i <allBooks->size();i++){
    if (allBooks->at(i).getBookTitle() == aBook.getBookTitle())
        return i;
  }
  return -1;
}
void LibModel::addBook(Book bookToAdd)
{
  allBooks->push_back(bookToAdd);
}
void LibModel::displayBook(Book bookToDisplay)
{
  cout<< "Title: "<<bookToDisplay.getBookTitle()
  <<"Author: "<<bookToDisplay.getBookAuthor()
  <<"Checked Out: "<<bookToDisplay.getDateCheckedOut()
  <<"Due: "<<bookToDisplay.getDueDate()
  <<"Checked In Last: "<<bookToDisplay.getDateCheckedIn()
  <<"Name Checked Out: "<<bookToDisplay.getNameCheckedOut()
  <<"Name Waiting For Book: "<<bookToDisplay.getNamePending()
  <<"Book Type: "<<bookToDisplay.getBookType()<<endl;

}
void LibModel::checkInBook(Book bookToCheckIn,string date)
{
  int bookNo = findBookInDatabase(bookToCheckIn);
  Book theBook = allBooks->at(bookNo);
  theBook.changeBookStatus(false);
  theBook.setDateCheckedIn(date);
}
void LibModel::checkOutBook (Book bookToCheckOut, string date)
{
  int bookNo = findBookInDatabase(bookToCheckOut);
  Book theBook = allBooks->at(bookNo);
  theBook.changeBookStatus(true);
  theBook.setDateCheckedOut(date);
}
void LibModel::deleteBook (Book bookToDelete)
{

  int bookNo = findBookInDatabase(bookToDelete);
  if (bookNo != -1)
    allBooks->erase(allBooks->begin()+bookNo);
  else
    cout<<"Could not locate book to delete."<<endl;

}
void LibModel::checkIfPending (Book bookToCheck)
{
  int bookNo = findBookInDatabase(bookToCheck);
  if (bookNo != -1){
    Book aBook = allBooks->at(bookNo);
    if (aBook.isPending())
      cout<<"Book is pending."<<endl;
    else
      cout<<"Book is not pending"<<endl;
  }
  else
    cout<<"Could not locate book."<<endl;
}
void LibModel::createUserAccount(string name, string dateCreated, double money)
{
  UserAccount user;
  user.setUserName(name);
  user.setAccountCreationDate(dateCreated);
  user.addMoneyToAccount(money);
  allUsers.push_back(user);
}
void LibModel::deleteUserAccount(UserAccount user)
{
  UserAccount u;
  for (unsigned int i = 0; i <allUsers.size();i++)
    {
      if (allUsers.at(i).getUserName() == user.getUserName() )
          allUsers.erase(allUsers.begin()+i);
          return;
    }
    
}
void LibModel::printAccountDetails()
{

}
void LibModel::updateUserAccount()
{

}

void LibModel::createFileDatabase() {}
void LibModel::addRecordToDatabase(Book aBook){}

void LibModel::deleteRecordInDatabase(Book aBook) {}