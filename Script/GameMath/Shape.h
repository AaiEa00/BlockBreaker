#pragma once
#include <iostream>
#include "Vector2.h"
using namespace GameMath;
using namespace std;

namespace GameMath
{
	/// <summary>
	/// �`�̊��N���X
	/// </summary>
	class Shape
	{
		friend class CollisionDetector;

	public:
		Shape(){}
	};
}