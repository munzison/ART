#include "SQUARE.h"
SQUARE::SQUARE() {
	Color = COLOR(255, 255, 255, 8); //������
	Vec.x = 8;//�i�s�X�s�[�h
	Vec.y = Vec.x / 16 * 9;//��ʂ̔䗦
	AngSpeed = 0.05f;//��]�X�s�[�h
}
SQUARE::~SQUARE() {

}
void SQUARE::init() {
	Len = 0;
	Pos.x = 0;//���ォ��X�^�[�g
	Pos.y = 0;
	Angle = 0;
}
void SQUARE::perform() {
	Pos += Vec;
	Angle += AngSpeed;
	Len += Vec.x;//�l�p���������傫������
	strokeWeight(1);
	stroke(0);
	fill(Color);//3�s��
	angleMode(RADIANS);
	rect(Pos.x, Pos.y, Len, Len, Angle);
}
