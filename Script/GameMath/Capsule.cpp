#include "Capsule.h"

/// <summary>
/// コンストラクタ
/// </summary>
/// <param name="tp">カプセルの頂上</param>
/// <param name="bs">カプセルの底</param>
/// <param name="r">半径</param>
GameMath::Capsule::Capsule(
	const Vector2& pos,
	const Vector2& tp,
	const float r
):Shape(pos)
{
	radius = r;
	tip = tp;
	Vector2 bs{pos.GetX(), pos.GetY() + r};

	Vector2 capsuleNormal = (tip - base).Normalize();
	Vector2 lineEndOffset = capsuleNormal * radius;
	lineTip = tip - lineEndOffset;
	lineBase = base + lineEndOffset;
}
