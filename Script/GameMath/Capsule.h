#pragma once
#include "Shape.h"

namespace GameMath
{
	class Capsule : public Shape
	{
	private:
		Vector2 direction{ 0.0f,0.0f };		// 線分のベクトル
		float radius{ 0.0f };				// 半径

	public:
		// コンストラクタ
		Capsule(
			const Vector2& start,
			const Vector2& end,
			const float r
		);
	};
}