#include "LineSegment.h"

/// <summary>
/// コンストラクタ
/// </summary>
/// <param name="s">始点位置</param>
/// <param name="e">終点位置</param>
GameMath::LineSegment::LineSegment(
	const Vector2& pos, 
	const Vector2& s, 
	const Vector2& e
):Shape(pos)
{
	startVector2 = s;
	endVector2 = e;
	direction = e - s;
}
