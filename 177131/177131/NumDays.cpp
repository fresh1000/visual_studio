#include"NumDays.h"

//constructor
NumDays::NumDays(int hours) {
	this->workHours = hours;//set work hours
	this->numDays = (double)(hours) / 8.0;//set number days
}

//get workHours
int NumDays::getWorkHours() {
	return this->workHours;
}

//get number days
double NumDays::getNumDays() {
	return this->numDays;
}

//set number days
void NumDays::setNumDays(double numDays) {
	this->numDays = numDays;
}

//set workHours
void NumDays::setWorkHours(int hours) {
	this->workHours = hours;
}

//addition operator +
NumDays NumDays::operator+(NumDays &objNumDays){
	NumDays objnumDays1(0);//create object NumDays
	objnumDays1.setWorkHours(this->workHours + objNumDays.getWorkHours());//set addition hours
	objnumDays1.setNumDays(this->numDays + objNumDays.getNumDays());//set addition days
	return objnumDays1;//return object
}

//subtraction operator -
NumDays NumDays::operator-(NumDays &objNumDays){
	NumDays objNumDays1(0);//create object NumDays
	objNumDays1.setWorkHours(this->workHours - objNumDays.getWorkHours());//set subtraction hours
	objNumDays1.setNumDays(this->numDays - objNumDays.getNumDays());//set subtraction days
	return objNumDays1;//return object
}

//postfix increment operators ++
NumDays NumDays::operator++(int) {
	return NumDays(this->workHours++);//return NumDays object with postfix increment
}

//postfix decrement operators --
NumDays NumDays::operator--(int) {
	return NumDays(this->workHours--);//return NumDays object with postfix decrement
}

//prefix increment operators ++
NumDays NumDays::operator++() {
	return NumDays(++this->workHours);//return NumDays object with prefix increment
}
//prefix decrement operators --
NumDays NumDays::operator--() {
	return NumDays(--this->workHours);//return NumDays object with prefix decrement
}