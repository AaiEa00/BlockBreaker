#pragma once

#include "GameObject.h"

class Character
	:public GameObject
{
protected:
	float speed;		// ˆÚ“®‘¬“x

public:
	Character();
	Character(const Vector2& pos, const float& spd);
	~Character() {};

public:
	virtual void Update() {};		// ó‘ÔXV
	virtual void Draw() {};			// •`‰æ
};