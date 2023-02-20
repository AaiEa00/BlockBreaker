#include "LineSegment2D.h"

/// <summary>
/// コンストラクタ
/// </summary>
/// <param name="s">始点</param>
/// <param name="e">終点</param>
GameMath::LineSegment2D::LineSegment2D(const Vector2& s, const Vector2& e)
{
	start = s;
	end = e;
	direction = end - start;
}
