#include<iostream>
using namespace std;

class Inventory {
private:
	int itemNumber;
	int quantity;
	double cost;
	double totalCost;
public:
	Inventory();
	Inventory(int itemNumber, int quantity, double cost);
	void setTotalCost();
	void setItemNumber(int itemNumber);
	void setQuantity(int quantity);
	void setCost(double cost);
	int getItemNumber();
	int getQuantity();
	double getCost();
	double getTotalCost();
};

Inventory::Inventory() {
	this->itemNumber = 0;
	this->quantity = 0;
	this->cost = 0;
	this->totalCost = 0;
}

Inventory::Inventory(int itemNumber, int quantity, double cost) {
	setItemNumber(itemNumber);
	setQuantity(quantity);
	setCost(cost);
	setTotalCost();
}

double Inventory::getCost() {
	return this->cost;
}

int Inventory::getItemNumber() {
	return this->itemNumber;
}

int Inventory::getQuantity() {
	return this->quantity;
}

void Inventory::setItemNumber(int itemNumber) {
	this->itemNumber = itemNumber;
}

void Inventory::setQuantity(int quantity) {
	this->quantity = quantity;
}

void Inventory::setCost(double cost) {
	this->cost = cost;
}

void Inventory::setTotalCost() {
	this->totalCost = this->cost * this->quantity;
}

double Inventory::getTotalCost() {
	return totalCost;
}

int main() {
	int quantity;
	int itemNumber;
	double cost;
	do{
		cout << "Enter item number(greater than 0): ";
		cin >> itemNumber;
		cout << "Enter quantity(greater than 0): ";
		cin >> quantity;
		cout << "Enter cost(greater than 0): ";
		cin >> cost;
		if (itemNumber <= 0 || quantity <= 0 || cost <= 0) {
			cout << "Invalid input!" << endl;
		}
	} while (itemNumber <= 0 || quantity <= 0 || cost <= 0);
	Inventory in(itemNumber, quantity, cost);
	cout << "Item number:" << in.getItemNumber() << endl;
	cout << "Quantity:" << in.getQuantity() << endl;
	cout << "Cost:" << in.getCost() << endl;
	cout <<"Total cost:"<< in.getTotalCost() << endl;
	system("pause");
	return 0;
}