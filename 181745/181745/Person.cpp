#include"Person.h"

Person::Person(string name, int id, string email) {
	this->fullName = name;
	this->identifier = id;
	this->email = email;
}

void Person::setFullName(string name) {
	this->fullName = name;
}

void Person::setIdentifier(int id) {
	this->identifier = id;
}

void Person::setEmail(string email) {
	this->email = email;
}

string Person::getFullName() {
	return this->fullName;
}

string Person::getEmail() {
	return this->email;
}

int Person::getIdentifier() {
	return this->identifier;
}