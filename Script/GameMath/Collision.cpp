#include "Collision.h"

/// <summary>
/// ‰~‚Æ2Dü•ª‚ÌÕ“Ë”»’è
/// </summary>
/// <param name="cir">‰~</param>
/// <param name="seg">2Dü•ª</param>
/// <returns>“–‚½‚Á‚Ä‚¢‚é‚©</returns>
bool GameMath::Collision::AreCollided(const Circle& circle, const LineSegment2D& segment)
{
	// 2Dü•ª‚Ìn“_‚ª‰~‚ÆÚ‚µ‚Ä‚¢‚é
	// ‚à‚µ‚­‚Í‰~‚Ì“à•”‚©
	if ((circle.GetCenter() - segment.GetStart()).Magnitude()
		<= circle.GetRadius())
		return true;

	// ã‚Æ“¯—l‚ÉI“_‚Å
	if ((circle.GetCenter() - segment.GetEnd()).Magnitude()
		<= circle.GetRadius())
		return true;

	// ü•ª‚Ì—¼’[‚ª‰~‚ÌŠO•”‚Ìê‡

	// ‰~‚Ì’†S‚©‚çü•ª‚Ö‚ÌÅ’Z‹——£
	float l = segment.GetDirection().Normalize().Cross
				(circle.GetCenter() - segment.GetStart());

	// Å’Z‹——£‚ª‰~‚Ì”¼ŒaˆÈ‰º‚Ì‚Æ‚«A“–‚½‚Á‚Ä‚¢‚é‰Â”\«‚ª‚ ‚é
	if (fabs(l) <= circle.GetRadius())
	{
		float start = (circle.GetCenter() - segment.GetStart()).Normalize().Dot(
			segment.GetDirection().Normalize());
		float end = (circle.GetCenter() - segment.GetEnd()).Normalize().Dot(
			segment.GetDirection().Normalize());

		// ã2‚Â‚Ì•„†‚ª‹t‚Å‚ ‚ê‚Î‚æ‚¢
		if ((start < 0 && 0 < end) || (end < 0 && 0 < start))
			return true;
	}

	return false;
}
