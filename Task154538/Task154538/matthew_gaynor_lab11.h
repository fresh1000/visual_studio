#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <cstdlib>

using namespace std;

class employeeType{
private:
	int id;
	string first;
	string last;
	char gender;
	double payrate;
	string jobRole;
	int years;
public:
	void getData(ifstream& inFile, employeeType list[], int& listSize);
	void printList(const employeeType list[], int listSize);
	void printOne(employeeType one);
	void hireOne(employeeType list[], int& listsize);
	void selectionSort(employeeType list[], int length);
	void cutBacks(employeeType list[], int length);
	int seqSearch(employeeType list[], int listLength, int searchID);
	void fired(employeeType list[], int length);
	employeeType getOne(ifstream& dataIn);
	employeeType userInputOne();

};