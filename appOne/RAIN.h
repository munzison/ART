#pragma once
#include "libOne.h"
class RAIN
{
	float Len;//’·‚³
	float SWeight = 0;//‘¾‚³
	VECTOR2 StartPos, EndPos;
	VECTOR2 Vec;
	COLOR Color;
	float Speed = 0;
public:
	RAIN();
	~RAIN();
	void init();
	void perform();
};

