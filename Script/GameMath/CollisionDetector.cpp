#include "CollisionDetector.h"

/// <summary>
/// �~�Ƌ�`�̏Փ˔���
/// </summary>
/// <param name="circle">�~</param>
/// <param name="box">��`</param>
/// <returns>�~�Ƌ�`���Փ˂��Ă��邩</returns>
bool GameMath::CollisionDetector::isCollided(
	const Circle& circle, const Box& box)
	const
{
	// ��`�̊e�ӂƉ~�̒��S����Ȃ����x�N�g���̃X�J���[�Ɖ~�̔��a���̔�r
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
/// �~�ƃJ�v�Z���̏Փ˔���
/// </summary>
/// <param name="circle">�~</param>
/// <param name="capsule">�J�v�Z��</param>
/// <returns>�~�ƃJ�v�Z�����Փ˂��Ă��邩</returns>
bool GameMath::CollisionDetector::isCollided(
	const Circle& circle, const Capsule& capsule)
	const
{
	// �~�̒��S����J�v�Z���̎������܂ł̍ŒZ����
	float length = Vector2::Cross(
		(capsule.lineTip - capsule.lineBase	).Normalize(), 
		(circle.center - capsule.tip));
	
	// length�̒l���J�v�Z���Ɖ~�̂��ꂼ��̔��a�𑫂����l��菬������Γ������Ă���
	if (fabs(length) <= capsule.radius + circle.radius)
	{
		return true;
	}

	return false;
}

/// <summary>
/// �~�Ɛ����̏Փ˔���
/// </summary>
/// <param name="circle">�~</param>
/// <param name="seg">����</param>
/// <returns>�~�Ɛ������Փ˂��Ă��邩</returns>
bool GameMath::CollisionDetector::isCollided(
	const Circle& circle, const LineSegment& lineSegment)
const
{
	// 2D�����̎n�_���I�_���~�ƏՓ˂��Ă��邩
	if ((circle.center - lineSegment.startVector2).Magnitude() 
		<= circle.radius)
		return true;

	if ((circle.center - lineSegment.endVector2).Magnitude()
		<= circle.radius)
		return true;

	// �����̗��[���~�̊O���̏ꍇ
	// �~�̒��S��������ւ̍ŒZ����
	float length = Vector2::Cross(
		lineSegment.direction.Normalize(),
		circle.center - lineSegment.startVector2);

	// �ŒZ�������~�̔��a�ȉ��̂Ƃ��A�������Ă���\��������
	if (fabs(length) <= circle.radius)
	{
		float start = Vector2::Dot(
			(circle.center - lineSegment.startVector2).Normalize(),
			lineSegment.direction.Normalize());

		float end = Vector2::Dot(
			(circle.center - lineSegment.endVector2).Normalize(), 
			lineSegment.direction.Normalize());

		// ��2�̕������t�ł���΂悢
		if ((start < 0 && 0 < end) || (end < 0 && 0 < start))
			return true;
	}

	return false;
}

/// <summary>
/// �J�v�Z���Ɛ����̏Փ˔���
/// </summary>
/// <param name="capsule">�J�v�Z��</param>
/// <param name="lineSegment">����</param>
/// <returns>�J�v�Z���Ɛ������Փ˂��Ă��邩</returns>
bool GameMath::CollisionDetector::isCollided(const Capsule& capsule, const LineSegment& lineSegment) const
{
	// ����̂݃o�[�ƕǂƂ̏Փː�p�B�C���̕K�v�L
	// �ŒZ����
	float rightLength = lineSegment.direction.GetX() - capsule.tip.GetX();
	if (rightLength <= epsilon)
		return true;

	float leftLength = capsule.base.GetX() - lineSegment.direction.GetX();
	if (leftLength <= epsilon)
		return true;

	return false;
}
