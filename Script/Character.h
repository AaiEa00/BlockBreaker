#pragma once

#include "GameObject.h"

class Character
	:public GameObject
{
protected:
	float speed;		// �ړ����x

public:
	Character();
	Character(const Vector2& pos, const float& spd);
	~Character() {};

public:
	virtual void Update() {};		// ��ԍX�V
	virtual void Draw() {};			// �`��
};