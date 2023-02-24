#include "Capsule.h"

/// <summary>
/// コンストラクタ
/// </summary>
/// <param name="start">線分の始点ベクトル</param>
/// <param name="end">線分の終点ベクトル</param>
/// <param name="r">半径</param>
GameMath::Capsule::Capsule(
	const Vector2& start, 
	const Vector2& end, 
	const float r
)
{
	direction = end - start;
	radius = r;
}
