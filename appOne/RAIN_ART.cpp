#include "RAIN_ART.h"
#include "RAIN.h"
RAIN_ART::RAIN_ART() {
	Num = 500;//âJÇÃêî
	Rains = new RAIN[Num];
}
RAIN_ART::~RAIN_ART() {
	delete[]Rains;
}
void RAIN_ART::perform() {
	if (isPress(KEY_SPACE)) {
		Num--;
		if (Num < 5) {
			Num = 5;
		}
	}
	if (isTrigger(KEY_Z)) {
		if (Num > 5) {
			Num = 500;
		}
	}

	clear(30);
	for (int i = 0; i < Num; i++) {
		Rains[i].perform();
	}
}
