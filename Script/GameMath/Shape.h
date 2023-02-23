#pragma once
#include <iostream>
#include "Vector2.h"
using namespace GameMath;
using namespace std;

namespace GameMath
{
	/// <summary>
	/// �`�̊��N���X
	/// </summary>
	class Shape
	{
		friend class CollisionDetector;

	protected:
		Vector2 xy{ 0.0f, 0.0f };		// �v�m�F�@�����o�[�ϐ��ǂ�����

	public:
		Shape(const float xx, const float yy) { xy.SetX(xx), xy.SetY(yy); }
		Shape(const Vector2& xxyy) { xy.SetX(xxyy.GetX()), xy.SetY(xxyy.GetY()); }
	};
}