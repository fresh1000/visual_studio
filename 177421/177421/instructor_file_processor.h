#include<string>
#include<fstream>
using namespace std;

class instructor_file_processor {
private:
	string filename;
public:
	instructor_file_processor(string _fname);
	void print();
};