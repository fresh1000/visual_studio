#include<iostream>

using namespace std;

int main() {
	int* a = new int[4];

	for (int i = 0; i < 4; i++) {
		cout << "Enter number:";
		cin >> a[i];
	}

	int max = 0;
	for (int i = 0; i < 4; i++) {
		if (a[i] > max) {
			max = a[i];
		}
	}

	int min = max;
	for (int i = 0; i < 4; i++) {
		if (a[i] < min) {
			min = a[i];
		}
	}

	cout << "Max: " << max << " Min: " << min << endl;
	system("pause");
	return 0;
}