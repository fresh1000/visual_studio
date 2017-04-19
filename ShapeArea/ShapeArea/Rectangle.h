
#include "BasicShape.h"

class Rectangle: public BasicShape {
private:
	double width;
	double length;
public:
	Rectangle(double width, double length);
	double getWidth();
	double getLength();
	void calcArea();
	double getArea();
};