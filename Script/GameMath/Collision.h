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
	public:	// Õ“Ë”»’è
		bool AreCollided	// ‰~‚Æ2Dü•ª
		(
			const Circle& circle, 
			const LineSegment2D& segment
		);

	};
}