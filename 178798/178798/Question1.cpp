#include <iostream>
#include <string>
using namespace std;
struct WorkShop
{
	string title;
	int capacity;
	double price;
};

WorkShop myWorkShop[4];

void initialize();
void listWS();
void registerWS(string);
void listSelectedWS(string);

int main()
{
	initialize();
	int choice;
	do {
		cout << "******** Main Menu ***********" << endl;
		cout << "1.  List all workshops" << endl;
		cout << "2.  Register workshop" << endl;
		cout << "3.  List details of selected workshop" << endl;
		cout << "4.  Exit" << endl;
		cout << "Enter choice:";
		cin >> choice;
		cin.clear();
		

		string titleReg = "";
		string titleList = "";
		switch (choice) {
			case 1:
				listWS();
				break;
			case 2:
				cout << "Enter title: ";
				cin.ignore();
				getline(cin, titleReg);
				registerWS(titleReg);
				break;
			case 3:
				cout << "Enter title: ";
				cin.ignore();
				getline(cin, titleList);
				listSelectedWS(titleList);
				break;
			default:
				break;
		}

	} while (choice != 4);
	system("pause");
	return 0;
}

void initialize() {
	myWorkShop[0].title = "Interactive Python 1";
	myWorkShop[0].capacity = 20;
	myWorkShop[0].price = 1000;
	myWorkShop[1].title = "Embedded C Programming";
	myWorkShop[1].capacity = 15;
	myWorkShop[1].price = 2000, 5;
	myWorkShop[2].title = "Interactive Python 2";
	myWorkShop[2].capacity = 20;
	myWorkShop[2].price = 1000;
	myWorkShop[3].title = "Python & Data Scientist";
	myWorkShop[3].capacity = 10;
	myWorkShop[3].price = 2000;
}

void listWS() {
	for (int i = 0; i < 4; i++) {
		cout << "Title: " << myWorkShop[i].title << endl;
		cout << "Capacity: " << myWorkShop[i].capacity << endl;
		cout << "Price: " << myWorkShop[i].price << endl;
	}
}

void registerWS(string title) {
	bool found = false;
	for (int i = 0; i < 4; i++) {
		
		if (myWorkShop[i].title == title && myWorkShop[i].capacity == 0 && !found) {
			cout << "Unsuccessful registration, no more vacancy!!" << endl;
			found = true;
		}
		
		if (myWorkShop[i].title == title && myWorkShop[i].capacity > 0 && !found) {
			cout << "Successfull registration!" << endl;
			myWorkShop[i].capacity--;
			found = true;
		}
	}
	if (!found) {
		cout << "Record not found!" << endl;
	}
}

void listSelectedWS(string title) {
	bool found = false;
	for (int i = 0; i < 4; i++) {
		if (myWorkShop[i].title == title) {
			cout << "Title: " << myWorkShop[i].title << endl;
			cout << "Capacity: " << myWorkShop[i].capacity << endl;
			cout << "Price: " << myWorkShop[i].price << endl;
			found = true;
		}
	}

	if (!found) {
		cout << "Record not found!" << endl;
	}
}