#include "Circle.h"

/// <summary>
/// �R���X�g���N�^
/// </summary>
/// <param name="ctr">���S���W</param>
/// <param name="r">���a</param>
GameMath::Circle::Circle(
	const Vector2& pos, 
	const Vector2& ctr,
	const float r
):Shape(pos)
{
	center = ctr;
	radius = r;
}
