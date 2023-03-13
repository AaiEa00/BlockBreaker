#include "Capsule.h"

/// <summary>
/// �R���X�g���N�^
/// </summary>
/// <param name="tp">�J�v�Z���̒���</param>
/// <param name="bs">�J�v�Z���̒�</param>
/// <param name="r">���a</param>
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
