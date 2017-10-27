#include<iostream>
#include<string>
#include"Person.h"
using namespace std;

class Book {
private:
	string title;
	string author;
	bool checkedStatus;
	Person *borrower;
public:
	Book(string, string);
	Book(string, string, Person&);
	string getBorrowerFullName();
	string getTitle();
	string getAuthor();
	bool getCheckedStatus();
	void setTitle(string);
	void setAuthor(string);
	void setCheckedStatus(bool);
	void setBorrower(Person&);
	void checkedOut();
	void checkedIn();
};