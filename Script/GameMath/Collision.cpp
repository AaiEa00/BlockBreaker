#include "Collision.h"

/// <summary>
/// �ǂƃI�u�W�F�N�g�̏Փˌ��m
/// </summary>
/// <param name="pos">���W</param>
/// <param name="size">�摜�T�C�Y</param>
/// <returns>�Փ˂��Ă��邩</returns>
int GameMath::Collision::ExistInsideScreen
(
	Vector2& pos,
	const Vector2& size
)
{
	// X�������̏Փ�
	if (pos.GetX() < 0.0f)
		return leftSideOfScreen;
	if (screenSizeWidth < pos.GetX() + size.GetX())
		return rightSideOfScreen;
	// Y�������̏Փ�
	if (pos.GetY() < 0.0f)
		return topOfScreen;
	if (screenSizeHeight < pos.GetY() + size.GetY())
		return bottomOfScreen;

	return 0;
}

/// <summary>
/// �~��2D�����̏Փ˔���
/// </summary>
/// <param name="cir">�~</param>
/// <param name="seg">2D����</param>
/// <returns>�������Ă��邩</returns>
bool GameMath::Collision::AreCollided(const Circle& circle, const LineSegment2D& segment)
{
	// 2D�����̎n�_���~�Ɛڂ��Ă���
	// �������͉~�̓�����
	if ((circle.GetCenter() - segment.GetStart()).Magnitude()
		<= circle.GetRadius())
		return true;

	// ��Ɠ��l�ɏI�_��
	if ((circle.GetCenter() - segment.GetEnd()).Magnitude()
		<= circle.GetRadius())
		return true;

	// �����̗��[���~�̊O���̏ꍇ

	// �~�̒��S��������ւ̍ŒZ����
	float l = segment.GetDirection().Normalize().Cross
				(circle.GetCenter() - segment.GetStart());

	// �ŒZ�������~�̔��a�ȉ��̂Ƃ��A�������Ă���\��������
	if (fabs(l) <= circle.GetRadius())
	{
		float start = (circle.GetCenter() - segment.GetStart()).Normalize().Dot(
			segment.GetDirection().Normalize());
		float end = (circle.GetCenter() - segment.GetEnd()).Normalize().Dot(
			segment.GetDirection().Normalize());

		// ��2�̕������t�ł���΂悢
		if ((start < 0 && 0 < end) || (end < 0 && 0 < start))
			return true;
	}

	return false;
}
