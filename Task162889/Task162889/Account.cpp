#include"Account.h"
#include<iostream>
using namespace std;

Account::Account() {
	this->balance = 0;
	this->rate = 0;
}

Account::Account(float balance, float rate) {
	this->balance = balance;
	this->rate = rate;
}

float Account::getBalance() {
	return this->balance;
}

float Account::getRate() {
	return this->rate;
}

void Account::Deposit(float amount) {
	this->balance = this->balance + amount;
}

void Account::Withdrawal(float amount) {
	if (this->balance - amount < 0) {
		cout << "Error!Low balance!" << endl;
	}else
		this->balance = this->balance - amount;
}

void Account::AccrueInterest(int period) {
	this->rate = ((float)period / (float)12.0) * this->rate;
	this->balance =this->balance + this->balance * rate;
}