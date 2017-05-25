#include"222Boat.h"

int main() {
	PowerBoat powerBoat(12, 100, 100, 100, 1000, 60, 900);
	SailBoat sailBoat(14, 42, 100, 100, 200, 40, 10, true);
	sailBoat.SOS();
	CoastGuardBoat cgb(100, 100, 100, 100, 100, 100, 100, sailBoat.cgt);
	cgb.rescue(sailBoat);
	system("pause");
	return 0;
}