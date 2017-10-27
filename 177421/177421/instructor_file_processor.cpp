#include"instructor_file_processor.h"

instructor_file_processor::instructor_file_processor(string _fname) {
	this->filename = _fname;
}

void instructor_file_processor::print() {
	string fileN = this->filename;
	ifstream readFile(fileN.c_str());//open stream for read file
	string inst_name;
	readFile >> inst_name;//read instructor name
	printf("Name of datafile     : %s\n", fileN.c_str());
	printf("Name of Instructor   : %s\n", inst_name.c_str());
	
	int num_classes = 0;
	//loop while file has next line
	for (string line; getline(readFile, line);) {
		if (line != "") {//if line not empty
			num_classes++;
			printf("\t%i.\t%s\n", num_classes, line.c_str());
		}
	}

	printf("# of classes taught : %i\n", num_classes);
	printf("--------------------------------------\n\n");
	readFile.close();
}