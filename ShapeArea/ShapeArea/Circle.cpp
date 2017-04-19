#include"Circle.h"
//constructor
Circle::Circle(double centerX, double centerY, double radius) {
	this->centerX = centerX;
	this->centerY = centerY;
	this->radius = radius;
	calcArea();
}
//return get area from base class
double Circle::getArea() {
	return BasicShape::getArea();
}

double Circle::getCenterX() {
	return this->centerX;
}

double Circle::getCenterY() {
	return this->centerY;
}

void Circle::calcArea() {
	double area = 3.14159 * radius * radius;
	setArea(area);//set area circle
}