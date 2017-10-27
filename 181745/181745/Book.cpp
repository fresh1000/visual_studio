#include"Book.h"
//constructor
Book::Book(string title, string author, Person &person) {
	this->title = title;
	this->author = author;
	this->borrower = &person;
	this->checkedStatus = true;
}
//constructor
Book::Book(string title, string author) {
	this->title = title;
	this->author = author;
	this->checkedStatus = false;
}
//set author
void Book::setAuthor(string author) {
	this->author = author;
}
//set title
void Book::setTitle(string title) {
	this->title = title;
}
//set borrower
void Book::setBorrower(Person &person) {
	this->borrower = &person;
}
//set checked status
void Book::setCheckedStatus(bool status) {
	this->checkedStatus = status;
}
//get author
string Book::getAuthor() {
	return this->author;
}
//get title
string Book::getTitle() {
	return this->title;
}
//get checked status
bool Book::getCheckedStatus() {
	return this->checkedStatus;
}
//get borrower
string Book::getBorrowerFullName() {
	string p = borrower->getFullName();
	return p;
}
//checked out
void Book::checkedOut() {
	if (this->checkedStatus) {
		this->checkedStatus = false;
	}
}
//checked in
void Book::checkedIn() {
	if (!this->checkedStatus) {
		this->checkedStatus = true;
	}
}

