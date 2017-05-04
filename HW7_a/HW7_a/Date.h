#include<iostream>

using namespace std;

class Date {
private:
	int month;
	int day;
	int year;
public:
	Date();
	Date(int, int, int);
	~Date();
	void setDate(int, int, int);
	void addDays(int);
	void displayDate();
};