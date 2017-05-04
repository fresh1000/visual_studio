#include"ClockType.h"

using namespace std;

int main() {
	ClockType myClock;
	ClockType yourClock;
	ClockType myOtherClock(0, 0, 0);

	myClock.setTime(3, 30, 0);
	yourClock.setTime(10, 0, 15);

	cout << "The times on my clock is: " << myClock.printTime() << "." << endl;
	cout << "The times on your clock is: " << yourClock.printTime() << "." << endl;
	myClock.areTimesEquals(yourClock);
	cout << "The times on my other clock is: " << myOtherClock.printTime() << "." << endl;
	cout << "I am going to add 1 minute and 1 second to my other clock." << endl;
	myOtherClock.incrementMinutes();
	myOtherClock.incrementSeconds();
	cout << "The times on my other clock is: " << myOtherClock.printTime() << "." << endl;

	system("pause");
	return 0;
}