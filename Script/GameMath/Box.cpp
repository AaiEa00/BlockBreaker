#include "Box.h"

/// <summary>
/// コンストラクタ
/// </summary>
/// <param name="lt">左上</param>
/// <param name="rb">右下</param>
Box::Box(const Vector2& lt, const Vector2& rb)
{
	leftTop = lt;
	rightBottom = rb;
}
