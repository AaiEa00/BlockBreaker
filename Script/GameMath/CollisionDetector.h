#pragma once
#include <Box.h>
#include <Capsule.h>
#include <Circle.h>
#include <LineSegment.h>
#include <cassert>
#include <numeric>
using namespace GameMath;

//constexpr int leftSideOfScreen = 1;
//constexpr int rightSideOfScreen = 2;
//constexpr int topOfScreen = 3;
//constexpr int bottomOfScreen = 4;
//
constexpr float epsilon = 0.05f;

namespace GameMath
{
	class CollisionDetector
	{
	public:
		// 円と矩形の衝突判定
		bool isCollided(const Circle& circle, const Box& box) const;

		// 円とカプセルの衝突判定
		bool isCollided(const Circle& circle, const Capsule& capsule) const;
		
		// 円と直線の衝突判定
		bool isCollided(const Circle& circle, const LineSegment& lineSegment) const;
		
		// カプセルと直線の衝突判定
		bool isCollided(const Capsule& capsule, const LineSegment& lineSegment) const;
	};
}