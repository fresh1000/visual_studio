#include"Circle.h"

class Cylinder : public Circle {
public:
	void print() const;
	void setHeight(double);
	double getHeight();
	double volume();
	double area();
	Cylinder();
	Cylinder(double, double, double, double);
private:
	double height;
};