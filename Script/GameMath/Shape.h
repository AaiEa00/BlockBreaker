#pragma once
#include "Vector2.h"
using namespace GameMath;
using namespace std;

/// <summary>
/// 形の基底クラス
/// </summary>
class Shape
{
	virtual bool CheckCollision() = 0;
};