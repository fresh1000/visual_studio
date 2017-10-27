#include<iostream>
using namespace std;

int partition(int *arr, int p, int r) {
	int x = arr[p];
	int i = p - 1;
	int j = r + 1;
	while (true) {
		if (arr[j] <= x) {
			j = j - 1;
		}
		
		if (arr[i] >= x) {
			i = i + 1;
		}

		if (i < j) {
			swap(arr[i], arr[j]);
		}else {
			return j;
		}
	}
}

void quickSort(int *arr,int p,int r) {
	if (p < r) {
		int q = partition(arr, p, r);
		quickSort(arr, p, q);
		quickSort(arr, q + 1, r);
	}
}

int main() {
	const int SIZE = 10;
	int *a = new int[SIZE];
	a[0] = 77;
	a[1] = 81;
	a[2] = 18;
	a[3] = 30;
	a[4] = 4;
	a[5] = 10;
	a[6] = 19;
	a[7] = 2;
	a[8] = 47;
	a[9] = 3;

	quickSort(a, 1, SIZE);	

	for (int i = 0; i < SIZE; i++) {
		printf("%i\n", a[i]);
	}

	system("pause");
	return 0;
}