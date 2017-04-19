#include<iostream>
#include"Gratuity.h"
using namespace std;

Tips::Tips(){
	this->taxRate = .065;
}
Tips::Tips(double tax) {
	if (tax <= 0) {
		cout << "Incorrect tax rate, tax set to default .065!" << endl;
		this->taxRate = .065;
	}else
	this->taxRate = tax;
}
double Tips::computeTip(double totalBillAmoun, double tipRate) {
	double meanCost;
	double tipAmount;
	meanCost = totalBillAmoun + totalBillAmoun * taxRate;
	tipAmount = meanCost * tipRate;
	return tipAmount;
}

int main() {
	double taxRate;
	cout << "Enter tax rate(bigger then 0 smaller 1):";
	cin >> taxRate;
	Tips tips(taxRate);
	double bill;
	double tip;
	do{
		cout << "Enter bill totals(bigger then 0):";
		cin >> bill;
		cout << "Enter tip rates(bigger then 0 smaller 0.6): ";
		cin >> tip;
		if (bill <= 0 || tip <= 0) {
			cout << "Invalid tip rates or bill totals!" << endl;
		}
	} while (bill <= 0 || tip <= 0);
	
	cout << "Tip amount: $"<< tips.computeTip(bill, tip) << endl;
	system("pause");
	return 0;
}