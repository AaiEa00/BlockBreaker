#include "Collision.h"

/// <summary>
/// 円と2D線分の衝突判定
/// </summary>
/// <param name="cir">円</param>
/// <param name="seg">2D線分</param>
/// <returns>当たっているか</returns>
bool GameMath::Collision::AreCollided(const Circle& circle, const LineSegment2D& segment)
{
	// 2D線分の始点が円と接している
	// もしくは円の内部か
	if ((circle.GetCenter() - segment.GetStart()).Magnitude()
		<= circle.GetRadius())
		return true;

	// 上と同様に終点で
	if ((circle.GetCenter() - segment.GetEnd()).Magnitude()
		<= circle.GetRadius())
		return true;

	// 線分の両端が円の外部の場合

	// 円の中心から線分への最短距離
	float l = segment.GetDirection().Normalize().Cross
				(circle.GetCenter() - segment.GetStart());

	// 最短距離が円の半径以下のとき、当たっている可能性がある
	if (fabs(l) <= circle.GetRadius())
	{
		float start = (circle.GetCenter() - segment.GetStart()).Normalize().Dot(
			segment.GetDirection().Normalize());
		float end = (circle.GetCenter() - segment.GetEnd()).Normalize().Dot(
			segment.GetDirection().Normalize());

		// 上2つの符号が逆であればよい
		if ((start < 0 && 0 < end) || (end < 0 && 0 < start))
			return true;
	}

	return false;
}
