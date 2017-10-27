#include<iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;


int main() {
	int popTownA;//population town A
	int popTownB;//population town B
	double growthRateA;// rate town A
	double growthRateB;//rate town B
	cout << "Enter the initial population for town A:";
	cin >> popTownA;//read population town A
	cout << "Enter the initial population for town B:";
	cin >> popTownB;//read population town A
	
	do{
		srand(time(NULL));
		growthRateA = (double)(rand() % 8 + 2) / 100;//generate random from 0.02 to 0.1 
		growthRateB = (double)(rand() % 8 + 2) / 100;//generate random from 0.02 to 0.1
	} while (growthRateA <= growthRateB);

	cout << "Growth rate for town A is " << growthRateA * 100 << endl;//print rate A in "%"
	cout << "Growth rate for town B is " << growthRateB * 100 << endl;//print rate B in "%"

	int year = 2017;
	//if population town B greater that A
	if (popTownA < popTownB) {
		printf("%15s%15s%15s\n", "Year", "Town A", "Town B");
		while (popTownA < popTownB) {
			year++;
			popTownA += popTownA * growthRateA;//add population A
			popTownB += popTownB * growthRateB;//add population B
			printf("%15d%15d%15d\n", year, popTownA, popTownB);//print
		}
	}else {
		cout << "Town A has already more  people that town B\n" << endl;
	}

	cout << "Population A will be greater or equal of the population B in " << year << endl;
	system("pause");
	return 0;
}