#include<iostream>

using namespace std;

int main() {
	int a, b, temp;
	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;
	cout << "Swap" << endl;
	temp = a;
	a = b;
	b = temp;
	cout << "a=" << a << " b=" << b << endl;
	system("pause");
	return 0;
}