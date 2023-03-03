#pragma once
#include "Shape.h"

namespace GameMath
{
	class Box :public Shape
	{
		friend class CollisionDetector;

	private:
		Vector2 leftTop{ 0.0f, 0.0f };			// ���㒸�_
		Vector2 rightBottom{ 0.0f, 0.0f };		// �E�����_

	public:
		// �R���X�g���N�^
		Box():leftTop(0.0f, 0.0f), rightBottom(0.0f, 0.0f){}
		Box(const Vector2& pos, const Vector2& lt, const Vector2& rb);
	};
}