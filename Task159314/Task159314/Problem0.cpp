/*CSC376 - Assignment 1 - Problem 4a
Author: OMEGA
Date:1/28/2017
*/
#include<iostream>
using namespace std;
char name[] = "OMEGA";

int par(int n) {
	if (n == 1) {
		return 3;
	}
	if (n == 2) {
		return 4;
	}
	else
		return par(n - 1) + par(n - 2);
}

int main() {
	int n;
	n = 5;
	cout << name << " shows P(" << n << ") has " << par(n) << " units" << endl;
	system("pause");
	return 0;
}