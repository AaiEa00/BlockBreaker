#pragma once

#include "Player.h"

class Ball
	:public Player
{
private:
	int handle;

public:
	Ball();
	~Ball() {};

public:
	void Update();
	void Draw();
};