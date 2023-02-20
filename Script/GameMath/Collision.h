#pragma once
#include "LineSegment2D.h"
#include "Circle.h"
#include <cmath>
using namespace std;

namespace GameMath
{
	class Circle;
	class LineSegment;

	class Collision
	{
	public:	// �Փ˔���
		bool AreCollided	// �~��2D����
		(
			const Circle& circle, 
			const LineSegment2D& segment
		);

	};
}