#pragma once
#include "Shape.h"
using namespace std;
using namespace GameMath;

constexpr int leftSideOfScreen = 1;
constexpr int rightSideOfScreen = 2;
constexpr int topOfScreen = 3;
constexpr int bottomOfScreen = 4;

namespace GameMath
{
	class CollisionDetector
	{
	public:
		CollisionDetector() {}
		virtual ~CollisionDetector() {}

	public:
		// ‰~‚Æ‹éŒ`‚Ì“–‚½‚è”»’è
		bool AreGameObjectsColliding(const Circle& circle, const Box);
		// ‰~‚Æ‹éŒ`‚Ì“–‚½‚è”»’è
		bool AreGameObjectsColliding();
	};
}