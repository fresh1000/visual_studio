#include<iostream>
#include<iomanip>
#include"big_number.h"
using namespace std;

int main() {
	BigNumber x(200);
	BigNumber y(45);
	auto z = x + y;
	for (auto i : z.data_)
		cout << i << " ";
	cout << endl;
	system("pause");
	return 0;
}