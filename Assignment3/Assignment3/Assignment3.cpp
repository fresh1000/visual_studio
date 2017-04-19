#include<iostream>
using namespace std;

int digit(int);
int nDigit(int, int);
int digitLong(long);
int nDigitLong(long, int);
void toOutput(int, int); 
void toOutputLong(long, int);

int main() {
	int N;
	int n;
	char z;
	long int longN;
	cin >> longN >> z >> n;
	toOutputLong(longN,n);
	int sum = 0;
	for (int i = 0; i < 9; i++){
		cin >> N >> z >> n;
		toOutput(N, n);
		if (i == 3 || i == 4 || i == 6)
			sum = sum + digit(N);
	}
	cout << "Digit total: " << sum <<endl;
	system("pause");
	return 0;
}

//return digit
int digit(int N) {
	int digits = 0;
	while (N != 0) { 
		N /= 10;
		digits++;
	}
	return digits;
}

//return n-th digit of the value
int nDigit(int N,int n) {
	int posFromRight = 1;
	{
		int v = N;
		while (v /= 10)
			++posFromRight;
	}
	posFromRight -= n - 1;
	while (--posFromRight)
		N /= 10;
	N %= 10;
	return N > 0 ? N : -N;
}

// output for int
void toOutput(int N, int n){
	cout << "Value " << N << " is " << digit(N) << " digits, and digit " << n << " is " << nDigit(N, n) << endl;
}

//output for long int
void toOutputLong(long longN, int n) {
	cout << "Value " << longN << " is " << digitLong(longN) << " digits, and digit " << n << " is " << nDigitLong(longN, n) << endl;
}

//for long type
int digitLong(long longN){
	int digits = 0;
	while (longN != 0) {
		longN /= 10;
		digits++;
	}
	return digits;
}

//for long type
int nDigitLong(long longN, int n) {
	int posFromRight = 1;
	{
		int v = longN;
		while (v /= 10)
			++posFromRight;
	}
	posFromRight -= n - 1;
	while (--posFromRight)
		longN /= 10;
	longN %= 10;
	return longN > 0 ? longN : -longN;
}