#pragma once
#include <Shape.h>

namespace GameMath
{
	/// <summary>
	/// �~
	/// </summary>
	class Circle : public Shape
	{
		friend class CollisionDetector;

	private:	// �����o�[�ϐ�
		Vector2 center{ 0.0f, 0.0f };	// ���S�_
		float radius = 0.0f;			// ���a

	public:		
		// �R���X�g���N�^
		Circle() :center(0.0f, 0.0f), radius(0.0f) {}
		Circle(const Vector2& pos, const Vector2& ctr, const float r);

	public:		// Accessor
		Vector2 GetCenter() const { return center; }
		float GetRadius() const { return radius; }

		void SetCenter(Vector2 _center) { center = center; }
	};
}