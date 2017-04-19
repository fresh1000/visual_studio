#include<iostream>
using namespace std;

class Height {
private:
	int age;
	double height;
	double recomWeigth;
public:
	Height(int age, double height){
		this->age = age;
		this->height = height;
	}
	double getWeigth() {
		this->recomWeigth = (height - 100 + age % 10) * 0.90;
		return recomWeigth;
	}
};

int main() {
	int age;
	double height;
	cout << "Enter age: ";
	cin >> age;
	cout << "Enter height: ";
	cin >> height;
	Height a(age, height);
	cout << "Recommended weigth: " << a.getWeigth() << endl;
	system("pause");
	return 0;
}