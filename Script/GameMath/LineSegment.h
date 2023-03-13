#pragma once
#include "Shape.h"

namespace GameMath
{
	/// <summary>
	/// ����
	/// </summary>
	class LineSegment :public Shape
	{
		friend class CollisionDetector;

	private:
		Vector2 startVector2{ 0.0f, 0.0f };		// �n�_�ʒu
		Vector2 endVector2{ 0.0f, 0.0f };		// �I�_�ʒu
		Vector2 direction{ 0.0f, 0.0f };		// ����

	public:
		// �R���X�g���N�^
		LineSegment(const Vector2& pos, const Vector2& s, const Vector2& e);
	};
}