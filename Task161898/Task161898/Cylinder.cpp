#include<iostream>
#include"Cylinder.h"

using namespace std;

Cylinder::Cylinder() {
	setCenter(1, 1);
	setRadius(1);
}

Cylinder::Cylinder(double x, double y, double radius, double height) {
	setCenter(x, y);
	setRadius(radius);
	this->height = height;
}

double Cylinder::getHeight() {
	return this->height;
}

void Cylinder::setHeight(double height) {
	this->height = height;
}

double Cylinder::area() {
	double area;
	area = 2 * 3.14 * getRadius() * (height + getRadius());
	return area;
}

double Cylinder::volume() {
	double volume;
	volume = 3.14 * getRadius() * getRadius() * height;
	return volume;
}

void Cylinder::print() const{
	Circle::print();
	cout << "Height cylinder: " << height << endl;
}