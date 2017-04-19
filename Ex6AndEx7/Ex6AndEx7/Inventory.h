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
	Inventory(int itemNumber, int quantity,	double cost);
	void setTotalCost();
	void setItemNumber(int itemNumber);
	void setQuantity(int quantity);
	void setCost(double cost);
	int getItemNumber();
	int getQuantity();
	double getCost();
	double getTotalCost();
};