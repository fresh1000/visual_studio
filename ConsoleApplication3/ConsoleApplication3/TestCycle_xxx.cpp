#include"Motorcycle.h"

int main() {
	Motorcycle moto1("BMW", 5);
	cout << "Accelerate" << endl;
	moto1.accelerate();
	cout <<"Speed: "<< moto1.getSpeed() << endl;
	moto1.accelerate();
	cout << "Speed: " << moto1.getSpeed() << endl;
	moto1.accelerate();
	cout << "Speed: " << moto1.getSpeed() << endl;
	moto1.accelerate();
	cout << "Speed: " << moto1.getSpeed() << endl;
	moto1.accelerate();
	cout << "Speed: " << moto1.getSpeed() << endl;
	cout << endl;

	cout << "Brake" << endl;
	moto1.brake();
	cout << "Speed: " << moto1.getSpeed() << endl;
	moto1.brake();
	cout << "Speed: " << moto1.getSpeed() << endl;
	moto1.brake();
	cout << "Speed: " << moto1.getSpeed() << endl;
	moto1.brake();
	cout << "Speed: " << moto1.getSpeed() << endl;
	moto1.brake();
	cout << "Speed: " << moto1.getSpeed() << endl;
	moto1.brake();
	cout << "Speed: " << moto1.getSpeed() << endl;
	moto1.brake();
	cout << "Speed: " << moto1.getSpeed() << endl;
	moto1.brake();
	cout << "Speed: " << moto1.getSpeed() << endl;
	cout << endl;

	Motorcycle moto2;
	moto2.setModel("Yamaha");
	moto2.setSpeed(32);
	moto2.setYear(1);
	cout << "Model: " << moto2.getModel() << endl;
	cout << "Speed: " << moto2.getSpeed() << endl;
	cout << "Year: " << moto2.getYear() << endl;
	system("pause");
	return 0;
}