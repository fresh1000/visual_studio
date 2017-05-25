#include"222Boat.h"
//Tank class
const float Tank::getCapacity() {
	return this->capacity;
}

float Tank::getMeter() {
	return this->meter;
}

bool Tank::isEmpty() {
	if (this->meter == 0) {
		return true;
	}else
		return false;
}

void Tank::refill() {
	this->meter = this->capacity;
}

Tank::Tank(float capacity) {
	this->capacity = capacity;
}


///Motor class
Motor::Motor(int strokes, int hPowers) {
	this->numStrokes = strokes;
	this->horsePower = hPowers;
}

void Motor::start() {
	this->status = RUNNING;
}

void Motor::stop() {
	this->status = NOT_RUNNING;
}


///FuelTank class
void FuelTank::refuel() {
	this->meter = this->capacity;
}


FuelTank::FuelTank(float meter) : Tank(meter) {}

///WaterTank class
WaterTank::WaterTank(float meter) : Tank(meter) {}


void WaterTank::flush() {
	this->meter = 0;
}


//Pump class
Pump::Pump(float rate) : rate(rate){}

//Electric pump 
ElectricPump::ElectricPump() {}

void ElectricPump::pump(Boat &boat) {
	boat.pumpWater(rate);
}

//ManualPump class
ManualPump::ManualPump() {}

void ManualPump::pump(Boat &boat) {
	boat.pumpWater(rate);
}

//Boat class
void Boat::move() {
	this->distance += 0.1;
}


void Boat::startMotor() {
	motor.start();
}

void Boat::stopMotor() {
	motor.stop();
}

void Boat::people(int people) {
	this->numPeople = people;
}

void Boat::pumpWater(float rate) {
	this->water_in -= rate;
}

bool Boat::isLeaking() {
	if (this->water_in > 0) {
		return true;
	}else
		return false;
}

float Boat::leakingRate() {
	return 0;
}

void Boat::SOS() {
	if (this->distance > 0.5) {
		cgt = OPENSEA;
	}else {
		cgt = LITORAL;
	}
}

Boat::Boat(int numstrokes, int hPower, float water_capacity,
	float fuel_capacity,
	int size, int speed, int people) : wTank(water_capacity), fTank(fuel_capacity), motor(numstrokes, hPower) {
	this->size = size;
	this->maxSpeed = speed;
	this->peopleCapacity = people;
	this->distance = 0;
}

bool Boat::canStart() {
	if (wTank.getMeter() > 0 && fTank.getMeter() > 0 && peopleCapacity >= numPeople) {
		return true;
	}else
		return false;
}

int Boat::getMaxSpeed() {
	return this->maxSpeed;
}

int Boat::getPeople() {
	return this->numPeople;
}

int Boat::getSize() {
	return this->size;
}


SailBoat::SailBoat(int numstrokes, int horses, float water_capacity,
	float fuel_capacity,
	int size, int speed,
	int ppl, bool spinnaker) : Boat(numstrokes,horses,water_capacity,fuel_capacity,size, speed, ppl) {
	this->spinnaker = spinnaker;
}

bool SailBoat::hasSpinnaker() {
	return this->spinnaker;
}

void SailBoat::raiseMainSail() {
	this->sail = SAIL_RAISED;
}

void SailBoat::raiseSpinnaker() {
	this->sail = SPINNAKER_RAISED;
}

void SailBoat::lowerMainSail() {
	this->sail = SAIL_LOWERED;
}

void SailBoat::lowerSpinnaker() {
	this->sail = SPINNAKER_LOWERED;
}


PowerBoat::PowerBoat(int numstrokes, int hPower, float water_capacity, float fuel_capacity,
	int size, int speed, int ppl) : Boat(numstrokes, hPower, water_capacity, fuel_capacity,
	size, speed, ppl) {}

void PowerBoat::startMotor(){
	motor.start();
	secondMotor.start();
}

void PowerBoat::stopMotor() {
	motor.stop();
	secondMotor.stop();
}

//CoastGuardBoat class
CoastGuardBoat::CoastGuardBoat(int numstrokes, int hPower, float water_capacity, float fuel_capacity,
	int size, int speed, int ppl, CoastGuardType cgt) : PowerBoat(numstrokes, hPower, water_capacity, fuel_capacity,
	size, speed, ppl) {
	this->cgt = cgt;
}

void CoastGuardBoat::rescue(Boat &boat) {
	if (boat.cgt == OPENSEA) {
		startMotor();
		cout << "Wait help 1 hours" << endl;
		this->numPeople = boat.getPeople();
		boat.numPeople = 0;
		boat.stopMotor();
	}else if (boat.cgt == LITORAL) {
		startMotor();
		cout << "Wait help 10 minutes" << endl;
		this->numPeople = boat.getPeople();
		boat.numPeople = 0;
		boat.stopMotor();
	}
}

