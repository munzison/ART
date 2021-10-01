#include "RAIN.h"
//RAINクラスのメンバー
RAIN::RAIN() {
	Color = COLOR(255, 255, 255, 100);
	init();
}
RAIN::~RAIN() {

}
void RAIN::init() {
	Len = random() % 1000 + 100.0f;
	SWeight = random() % 2 + 1.0f;
	StartPos.x = random() % (int)width;
	StartPos.y = (random() % 1000) * -1.0f;
	Speed = random() % 30 + 5.0f;
	float angle = random() % 4 + 88.0f;
	angleMode(DEGREES);
	Vec.x = cos(angle);
	Vec.y = sin(angle);
	EndPos = StartPos - Vec * Len;
	Vec *= Speed;
}
void RAIN::perform() {
	StartPos += Vec;
	EndPos += Vec;
	if (EndPos.y > height)init();
	colorMode(RGB);
	strokeWeight(SWeight);
	stroke(Color);
	line(StartPos.x, StartPos.y, EndPos.x, EndPos.y);
}
