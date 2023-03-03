#include "CollisionDetector.h"

/// <summary>
/// 円と矩形の衝突判定
/// </summary>
/// <param name="circle">円</param>
/// <param name="box">矩形</param>
/// <returns>円と矩形が衝突しているか</returns>
bool GameMath::CollisionDetector::isCollided(
	const Circle& circle, const Box& box)
	const
{
	// 矩形の各辺と円の中心からなされるベクトルのスカラーと円の半径長の比較
	if (box.leftTop.GetX() - circle.center.GetX() <= circle.radius
		|| circle.center.GetX() - box.rightBottom.GetX() <= circle.radius
		|| box.rightBottom.GetY() - circle.center.GetY() <= circle.radius
		|| circle.center.GetY() - box.leftTop.GetY() <= circle.radius)
	{
		assert(box.leftTop.GetX() - circle.center.GetX() < 0);
		assert(circle.center.GetX() - box.rightBottom.GetX() < 0);
		assert(box.rightBottom.GetY() - circle.center.GetY() < 0);
		assert(circle.center.GetY() - box.leftTop.GetY() < 0);
		return true;
	}
	return false;
}

/// <summary>
/// 円とカプセルの衝突判定
/// </summary>
/// <param name="circle">円</param>
/// <param name="capsule">カプセル</param>
/// <returns>円とカプセルが衝突しているか</returns>
bool GameMath::CollisionDetector::isCollided(
	const Circle& circle, const Capsule& capsule)
	const
{
	// 円の中心からカプセルの持つ線分までの最短距離
	float length = Vector2::Cross(
		(capsule.lineTip - capsule.lineBase	).Normalize(), 
		(circle.center - capsule.tip));
	
	// lengthの値がカプセルと円のそれぞれの半径を足した値より小さければ当たっている
	if (fabs(length) <= capsule.radius + circle.radius)
	{
		return true;
	}

	return false;
}

/// <summary>
/// 円と線分の衝突判定
/// </summary>
/// <param name="circle">円</param>
/// <param name="seg">線分</param>
/// <returns>円と線分が衝突しているか</returns>
bool GameMath::CollisionDetector::isCollided(
	const Circle& circle, const LineSegment& lineSegment)
const
{
	// 2D線分の始点か終点が円と衝突しているか
	if ((circle.center - lineSegment.startVector2).Magnitude() 
		<= circle.radius)
		return true;

	if ((circle.center - lineSegment.endVector2).Magnitude()
		<= circle.radius)
		return true;

	// 線分の両端が円の外部の場合
	// 円の中心から線分への最短距離
	float length = Vector2::Cross(
		lineSegment.direction.Normalize(),
		circle.center - lineSegment.startVector2);

	// 最短距離が円の半径以下のとき、当たっている可能性がある
	if (fabs(length) <= circle.radius)
	{
		float start = Vector2::Dot(
			(circle.center - lineSegment.startVector2).Normalize(),
			lineSegment.direction.Normalize());

		float end = Vector2::Dot(
			(circle.center - lineSegment.endVector2).Normalize(), 
			lineSegment.direction.Normalize());

		// 上2つの符号が逆であればよい
		if ((start < 0 && 0 < end) || (end < 0 && 0 < start))
			return true;
	}

	return false;
}

/// <summary>
/// カプセルと線分の衝突判定
/// </summary>
/// <param name="capsule">カプセル</param>
/// <param name="lineSegment">線分</param>
/// <returns>カプセルと線分が衝突しているか</returns>
bool GameMath::CollisionDetector::isCollided(const Capsule& capsule, const LineSegment& lineSegment) const
{
	// 今回のみバーと壁との衝突専用。修正の必要有
	// 最短距離
	float rightLength = lineSegment.direction.GetX() - capsule.tip.GetX();
	if (rightLength <= epsilon)
		return true;

	float leftLength = capsule.base.GetX() - lineSegment.direction.GetX();
	if (leftLength <= epsilon)
		return true;

	return false;
}
