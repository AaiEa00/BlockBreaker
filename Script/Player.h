#pragma once

#include "Character.h"

using namespace GameMath;
using namespace std;

class Player
	:public Character {
protected:
	int handle;

public:
	Player();
	Player(
		const Vector2& pos,
		const int& b,
		const string_view& fileName
	);
	virtual ~Player() {};

public:
	virtual void Update() {};
	virtual void Draw() {};
};