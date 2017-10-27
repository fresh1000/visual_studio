class NumDays {
private:
	int workHours;
	double numDays;
public:
	NumDays(int hours);
	int getWorkHours();
	double getNumDays();
	void setWorkHours(int hours);
	void setNumDays(double days);
	NumDays operator+(NumDays &objNumDays);
	NumDays operator-(NumDays &objNumDays);
	NumDays operator++(int);//postfix
	NumDays operator--(int);//postfix
	NumDays operator++();//prefix
	NumDays operator--();//prefix
};