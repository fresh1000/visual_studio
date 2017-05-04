#include <stdio.h>
#include<iostream>

using namespace std;

int Ackermann(int x, int y);

int main() {

	printf("%3s%6d%6d%6d%6d%6d%6d%6d%6d\n\n", "x/y",0,1,2,3,4,5,6,7);
	for (int i = 0; i < 4; ++i) {
		cout << i << ": ";
		for (int j = 0; j < 8; ++j) {
			printf("%6d", Ackermann(i, j));
		}
		cout << endl;
	}
	system("pause");
	return 0;
}


int Ackermann(int x, int y) {
	if (x == 0) {
		return y + 1;
	}
	if (y == 0) {
		return Ackermann(x - 1, 1);
	}

	return Ackermann(x - 1, Ackermann(x, y - 1));
}