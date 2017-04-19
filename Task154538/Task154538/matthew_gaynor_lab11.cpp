//Matthew Gaynor
//Lab 11
//Matthew Gaynor
//============

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include "matthew_gaynor_lab11.h"
using namespace std;

const int MAX_EMPLOYEES = 50;
///==============================================================
int main()
{
	int number;      // number of employees in the file
	char choice;
	employeeType list[MAX_EMPLOYEES];
	ifstream dataFile;
	employeeType her;
	employeeType him;

	dataFile.open("newEmployees.txt");
	if (!dataFile){
		cout << "\nError with input file!!\n\n";
		//system ("pause");        // must #include<cstdlib>
		return 1;
	}

	her.getData(dataFile, list, number);
	cout << "There were " << number << " employees input. \n\n\n";
	her.printList(list, number);

	her = her.userInputOne();
	her.printOne(her);

	system("pause");

	for (int i = 0; i<3; i++){
		her.hireOne(list, number);
	}
	cout << "\nAfter adding \n\n";
	her.printList(list, number);
	system("pause");

	her.selectionSort(list, number);
	cout << "\n\nAfter sorting: \n\n";
	her.printList(list, number);
	system("pause");

	her.cutBacks(list, number);
	cout << "\n\nAfter cutbacks: \n\n";
	her.printList(list, number);
	system("pause");

	her.fired(list, number);
	cout << "\n\nAfter layoffs: \n\n";
	her.printList(list, number);
	system("pause");

	return 0;
}                //end of main
//----------------------------------------------
void employeeType::getData(ifstream& inFile, employeeType list[], int& listSize){
	// Input employees from the input file
	employeeType item;
	listSize = 0;

	item = getOne(inFile);
	//cout <<"\n\nGot the first one!\n\n";

	while (inFile && listSize < MAX_EMPLOYEES)
	{
		// cout <<"\ntop of the looop to ya!\n";
		list[listSize] = item;
		listSize++;
		cout << "\n\nCurrent Size = " << listSize;

		item = getOne(inFile);
	}
	if (inFile)
		cout << "not all data items were input;array too small\n\n";
	inFile.close();
}
//----------------------------------------------
void employeeType::printList(const employeeType list[], int listSize){
	// Print out the list of employeeType structs
	int looper;

	for (looper = 0; looper < listSize; looper++)
	{
		printOne(list[looper]);
		cout << endl;
	}
}
//----------------------------------------------
employeeType employeeType::getOne(ifstream& dataIn){
	// Input one employee from the 	CS	 input file
	employeeType one;

	dataIn >> one.first >> one.last >> one.gender
		>> one.id >> one.payrate >> one.jobRole >> one.years;

	printOne(one);
	return one;
}
//----------------------------------------------
void employeeType::printOne(employeeType one){
	//print out one menuItemType struct
	cout << fixed << showpoint << setprecision(2);
	cout << "Emp ID Num: " << setw(12) << left << one.id;
	cout << "\nFull Name: " << one.first << " " << one.last;
	cout << "\nGender: " << one.gender;
	cout << "\nJob Role: " << setw(12) << left << one.jobRole;
	cout << "\nPay Rate:" << setw(12) << left << one.payrate;
	cout << "\nYrs Srvc: " << setw(12) << left << one.years;
	cout << "\n";
}
employeeType employeeType::userInputOne(){
	employeeType data;
	cout << "Enter employee ID: ";
	cin >> data.id;
	cout << "Enter employee first name: ";
	cin >> data.first;
	cout << "Enter employee last name: ";
	cin >> data.last;
	cout << "Enter employee gender: ";
	cin >> data.gender;
	cout << "Enter employee job role: ";
	cin >> data.jobRole;
	cout << "Enter employee pay rate: ";
	cin >> data.payrate;
	cout << "Enter employee years of service: ";
	cin >> data.years;
	return data;
}

void employeeType::hireOne(employeeType list[], int& listsize){
	int location;
	employeeType newRecord;
	cout << "\n\nEnter a location for the new employee: ";
	cin >> location;
	if (location >= 0 && location<listsize){
		newRecord = userInputOne();
		for (int i = listsize; i >= listsize; i--){
			list[i + 1] = list[i];
		}
		list[location] = newRecord;
		listsize++;
	}
	else cout << "\nWrong Location";
}

void employeeType::selectionSort(employeeType list[], int length)
{
	int index;
	int smallestIndex;
	int minIndex;
	employeeType temp;

	for (index = 0; index < length - 1; index++)
	{
		//Step a
		smallestIndex = index;

		for (minIndex = index + 1; minIndex < length; minIndex++)
		if (list[minIndex].payrate < list[smallestIndex].payrate)
			smallestIndex = minIndex;

		//Step b
		temp = list[smallestIndex];
		list[smallestIndex] = list[index];
		list[index] = temp;
	}
}
void employeeType::cutBacks(employeeType list[], int length){

	int index;
	for (index = 0; index < length; index++){
		list[index].payrate = list[index].payrate*0.90;

	}

}
void employeeType::fired(employeeType list[], int length){
	int id;
	int index;
	int location;

	cout << "\n\nEnter Employee ID to be fired: \n\n";
	cin >> id;
	location = seqSearch(list, length, id);
	if (location == -1){
		cout << id << "\t not found \n";
	}
	else {

		for (int index = location + 1; index<length; index++){
			list[index - 1] = list[index];
			--length;
		}

	}
}


int employeeType::seqSearch(employeeType list[], int listLength, int searchID)
{
	int loc = 0;
	bool found = false;

	loc = 0;

	while (loc < listLength && !found)
	if (list[loc].id == searchID)
		found = true;
	else
		loc++;

	if (found)
		return loc;
	else
		return -1;
}



///-----------------------------------------------
