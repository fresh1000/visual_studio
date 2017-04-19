
#include"BasicShape.h"

class Circle:public BasicShape {
private:
	double centerX;
	double centerY;
	double radius;
public:
	Circle(double centerX, double centerY, double radius);
	double getCenterX();
	double getCenterY();
	void calcArea();
	double getArea();
};