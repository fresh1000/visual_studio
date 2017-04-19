#include<iostream>
#include <string>
using namespace std;

class Motorcycle {
private:
	string model;
	int year;
	float speed;
public:
	Motorcycle();
	Motorcycle(string, int);
	int getYear();
	string getModel();
	float getSpeed();
	void setYear(int);
	void setModel(string);
	void setSpeed(float);
	void accelerate();
	void brake();
};