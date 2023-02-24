#pragma once
#include "Shape.h"

namespace GameMath
{
	class Capsule : public Shape
	{
	private:
		Vector2 direction{ 0.0f,0.0f };		// �����̃x�N�g��
		float radius{ 0.0f };				// ���a

	public:
		// �R���X�g���N�^
		Capsule(
			const Vector2& start,
			const Vector2& end,
			const float r
		);
	};
}