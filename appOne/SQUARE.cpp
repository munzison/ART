#include "SQUARE.h"
SQUARE::SQUARE() {
	Color = COLOR(255, 255, 255, 8); //薄い白
	Vec.x = 8;//進行スピード
	Vec.y = Vec.x / 16 * 9;//画面の比率
	AngSpeed = 0.05f;//回転スピード
}
SQUARE::~SQUARE() {

}
void SQUARE::init() {
	Len = 0;
	Pos.x = 0;//左上からスタート
	Pos.y = 0;
	Angle = 0;
}
void SQUARE::perform() {
	Pos += Vec;
	Angle += AngSpeed;
	Len += Vec.x;//四角を少しずつ大きくする
	strokeWeight(1);
	stroke(0);
	fill(Color);//3行目
	angleMode(RADIANS);
	rect(Pos.x, Pos.y, Len, Len, Angle);
}
