#include<iostream>
using namespace std;

void calcMPG(int , double , double &);

int main() {
	int milesDriven;
	double gallonsUsed;
	double milesPerGallon;

	cout << "Enter the miles drive: ";
	cin >> milesDriven;
	cout << "Enter the gallons used: ";
	cin >> gallonsUsed;

	calcMPG(milesDriven, gallonsUsed, milesPerGallon);

	cout << "Miles driven: " << milesDriven <<endl
		<< "Gallons used: " << gallonsUsed << endl
		<< "MPG: " << milesPerGallon << endl << endl;

	system("pause");
	return 0;
}

void calcMPG(int milesDriven, double gallonsUsed, double &milesPerGallon) {
	milesPerGallon = milesDriven / gallonsUsed;
}