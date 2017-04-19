#ifndef BASICSHAPE_H
#define BASICSHAPE_H

class BasicShape{
private:
	double area;
public:
	double getArea();
	virtual void calcArea() = 0;
	void setArea(double);
};

#endif