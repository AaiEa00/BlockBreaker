#pragma once
#include "Vector2.h"
using namespace GameMath;
using namespace std;

/// <summary>
/// �`�̊��N���X
/// </summary>
class Shape
{
	virtual bool CheckCollision() = 0;
};