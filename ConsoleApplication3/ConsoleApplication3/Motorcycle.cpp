#include"Motorcycle.h"

Motorcycle::Motorcycle() {
	this->model = "";
	this->year = 0;
	this->speed = 0;
}

Motorcycle::Motorcycle(string model, int year) {
	this->model = model;
	this->speed = 0;
	if (year < 0) {
		cout << "Invalid year!!" << endl;
		cout << "Set year to 0" << endl;
		this->year = 0;
	}else
		this->year = year;
}

string Motorcycle::getModel() {
	return this->model;
}

int Motorcycle::getYear() {
	return this->year;
}

float Motorcycle::getSpeed() {
	return this->speed;
}

void Motorcycle::setYear(int year) {
	if (year < 0) {
		cout << "Invalid year!!" << endl;
	}else
		this->year = year;
}

void Motorcycle::setSpeed(float speed) {
	if (speed < 0) {
		cout << "Invalid speed!!" << endl;
	}else
		this->speed = speed;
}

void Motorcycle::setModel(string model) {
	this->model = model;
}

void Motorcycle::accelerate() {
	this->speed += 15;
}

void Motorcycle::brake() {
	if (this->speed >= 10) {
		this->speed -= 10;
	}else
		this->speed = 0;
}