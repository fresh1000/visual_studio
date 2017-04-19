#include<iostream>
#include<string>
#include <regex>
#include"Circle.h"
#include"Rectangle.h"

using namespace std;

//function validate
double validate_input() {
	string line = "";
	double input = -1;
	bool validate = false;
	do {
		//read form console
		getline(cin, line);
		if (line != "0" && line.length() > 0 && regex_match(line, regex("[0-9]{1,}(\\.[0-9]*)?"))) {
			input = stod(line);
			if (input > 0) {
				validate = true;
			}
		}
		else {
			//reset buffer's state to good
			cin.clear();
			//and empty it
			cout << "Please ,enter some decimal value X such that X > 0" << endl;
		}
	} while (!validate);

	return (input);

}
int main() {
	//variables for save input fron user
	double area = 0;
	double centerX = 0;
	double centerY = 0;
	double radius = 0;
	double width = 0;
	double length = 0;

	cout << "Please enter the x coordinate of the circle's center: ";
	centerX = validate_input();

	cout << "Please enter the y coordinate of the circle's center: ";
	centerY = validate_input();

	cout << "Please enter the radius of the circle: ";
	radius = validate_input();

	//create object type Circle
	Circle circle(centerX, centerY, radius);
	//cout << "The area of the circle is " << circle.getArea() << endl;
	printf("The area of the circle is %.2f\n", circle.getArea());
	printf("\n");

	cout << "Please enter the length of the rectangle: ";
	length = validate_input();

	cout << "Please enter the width of the rectangle: ";
	width = validate_input();
	//create object type Rectangle
	Rectangle rectangle(width, length);
	printf("The area of the %.2f X %.2f rectangle is %.2f \n", rectangle.getLength(), rectangle.getWidth(), rectangle.getArea());
	system("pause");
	return 0;
}