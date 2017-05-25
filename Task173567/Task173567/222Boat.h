#include<iostream>
using namespace std;

enum CoastGuardType { LITORAL, OPENSEA };

class Tank
{
public:
	const float getCapacity();
	float getMeter();
	bool isEmpty();
	void refill();
protected:
	Tank(float);
	~Tank(){}
	float capacity;
	float meter;
private:
	Tank(){}
};

class FuelTank : public Tank
{
public:
	friend class Motor;
	FuelTank(float);
	~FuelTank(){}
	void refuel();
private:
	FuelTank() : Tank(0) {}
};

class WaterTank : public Tank
{
public:
	WaterTank(float);
	~WaterTank(){}
	void flush();
private:
	WaterTank() : Tank(0){ }
};

class Motor
{
public:
	enum Status { NOT_RUNNING, RUNNING };
	Motor(int strokes, int hPowers);
	~Motor(){}
	void start();
	void stop();
	Status getStatus(){ return status; }
	int getStrokes(){ return numStrokes; }
	int getHorsePower(){ return horsePower; }
private:
	Motor(){}
	Status status;
	int numStrokes;
	int horsePower;
};

class Boat;

class Pump
{
protected:
	Pump(float rate);
	Pump() : rate(0) {}
	virtual ~Pump(){}
	virtual void pump(Boat &) = 0;
	const float rate;
};

class ElectricPump : public Pump
{
public:
	ElectricPump();
	virtual ~ElectricPump(){}
	virtual void pump(Boat &);
};
class ManualPump : public Pump
{
public:
	ManualPump();
	virtual ~ManualPump(){}
	virtual void pump(Boat &);
};

class CoastGuardBoat;

class Boat
{
public:
	void move();
	void startMotor();
	void stopMotor();
	void people(int);
	void pumpWater(float);
	bool isLeaking();
	float leakingRate();
	void SOS();
	CoastGuardType cgt;
protected:
	friend class CoastGuardBoat;
	Boat(int numstrokes, int hPower, float water_capacity,
		float fuel_capacity,
		int size, int speed, int people);
	~Boat(){}
	bool canStart();
	int getPeople();
	int getMaxSpeed();
	int getSize();
	WaterTank wTank;
	FuelTank fTank;
	Motor motor;
	int size;
	int numPeople;
	int peopleCapacity;
	int maxSpeed;
	float water_in;
	float distance;
private:
	Boat() : wTank(0), fTank(0), motor(0, 0){}
};

class SailBoat : public Boat
{
public:
	enum Sail {
		SAIL_RAISED = 1, SAIL_LOWERED = 2,
		SPINNAKER_RAISED = 4, SPINNAKER_LOWERED = 8
	};
	SailBoat(int numstrokes, int horses, float water_capacity,
		float fuel_capacity,
		int size, int speed,
		int ppl, bool spinnaker);
	~SailBoat(){}
	bool hasSpinnaker();
	void raiseMainSail();
	void raiseSpinnaker();
	void lowerMainSail();
	void lowerSpinnaker();
private:
	bool spinnaker;
	Sail sail;
};

class PowerBoat : public Boat
{
public:
	PowerBoat(int numstrokes, int hPower, float water_capacity,
		float fuel_capacity,
		int size, int speed, int ppl);
	~PowerBoat(){}
	void startMotor();
	void stopMotor();
private:
	Motor secondMotor = motor;
};


class CoastGuardBoat : public PowerBoat
{
public:
	CoastGuardBoat(int,int,float,float,int,int,int,CoastGuardType);
	~CoastGuardBoat(){}
	void rescue(Boat &);
	CoastGuardType cgt;
};