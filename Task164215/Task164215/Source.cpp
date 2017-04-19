#include<iostream>
#include<stdio.h>

int main() {
	double rate = 1.5;
	double miles;
	double fare;
	printf("Enter the Distance travelled in miles: ");
	scanf("%lf", &miles);
	fare = rate * miles;
	printf("Your fare is $%.2f\n",fare);
	system("pause");
	return 0;
}