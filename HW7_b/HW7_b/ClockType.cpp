#include"ClockType.h"

ClockType::ClockType() {
	this->hrs = 0;
	this->mins = 0;
	this->secs = 0;
}

ClockType::ClockType(int hrs, int mins, int  secs) {
	this->hrs = hrs;
	this->mins = mins;
	this->secs = secs;
}

ClockType::~ClockType(){}

void ClockType::setTime(int hrs, int mins, int  secs) {
	this->hrs = hrs;
	this->mins = mins;
	this->secs = secs;
}


void ClockType::areTimesEquals(ClockType time1) {
	if (time1.printTime() == printTime()) {
		cout << "The times of my clock and your clock equal." << endl;
	}else
		cout << "The times of my clock and your clock are not equal." << endl;
}

string ClockType::printTime() {
	string time;
	if (this->hrs / 10 == 0) {
		time += "0" + to_string(this->hrs);
	}else {
		time += to_string(this->hrs);
	}
	time += ":";

	if (this->mins / 10 == 0) {
		time += "0" + to_string(this->mins);
	}
	else {
		time += to_string(this->mins);
	}
	time += ":";
	if (this->secs / 10 == 0) {
		time += "0" + to_string(this->secs);
	}
	else {
		time += to_string(this->secs);
	}

	return time;
}

void ClockType::incrementHours() {
	this->hrs++;
}

void ClockType::incrementMinutes() {
	this->mins++;
}

void ClockType::incrementSeconds() {
	this->secs++;
}