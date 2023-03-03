#include "Circle.h"

/// <summary>
/// コンストラクタ
/// </summary>
/// <param name="ctr">中心座標</param>
/// <param name="r">半径</param>
GameMath::Circle::Circle(
	const Vector2& pos, 
	const Vector2& ctr,
	const float r
):Shape(pos)
{
	center = ctr;
	radius = r;
}
