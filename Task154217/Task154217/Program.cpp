#include<iostream>
using namespace std;

class Circle {
protected:
	double radius;
	double area;
	double circumference;
public:
	Circle(){}//default constructor 
	Circle(double radius) {
		this->radius = radius;
		areaCalc();
		circumferenceCalc();
	}
	void setRadius(double radius) {
		this->radius = radius;
	}
	//calculate area circle
	void areaCalc() {
		this->area = radius * 3.14 * radius;
	}
	//calculate circumference circle
	void circumferenceCalc() {
		this->circumference = 2 * 3.14 * radius;
	}
	void printArea() {
		cout <<"Area circle: "<< this->area << endl;
	}
	void printRadius() {
		cout <<"Radius circle: " << this->radius << endl;
	}
	void printCircumference() {
		cout <<"Circumference circle: "<< this->circumference << endl;
	}
};
//class cylinder inheritance class circle
class Cylinder : public Circle {
private:
	double height;
	double volume;
	double areaCylinder;
public:
	Cylinder(double radius,double height): Circle(radius) {
		this->radius = radius;
		this->height = height;
		volumeCalc();
		areaCylinderCalc();
	}
	//calculate volume cylinder
	void volumeCalc() {
		this->volume = height * radius * 3.14 * radius;
	}
	//calculate area cylinder
	void areaCylinderCalc() {
		areaCylinder = 2 * 3.14 * radius * height;
	}
	void printVolume() {
		cout << "Cylinder volume: " << this->volume << endl;
	}
	void printAreaCylinder() {
		cout << "Cylinder area: " << this->areaCylinder << endl;
	}

};

void createCircle();
void createCylinder();
void arrayObject();

int main() {
	int a;//variables for your choice
	//main menu
	cout << "1.Create object circle and calculate area,circumference" << endl;
	cout << "2.Create object cylinder and calculate vulume, area" << endl;
	cout << "3.Create array objects circle with radius(1-10) and calculate area for all object" << endl;
	cout << "Choice function: ";
	//invalid input choice
	do{
		cin >> a;
		if (a <= 0 || a > 3) {
			cout << "Invalid choice!" << endl;
			cout << "Choice function: ";
		}
	} while (a <= 0 || a > 3);
	//switch for choice 
	switch (a)
	{
	case 1:
		createCircle();//call function create circle
		break;
	case 2:
		createCylinder();//call function create cylinder
		break;
	case 3:
		arrayObject();//call function create array objects
		break;
	default:
		break;
	}
	system("pause");
	return 0;
}

//function create circle object
void createCircle() {
	double radius;
	bool invalid = true;
	cout << "Enter radius circle: ";
	//while invalid input radius
	while (invalid) {
		cin >> radius;
		if (radius > 0) {
			invalid = false;
		}
	else 
		cout << "Invalid radius!" << endl;
	}
	Circle circle(radius);//create object circle with input radius
	circle.printRadius();//print radius
	circle.printArea();//print area
	circle.printCircumference();//print circumference
	
}
//function create cylinder object
void createCylinder() {
	double radius;
	double height;
	bool invalidRadius = true;
	bool invalidHeight = true;
	cout << "Enter radius cylinder: ";
	//while invalid input radius
	while (invalidRadius) {
		cin >> radius;
		if (radius > 0) {
			invalidRadius = false;
		}
		else
			cout << "Invalid radius cylinder!" << endl;
	}

	cout << "Enter height cylinder: ";
	//while invalid input height
	while (invalidHeight) {
		cin >> height;
		if (height > 0) {
			invalidHeight = false;
		}
		else
			cout << "Invalid height cylinder!" << endl;
	}

	Cylinder cylinder(radius, height);//create object cylinder
	cylinder.printAreaCylinder();//print area
	cylinder.printVolume();//print volume

}
//function create array objects type circle
void arrayObject() {
	Circle circle[10];  //initial array objects
	for (int i = 0; i < 10; i++){
		circle[i].setRadius(i+1); //set radius i + 1
		circle[i].printRadius();  //print radius
		circle[i].areaCalc();     //calculate area
		circle[i].printArea();    //print area
		cout << endl;             //print empty line
	}
}