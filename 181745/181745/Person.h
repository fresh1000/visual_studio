#include <string>
#include <iostream>
using namespace std;

class Person {
private:
	string fullName;
	int identifier;
	string email;
public:
	Person(string, int, string);
	string getFullName();
	string getEmail();
	int getIdentifier();
	void setFullName(string);
	void setEmail(string);
	void setIdentifier(int);
};