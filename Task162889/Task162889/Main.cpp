#include<iostream>
#include"Account.h"
using namespace std;

int main() {
	float initialBalance, interestRate;
	bool loop = true;
	cout << "Enter initial balance: ";
	cin >> initialBalance;
	cout << "Enter interest rate(%): ";
	cin >> interestRate;
	interestRate = interestRate / 100;
	Account a(initialBalance, interestRate);
	while (loop) {
		int choice;
		cout << "Main menu" << endl;
		cout << "1.Print balance and interest rate." << endl;
		cout << "2.Deposit" << endl;
		cout << "3.Withdrawal" << endl;
		cout << "4.Period" << endl;
		cout << "5.Quit" << endl;
		cout << "Your choice:";
		cin >> choice;
		cout << endl;
		switch (choice) {
			case 1:
				cout << "Print balance and interest rate." << endl;
				cout << "Balance: $" << a.getBalance() << " Rate: " << a.getRate() * 100 << endl;
				cout << endl;
				break;
			case 2:
				float amount1;
				cout << "Deposit" << endl;
				cout << "Enter amount: $";
				cin >> amount1;
				cout << endl;
				a.Deposit(amount1);
				break;
			case 3:
				float amount;
				cout << "Withdrawal" << endl;
				cout << "Enter amount: $";
				cin >> amount;
				a.Withdrawal(amount);
				cout << endl;
				break;
			case 4:
				int period;
				cout << "Period" << endl;
				cout << "Enter period(month): ";
				cin >> period;
				a.AccrueInterest(period);
				cout << endl;
				break;
			case 5:
				cout << "Quit" << endl;
				loop = false;
				break;
			default:
				break;
		}
	}
	system("pause");
	return 0;
}