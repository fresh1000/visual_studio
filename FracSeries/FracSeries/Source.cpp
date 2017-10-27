#include<iostream>
using namespace std;

double fracSeries(int n) {
	if (n == 2) {
		return 0.5;
	}
	else 
		return 1.0 / n + fracSeries(n-1);
}

int main() {
	cout << fracSeries(6) << endl;
	return 0;
}