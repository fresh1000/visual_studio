#include"Rectangle.h"

//constructor
Rectangle::Rectangle(double width, double length) {
	this->width = width;
	this->length = length;
	calcArea();
}
//return get area from base class
double Rectangle::getArea() {
	return BasicShape::getArea();
}

double Rectangle::getLength() {
	return this->length;
}

double Rectangle::getWidth() {
	return this->width;
}

void Rectangle::calcArea() {
	double area = length * width;
	setArea(area);//set area rectangle
}
