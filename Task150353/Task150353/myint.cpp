#include <iostream>
#include "myint.h"

using namespace std;

MyInt::MyInt(int x) {
	if (x < 0){
		this->x = 0;
	}else
	this->x = x;
}

MyInt::MyInt(char *str) {
	for (int i = 0; i < sizeof(str); i++){
		if (!isdigit(str[i])) {
			this->x = 0;
		}
		else 
		this->x =(int)str;
	}

}

MyInt::MyInt() {
	this->x = 0;
}

int MyInt::getX() {
	return this->x;
}

void MyInt::setX(int x) {
	this->x = x;
}

MyInt Fibonnaci(MyInt num);

int main()
{

	// demonstrate behavior of the two constructors and the << overload
	MyInt x(12345), y("9876543210123456789"), r1(-1000), r2 = "14H67", r3;
	char answer;
	cout << "Initial values: \nx = " << x.getX() << "\ny = " << y.getX()
		<< "\nr1 = " << r1.getX() << "\nr2 = " << r2.getX() << "\nr3 = " << r3.getX() << "\n\n";

	// demonstrate >> overload

	cout << "Enter first number: ";
	int x1;
	cin >> x1;
	x.setX(x1);
	cout << "Enter second number: ";
	int y1;
	cin >> y1;
	y.setX(y1);

	cout << "You entered:\n";
	cout << "  x = " << x.getX() << '\n';
	cout << "  y = " << y.getX() << '\n';

	// demonstrate assignment =
	cout << "Assigning r1 = y ...\n";
	r1 = y;
	cout << "  r1 = " << r1.getX() << '\n';

	// demonstrate comparison overloads
	if (x.getX() < y.getX())	cout << "(x < y) is TRUE\n";
	if (x.getX() > y.getX())	cout << "(x > y) is TRUE\n";
	if (x.getX() <= y.getX())	cout << "(x <= y) is TRUE\n";
	if (x.getX() >= y.getX())	cout << "(x >= y) is TRUE\n";
	if (x.getX() == y.getX())	cout << "(x == y) is TRUE\n";
	if (x.getX() != y.getX())	cout << "(x != y) is TRUE\n";

	// demonstrating + and * overloads
	r1 = x.getX() + y.getX();
	cout << "The sum (x + y) = " << r1.getX() << '\n';
	r2 = x.getX() * y.getX();
	cout << "The product (x * y) = " << r2.getX() << "\n\n";
	cout << "The sum (x + 12345) = " << x.getX() + 12345 << '\n';
	cout << "The product (y * 98765) = " << y.getX() * 98765 << '\n';

	// create Fibonacci numbers (stored as MyInts) using +
	cout << "\nAssuming that the Fibonnaci sequence begins 1,1,2,3,5,8,13..."
		<< "\n\nThe 10th Fibonnaci number   = " << Fibonnaci(10).getX()
		<< "\n\nThe 100th Fibonnaci number  = " << Fibonnaci(100).getX()
		<< "\n\nThe 1000th Fibonnaci number = " << Fibonnaci(1000).getX()
		<< "\n\nThe 2000th Fibonnaci number = " << Fibonnaci(2000).getX()
		<< "\n\n";
		
	system("pause");
	return 0;
}

MyInt Fibonnaci(MyInt num)
{
	MyInt n1 = 1, n2 = 1, n3;
	MyInt i = 2;
	while (i.getX() < num.getX())
	{
		n3 = n1.getX() + n2.getX();
		n1 = n2;
		n2 = n3;
		i = i.getX() + 1;
	}
	return n2.getX();
}
int C2I(char c)
// converts character into integer (returns -1 for error) 
{
	if (c < '0' || c > '9')      return -1;      // error 
	return (c - '0');                            // success 
}

char I2C(int x)
// converts single digit integer into character (returns '\0' for error)
{
	if (x < 0 || x > 9)          return '\0';    // error 
	return (static_cast<char>(x)+'0');         // success 
}