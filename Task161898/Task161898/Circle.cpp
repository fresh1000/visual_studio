#include<iostream>
#include"Circle.h"

using namespace std;

Circle::Circle() {
	this->x = 1;
	this->y = 1;
	this->radius = 1;
}

Circle::Circle(double x, double y, double radius) {
	this->x = x;
	this->y = y;
	this->radius = radius;
}

void Circle::setRadius(double radius) {
	this->radius = radius;
}

void Circle::setCenter(double x, double y) {
	this->x = x;
	this->y = y;
}

double Circle::getRadius() {
	return this->radius;
}

void Circle::getCenter(double& x, double& y) {
	x = this->x;
	y = this->y;
}

double Circle::area() {
	double area;
	area = 3.14 * radius * radius;
	return area;
}

void Circle::print() const{
	cout << "Radius: " << this->radius << endl;
	cout << "Center(" << this->x << ", " << this->y << ")" << endl;
}
