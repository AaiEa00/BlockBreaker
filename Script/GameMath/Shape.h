#pragma once
#include "Vector2.h"
using namespace GameMath;

namespace GameMath
{
	/// <summary>
	/// Œ`‚ÌŠî’êƒNƒ‰ƒX
	/// </summary>
	class Shape
	{
		friend class CollisionDetector;

	protected:
		Vector2 position{ 0.0f, 0.0f };

	public:
		Shape() { position.x = 0.0f, position.y = 0.0f; }
		Shape(const Vector2& pos);

	public:
		Vector2 GetPosition() { return position; }
		void SetPosition(Vector2 pos) { position = pos; }
	};
}