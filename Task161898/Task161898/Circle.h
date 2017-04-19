class Circle {
public:
	void print() const;
	void setRadius(double);
	void setCenter(double, double);
	void getCenter(double&, double&);
	double getRadius();
	double area();
	Circle();
	Circle(double, double, double);
private:
	double x;
	double y;
	double radius;
};