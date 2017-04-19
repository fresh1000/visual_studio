#include<iostream>
#include"Cylinder.h"
using namespace std;

int main() {
	Cylinder newCylinder;
	newCylinder.setCenter(12.2, 17.5);
	newCylinder.setRadius(50.3);
	newCylinder.setHeight(40.2);
	newCylinder.print();
	cout << "Area cylinder: " << newCylinder.area() << endl;
	cout << "Volume cylinder: " << newCylinder.volume() << endl;
	system("pause");
	return 0;
}