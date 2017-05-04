#include"Date.h"

Date::Date() {
	this->month = 0;
	this->day = 0;
	this->year = 0;
}

Date::Date(int month,int day, int year) {
	this->month = month;
	this->day = day;
	this->year = year;
}

Date::~Date() {}

void Date::setDate(int month, int day, int year) {
	this->month = month;
	this->day = day;
	this->year = year;
}

void Date::addDays(int days) {
	if (this->month == 12) {
		if (((this->day + days) / 30) > 0) {
			this->day = this->day + days;
			this->month = this->day / 30;
			this->day %= 30;
			this->year++;
		}else {
			this->day = (this->day + days) % 30;
		}

	}else {		
		if (((this->day + days) / 30) > 0) {
			this->day = this->day + days;
			this->month += this->day / 30;
			this->day %= 30;
		}else {
			this->day = (this->day + days) % 30;
		}
	}
}

void Date::displayDate() {
	cout << this->month << "/" << this->day << "/" << this->year << endl;
}