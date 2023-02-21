#pragma once
#include "Shape.h"

namespace GameMath
{
	class Circle
		:public Shape
	{
	private:	// �����o�[�ϐ�
		Vector2 center{ 0.0f, 0.0f };	// ���S�_
		float radius = 0.0f;			// ���a

	public:		// �R���X�g���N�^
		Circle(const Vector2& ctr, const float r);

	public:		// Accessor
		Vector2 GetCenter() const { return center; }
		float GetRadius() const { return radius; }

	public:
		bool CheckCollision() { return true; };
	};
}