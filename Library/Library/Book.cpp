#include "Book.h"
#include <iostream>



using namespace std;

Book::Book() {
	bookTitle = "";
	bookAuthor = "";
	checkedOutStatus = false;
	dateCheckedOut = "";
	dateCheckedIn = "";
	nameCheckedOut = "No One";
	pendingStatus = false;
	namePending = "No One";
	bookType = "";
	bookDueDate = "";
	vector<string> namePreviousCheckedOut;
	vector<string> datePreviousCheckedOut;
}

Book::Book(string newBookTitle, string newBookAuthor, bool newIsCheckedOut) {

	bookAuthor = newBookAuthor;
	bookTitle = newBookTitle;
	this->checkedOutStatus = newIsCheckedOut;
}

void Book::setBookTitle(string newBookTitle) {
	this->bookTitle = newBookTitle;
}

string Book::getBookTitle() {
	return this->bookTitle;
}

void Book::setBookAuthor(string newBookAuthor) {
	this->bookAuthor = newBookAuthor;
}

string Book::getBookAuthor() {
	return this->bookAuthor;
}

void Book::changeBookStatus(bool stat) {
	this->checkedOutStatus = stat;
}

bool Book::isCheckedOut() {
	return checkedOutStatus;
}

void Book::setDateCheckedOut(string newDateCheckedOut) {
	this->dateCheckedOut = newDateCheckedOut;
  datePreviousCheckedOut.push_back(newDateCheckedOut);
}

string Book::getDateCheckedOut() {
	return this->dateCheckedOut;
}

void Book::setDateCheckedIn(string newDateCheckedIn) {
	this->dateCheckedIn = newDateCheckedIn;
}

string Book::getDateCheckedIn() {
	return this->dateCheckedIn;
}

void Book::setNameCheckedOut(string newNameCheckedOut) {
	this->nameCheckedOut = newNameCheckedOut;
  namePreviousCheckedOut.push_back(newNameCheckedOut);
}

string Book::getNameCheckedOut() {
	return this->nameCheckedOut;
}

void Book::changePendingStatus(bool p) {
	this->pendingStatus = p;
}

bool Book::isPending() {
	return pendingStatus;
}

void Book::setNamePending(string newNamePending) {
	this->namePending = newNamePending;
}

string Book::getNamePending() {
	return namePending;
}

void Book::setBookType(string newBookType) {
	this->bookType = newBookType;
}

string Book::getBookType() {
	return this->bookType;
}

void Book::setDueDate(string newBookDueDate) {
	this->bookDueDate = newBookDueDate;
}

string Book::getDueDate() {
	return this->bookType;
}
