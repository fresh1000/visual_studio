#include<vector>
//char reverseChar(char* str);

class MyInt {
private:
	int x;

public:
	MyInt();
	MyInt(int);
	MyInt(char *str);
	int getX();
	void setX(int);
};