#include <iostream>
using namespace std;
#include "instructor_file_processor.h"

int main()
{
	instructor_file_processor inst_maya("file_MayaTolappa.txt");
	instructor_file_processor inst_amy("file_AmyChaaban.txt");
	instructor_file_processor inst_tim("file_TimMoriarty.txt");

	inst_maya.print();
	inst_amy.print();
	inst_tim.print();
	system("pause");
	return 0;

}