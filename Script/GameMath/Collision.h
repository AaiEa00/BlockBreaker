#pragma once
#include "LineSegment2D.h"
#include "Circle.h"
#include "Utility.h"
#include <cmath>
using namespace std;

constexpr int leftSideOfScreen = 1;
constexpr int rightSideOfScreen = 2;
constexpr int topOfScreen = 3;
constexpr int bottomOfScreen = 4;

namespace GameMath
{
	class Circle;
	class LineSegment2D;

	class Collision
	{
	public:	// �Փ˔���
		static int ExistInsideScreen	// �摜�ƕ�
		(
			Vector2& pos,
			const Vector2& size
		);

		static bool AreCollided	// �~��2D����
		(
			const Circle& circle, 
			const LineSegment2D& segment
		);

	};
}