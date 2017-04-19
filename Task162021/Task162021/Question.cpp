#include<iostream>
using namespace std;

int main() {
	const double employerContribution = 0.02;
	double contributionCarlos, grossPay, annualContribution;
	cout << "Enter contribution Carlos(0.01 - 0.99):";
	cin >> contributionCarlos;
	cout << "Enter gross pay: $";
	cin >> grossPay;
	annualContribution = 24 * (grossPay * employerContribution + grossPay * contributionCarlos);
	cout << "Total annual contribution: $" << annualContribution << endl;
	system("pause");
	return 0;
}