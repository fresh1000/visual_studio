#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void sort(int names[], int SIZE) {
	int start, minI;
	int min;

	for (start = 0; start < (SIZE - 1); start++) {
		minI = start;
		min = names[start];
		for (int i = start + 1; i < SIZE; i++) {
			if (names[i] < min)
			{
				min = names[i];
				minI = i;
			}
		}
		names[minI] = names[start];
		names[start] = min;
	}
}

void printArr(int arrayString[], int SIZE) {
	for (int i = 0; i < SIZE; i++) {
		cout << arrayString[i] << endl;
	}
	cout << endl;
}

double median(int array[], int SIZE) {
	double median;
	if (SIZE % 2 == 0)
		median = ((double)array[SIZE / 2] + (double)array[SIZE / 2 - 1]) / 2;
	else
		median = (double)array[SIZE / 2];
	return median;
}

int main() {
	int choice;
	cout << "Enter file:" << endl;
	cout << "1.GradeListO.txt" << endl;
	cout << "2.GradeListE.txt" << endl;
	cout << "Your choice:";
	cin >> choice;
	if (choice == 1) {
		fstream myfile("GradeListO.txt", ios_base::in);
		const int sizeO = 49;
		int a;
		int arr[sizeO] = { 0 };
		int i = 0;

		while (myfile >> a){
			arr[i] = a;
			i++;
		}
		cout << "Unsorted strings:" << endl;
		printArr(arr, sizeO);
		sort(arr, sizeO);
		cout << endl;
		cout << "Sorted array strings:" << endl;
		printArr(arr, sizeO);
		cout << endl;
		cout << "Median: " << median(arr, sizeO) << endl;
	}
	if (choice == 2) {
		fstream myfile("GradeListE.txt", ios_base::in);
		const int sizeE = 50;
		int a;
		int arr[sizeE] = { 0 };
		int i = 0;

		while (myfile >> a){
			arr[i] = a;
			i++;
		}
		cout << "Unsorted strings:" << endl;
		printArr(arr, sizeE);
		cout << endl;
		sort(arr, sizeE);
		cout << "Sorted array strings:" << endl;
		printArr(arr, sizeE);
		cout << endl;
		cout << "Median: " << median(arr, sizeE) << endl;
	}
	system("pause");
	return 0;
}
