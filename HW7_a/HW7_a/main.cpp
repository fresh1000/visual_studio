#include"Date.h"

int main() {
	Date today(2, 5, 2017);
	Date payDay;
	
	int monthPay;
	int dayPay;
	int yearPay;
	
	cout << "Enter month pay:";
	cin >> monthPay;
	cout << "Enter day pay:";
	cin >> dayPay;
	cout << "Enter year pay:";
	cin >> yearPay;
	payDay.setDate(monthPay, dayPay, yearPay);
	
	cout << "Today date:";
	today.displayDate();
	
	cout << "Date of pay date:";
	payDay.displayDate();

	payDay.addDays(7);
	cout << "Date of pay date after add 7 days:";
	payDay.displayDate();

	system("pause");
	return 0;
}