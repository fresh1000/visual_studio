#include"Book.h"

int main() {
	//create 4 object Person 
	Person person1("Fres Fruis", 12343, "gmais@lsd");
	Person person2("Lucas Well", 54334, "zxc@cxc");
	Person person3("Fred Dalo", 43534, "gmaixcl@cxc");
	Person person4("Cook Smit", 76321, "gmai@lsdd");

	//Print all information
	cout << "Person 1 :\nFull name: " << person1.getFullName() << endl;
	cout << "Identifier: " << person1.getIdentifier() << endl;
	cout << "Email: " << person1.getEmail() << endl;

	cout << "\nPerson 2 :\nFull name: " << person2.getFullName() << endl;
	cout << "Identifier: " << person2.getIdentifier() << endl;
	cout << "Email: " << person2.getEmail() << endl;

	cout << "\nPerson 3 :\nFull name: " << person3.getFullName() << endl;
	cout << "Identifier: " << person3.getIdentifier() << endl;
	cout << "Email: " << person3.getEmail() << endl;

	cout << "\nPerson 4 :\nFull name: " << person4.getFullName() << endl;
	cout << "Identifier: " << person4.getIdentifier() << endl;
	cout << "Email: " << person4.getEmail() << endl;

	//set new name, email, id
	person1.setFullName("Sam Winch");
	person2.setIdentifier(32333);
	person3.setEmail("example@mail");
	person4.setFullName("Bill Gates");

	//print result after new set
	cout << "\nResult after use setters\n" << endl;

	cout << "Person 1 :\nFull name: " << person1.getFullName() << endl;
	cout << "Identifier: " << person1.getIdentifier() << endl;
	cout << "Email: " << person1.getEmail() << endl;

	cout << "\nPerson 2 :\nFull name: " << person2.getFullName() << endl;
	cout << "Identifier: " << person2.getIdentifier() << endl;
	cout << "Email: " << person2.getEmail() << endl;

	cout << "\nPerson 3 :\nFull name: " << person3.getFullName() << endl;
	cout << "Identifier: " << person3.getIdentifier() << endl;
	cout << "Email: " << person3.getEmail() << endl;

	cout << "\nPerson 4 :\nFull name: " << person4.getFullName() << endl;
	cout << "Identifier: " << person4.getIdentifier() << endl;
	cout << "Email: " << person4.getEmail() << endl;

	//create 6 object book
	Book book1("Book1", "Author1");
	Book book2("Book2", "Author2", person1);
	Book book3("Book3", "Author3", person2);
	Book book4("Book4", "Author4", person3);
	Book book5("Book5", "Author5");
	Book book6("Book6", "Author6", person4);
	
	//print all info books if checked status true print person name
	cout << "\nTitle: " << book1.getTitle() << endl;
	cout << "Author: " << book1.getAuthor() << endl;
	cout << "Checked status: " << book1.getCheckedStatus() << endl;
	if (book1.getCheckedStatus()) {
		cout << "Person: " << book2.getBorrowerFullName() << endl;
	}

	cout << "\nTitle: " << book2.getTitle() << endl;
	cout << "Author: " << book2.getAuthor() << endl;
	cout << "Checked status: " << book2.getCheckedStatus() << endl;
	if (book2.getCheckedStatus()) {
		cout << "Person: " << book2.getBorrowerFullName() << endl;
	}

	cout << "\nTitle: " << book3.getTitle() << endl;
	cout << "Author: " << book3.getAuthor() << endl;
	cout << "Checked status: " << book3.getCheckedStatus() << endl;
	if (book3.getCheckedStatus()) {
		cout << "Person: " << book3.getBorrowerFullName() << endl;
	}

	cout << "\nTitle: " << book4.getTitle() << endl;
	cout << "Author: " << book4.getAuthor() << endl;
	cout << "Checked status: " << book4.getCheckedStatus() << endl;
	if (book4.getCheckedStatus()) {
		cout << "Person: " << book4.getBorrowerFullName() << endl;
	}

	cout << "\nTitle: " << book5.getTitle() << endl;
	cout << "Author: " << book5.getAuthor() << endl;
	cout << "Checked status: " << book5.getCheckedStatus() << endl;
	if (book5.getCheckedStatus()) {
		cout << "Person: " << book5.getBorrowerFullName() << endl;
	}

	cout << "\nTitle: " << book6.getTitle() << endl;
	cout << "Author: " << book6.getAuthor() << endl;
	cout << "Checked status: " << book6.getCheckedStatus() << endl;
	if (book6.getCheckedStatus()) {
		cout << "Person: " << book6.getBorrowerFullName() << endl;
	}


	//set borrower and checked in, checked out
	book1.setBorrower(person1);
	book1.checkedIn();

	book2.checkedOut();

	book5.setBorrower(person3);
	book5.checkedIn();

	book6.checkedOut();
	
	//print after new set
	cout << "\n Books after checked in and checked out \n";

	cout << "\nTitle: " << book1.getTitle() << endl;
	cout << "Author: " << book1.getAuthor() << endl;
	cout << "Checked status: " << book1.getCheckedStatus() << endl;
	if (book1.getCheckedStatus()) {
		cout << "Person: " << book2.getBorrowerFullName() << endl;
	}

	cout << "\nTitle: " << book2.getTitle() << endl;
	cout << "Author: " << book2.getAuthor() << endl;
	cout << "Checked status: " << book2.getCheckedStatus() << endl;
	if (book2.getCheckedStatus()) {
		cout << "Person: " << book2.getBorrowerFullName() << endl;
	}

	cout << "\nTitle: " << book3.getTitle() << endl;
	cout << "Author: " << book3.getAuthor() << endl;
	cout << "Checked status: " << book3.getCheckedStatus() << endl;
	if (book3.getCheckedStatus()) {
		cout << "Person: " << book3.getBorrowerFullName() << endl;
	}

	cout << "\nTitle: " << book4.getTitle() << endl;
	cout << "Author: " << book4.getAuthor() << endl;
	cout << "Checked status: " << book4.getCheckedStatus() << endl;
	if (book4.getCheckedStatus()) {
		cout << "Person: " << book4.getBorrowerFullName() << endl;
	}

	cout << "\nTitle: " << book5.getTitle() << endl;
	cout << "Author: " << book5.getAuthor() << endl;
	cout << "Checked status: " << book5.getCheckedStatus() << endl;
	if (book5.getCheckedStatus()) {
		cout << "Person: " << book5.getBorrowerFullName() << endl;
	}

	cout << "\nTitle: " << book6.getTitle() << endl;
	cout << "Author: " << book6.getAuthor() << endl;
	cout << "Checked status: " << book6.getCheckedStatus() << endl;
	if (book6.getCheckedStatus()) {
		cout << "Person: " << book6.getBorrowerFullName() << endl;
	}

	system("pause");
	return 0;
}