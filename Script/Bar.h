#pragma once

#include "Character.h"

using namespace GameMath;

class Bar
	:public Character {
private:

public:
	Bar();
	Bar(
		const Vector2& pos,
		const int& b,
		const std::string_view& fileName
	);
	~Bar() {};

public:
	void Update();
	void Draw();
};