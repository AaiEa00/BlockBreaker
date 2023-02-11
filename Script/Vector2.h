#pragma once

#include <iostream>

namespace GameMath {

	/// <summary>
	/// 2�����x�N�g��
	/// </summary>
	class Vector2
	{
	public:
		static const Vector2 zero;		// �[���x�N�g��

	private:
		float x;	// x����
		float y;	// y����

	public:
		Vector2();
		Vector2(float xx, float yy);
		Vector2(Vector2& vec);
		~Vector2() {};
	};
}