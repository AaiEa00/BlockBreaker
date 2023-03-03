#pragma once
#include <Shape.h>

namespace GameMath
{
	/// <summary>
	/// 円
	/// </summary>
	class Circle : public Shape
	{
		friend class CollisionDetector;

	private:	// メンバー変数
		Vector2 center{ 0.0f, 0.0f };	// 中心点
		float radius = 0.0f;			// 半径

	public:		
		// コンストラクタ
		Circle() :center(0.0f, 0.0f), radius(0.0f) {}
		Circle(const Vector2& pos, const Vector2& ctr, const float r);

	public:		// Accessor
		Vector2 GetCenter() const { return center; }
		float GetRadius() const { return radius; }

		void SetCenter(Vector2 _center) { center = center; }
	};
}