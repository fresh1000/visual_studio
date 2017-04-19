#include<iostream>
using namespace std;

int factorial(int n) {
	int factorial = 1;
	for (int counter = 1; counter <= n; counter++) {
		factorial = factorial * counter;
	}
	return factorial;
}

int main() {
	int k;
	cout << "Enter the Number :";
	cin >> k;
	cout << k << " Factorial Value Is " << factorial(k) << endl;
	system("pause");
	return 0;
}