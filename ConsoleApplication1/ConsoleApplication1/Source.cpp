#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

double sum_skip10(double array[], int n) {
	double sum = 0;
	for (int i = 0; i < n; i = i + 10)
		sum = sum + array[i];
	return sum;
}

double  sum_exponentials(int n) {
	int sum = 0;
	for (int i = 1; i<n; i = i * 3)
		sum = sum + i;
	return  sum;
}

int main() {
	clock_t start, end;
	double *a = new double[1000000];
	for (int i = 0; i < 50; i++)
	{
		a[i] = rand(); // запись случайного числа, которое вернет rand()
		//cout << a[i] << endl;
	}
	
	//cout<<sum_skip10(a,50);
	cout<<sum_exponentials(10000);
	system("pause");
}