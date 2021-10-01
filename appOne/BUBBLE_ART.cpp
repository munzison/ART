#include "BUBBLE.h"
#include "BUBBLE_ART.h"
BUBBLE_ART::BUBBLE_ART() {
	Num = 30;//�A�̐�
	Bubbles = new BUBBLE[Num];//�擪�A�h���X���󂯎��
}
BUBBLE_ART::~BUBBLE_ART() {
	delete[] Bubbles;
}
void BUBBLE_ART::perform() {
	colorMode(RGB);
	clear(255, 200, 200);
	for (int i = 0; i < Num; i++) {
		Bubbles[i].perform();
	}
}