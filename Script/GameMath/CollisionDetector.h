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
		// �~�Ƌ�`�̓����蔻��
		bool AreGameObjectsColliding(const Circle& circle, const Box);
		// �~�Ƌ�`�̓����蔻��
		bool AreGameObjectsColliding();
	};
}