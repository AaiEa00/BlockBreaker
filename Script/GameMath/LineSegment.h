#pragma once
#include "Shape.h"

namespace GameMath
{
	/// <summary>
	/// 線分
	/// </summary>
	class LineSegment :public Shape
	{
		friend class CollisionDetector;

	private:
		Vector2 startVector2{ 0.0f, 0.0f };		// 始点位置
		Vector2 endVector2{ 0.0f, 0.0f };		// 終点位置
		Vector2 direction{ 0.0f, 0.0f };		// 方向

	public:
		// コンストラクタ
		LineSegment(const Vector2& pos, const Vector2& s, const Vector2& e);
	};
}