#include<iostream>
#include"ATM.h"

using namespace std;
ATM::ATM(double balance) {
	this->balance = balance;
	this->balanceForInterest = balance;//balance for interest(balance = balanceForInterest)
}
double ATM::getBalance() {
	return this->balance;
}
double ATM::getBalanceForInterest() {
	return this->balanceForInterest;
}

void ATM::withdrawn() {

	double withdrawn;
	cout << "Enter amount: ";
	cin >> withdrawn;
	//if withdrawn is negative
	if (withdrawn < 0) {
		cout << "Negative entries are not allowed" << endl;
		system("pause");
		exit(0);
	}
	//if balance < withdrawn
	if (this->balance - withdrawn < 0){
		cout << "Insufficient Funds" << endl;
		system("pause");
		exit(0);
	}
	else
		this->balance = this->balance - withdrawn; // if balance > withdrawn and withdrawn positive
	cout << "Balance now: ";
	cout << "$" << this->balance << endl;
}

void ATM::deposit() {
	double deposit;
	cout << "Enter amount: ";
	cin >> deposit;
	this->balance = this->balance + deposit;//balance increased by deposit
	cout << "Balance now: ";
	cout << "$" << this->balance << endl;
}

void ATM::interest() {
	this->balance = this->balance + this->balanceForInterest * .01;//interest starting balance(balanceForInterest)
	cout << "Balance after interest:" << endl;
	cout << "$" << this->balance << endl;
}

int main() {
	ATM atm(1000);//balance change(set your starting balance)
	int choice = 0;
	while (choice != 5) {// while your choise != 5 program was in loop
		cout << "\n1.Account Balance" << endl;
		cout << "2.Amount withdrawn " << endl;
		cout << "3.Amount deposit   " << endl;
		cout << "4.Interest Accrued " << endl;
		cout << "5.Exit             " << endl;
		cin >> choice;//input your choice 1-5
		switch (choice)	{//program menu
		case 1:
			cout << "Account Balance" << endl;
			cout << "$" << atm.getBalance() << endl;// starting balance
			break;
		case 2:
			cout << "Amount withdrawn " << endl;
			atm.withdrawn();// call method withdrawn
			break;
		case 3:
			cout << "Amount deposit   " << endl;
			atm.deposit();// call method deposit
			break;
		case 4:
			cout << "Interest Accrued " << endl;
			atm.interest();// call method interest
			break;
		default:
			break;
		}
	}
}