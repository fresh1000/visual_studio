#include<iostream>
#include<string>

using namespace std;

class ClockType {
private:
	int hrs;
	int	mins;
	int secs;
public:
	ClockType();
	ClockType(int, int, int);
	~ClockType();
	void setTime(int, int, int);
	string printTime();
	void incrementSeconds();
	void incrementMinutes();
	void incrementHours();
	void areTimesEquals(ClockType);
};