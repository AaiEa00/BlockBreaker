#pragma once
#include <iostream>
#include "Vector2.h"
using namespace GameMath;
using namespace std;

namespace GameMath
{
	/// <summary>
	/// 形の基底クラス
	/// </summary>
	class Shape
	{
		friend class CollisionDetector;

	public:
		Shape(){}
	};
}