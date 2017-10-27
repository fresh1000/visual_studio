#include<iostream>
using namespace std;

int main() {

	float p;
	const float pi = 3.141593;
	float d,L,A,R;
	char choice;
	cout << "What metal(c or C for copper, a or A for aluminum and n or N for nickel)?";
	cin >> choice;

	switch (choice)
	{
	case 'c':
		p = 1.72 * 1e-8;
		break;
	case 'C':
		p = 1.72 * 1e-8;
		break;
	case 'a':
		p = 2.83 * 1e-8;
		break;
	case 'A':
		p = 2.83 * 1e-8;
		break;
	case 'n':
		p = 7.8 * 1e-8;
		break;
	case 'N':
		p = 7.8 * 1e-8;
		break;
	default:
		cout << "Error metal!" << endl;
		return 0;
		break;
	}

	cout << "Enter length in cm:";
	cin >> L;
	cout << "Enter diameter in mm:";
	cin >> d;
	L = L / 100;
	A = (pi * d * d) / 4;
	A = A * 1e-6;
	R = p * L / A;
	cout << "R:" << R << endl;
	system("pause");
	return 0;
}