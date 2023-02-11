#pragma once

#include <iostream>

namespace GameMath {

	/// <summary>
	/// 2次元ベクトル
	/// </summary>
	class Vector2
	{
	public:
		static const Vector2 zero;		// ゼロベクトル

	private:
		float x;	// x成分
		float y;	// y成分

	public:
		Vector2();
		Vector2(float xx, float yy);
		Vector2(Vector2& vec);
		~Vector2() {};
	};
}