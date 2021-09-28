#include "BUBBLE.h"
#include "BUBBLE_ART.h"
BUBBLE_ART::BUBBLE_ART() {
	Num = 10;//泡の数
	Bubbles = new BUBBLE[Num];//先頭アドレスを受け取る
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