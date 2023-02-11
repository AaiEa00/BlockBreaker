#pragma once

#include "GameObject.h"

class Character
	:public GameObject
{
protected:
	float speed;		// 移動速度

public:
	Character();
	Character(const Vector2& pos, const float& spd);
	~Character() {};

public:
	virtual void Update() {};		// 状態更新
	virtual void Draw() {};			// 描画
};