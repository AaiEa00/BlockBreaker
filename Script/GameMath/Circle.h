#pragma once
#include "Vector2.h"

namespace GameMath
{
	class Circle
	{
	private:	// メンバー変数
		Vector2 center{ 0.0f, 0.0f };	// 中心点
		float radius = 0.0f;			// 半径

	public:		// コンストラクタ
		Circle(const Vector2& ctr, const float r);

	public:		// Accessor
		Vector2 GetCenter() const { return center; }
		float GetRadius() const { return radius; }
	};
}