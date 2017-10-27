#include<iostream>
#include"NumDays.h"

int main() {

	NumDays n1(8), n2(12);//create NumDays object n1 and n2
	NumDays n(1);//create NumDays object n
	printf("%i hours would be converted to days = %lf\n", n2.getWorkHours(), n2.getNumDays());
	printf("%i hours would be converted to days = %lf\n", n1.getWorkHours(), n1.getNumDays());
	printf("Work hours object n: %i\n", n.getWorkHours());

	n = n2 + n1;//addition
	printf("The addition operator+         :%lf\n", n.getNumDays());
	n = n2 - n1;//substruction
	printf("The substraction operator-     :%lf\n", n.getNumDays());
	n = n2 + n1;
	
	++n;//prefix increment
	n.setNumDays((double)(n.getWorkHours()) / 8.0);
	printf("Prefix increment operators++   :%lf\n", n.getNumDays());
	n++;//postfix increment
	printf("Postfix increment operators++  :%lf\n", n.getNumDays());

	--n;//prefix decrement
	printf("Prefix increment operators++   :%lf\n", n.getNumDays());
	n--;//postfix decrement
	printf("Postfix decrement operators++  :%lf\n", n.getNumDays());

	system("pause");
	return 0;
}