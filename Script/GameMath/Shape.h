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

	protected:
		Vector2 xy;

	public:
		Shape() = default;		// 要確認 https://cpprefjp.github.io/lang/cpp11/defaulted_and_deleted_functions.html
	};
}