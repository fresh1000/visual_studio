#include<iostream>
#include"Inventory.h"
using namespace std;

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
	Inventory in(1, 10, 15);
	cout << in.getTotalCost();

	system("pause");
	return 0;
}