#include "RAIN.h"
//RAINクラスのメンバー
RAIN::RAIN() {
	init();
}
RAIN::~RAIN() {

}
void RAIN::init() {
	Len = random() % 1000 + 100.0f;
	SWeight = random() % 2 + 1.0f;
	StartPos.x = random() % (int)width;
	StartPos.y = -(random() % 1000);
	Speed = random() % 10 + 5.0f;
	float angle = random() % 4 + 88.0f;
	angleMode(DEGREES);
	Vec.x = cos(angle);
	Vec.y = sin(angle);
	EndPos = VECTOR2(0, 0);
	Color = COLOR(255, 255, 255, 200);
}
void RAIN::perform() {
	StartPos += Vec;
	EndPos = StartPos - Vec * Len;
	strokeWeight(SWeight);
	stroke(Color);
	line(StartPos.x, StartPos.y, EndPos.x, EndPos.y);
}
