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
		Vector2 xy;

	public:
		Shape() = default;		// �v�m�F https://cpprefjp.github.io/lang/cpp11/defaulted_and_deleted_functions.html
	};
}