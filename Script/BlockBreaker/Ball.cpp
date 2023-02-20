#include "Ball.h"

/// <summary>
/// �R���X�g���N�^
/// </summary>
Ball::Ball
(
	const Vector2& pos,
	const Vector2& gSize,
	const string_view fileName, 
	const Vector2& spd
):Player(pos, gSize, fileName)
{
	speed = spd;
}

/// <summary>
/// ��ԍX�V
/// </summary>
void Ball::Update(Bar barSeg)
{
	// �ړ���̍��W
	Vector2 pos = position + speed;
	// �����Ɖ~�̓����蔻��p
	Vector2 end{
		barSeg.GetPosition().GetX() + barSeg.GetGraphSize().GetX(), 
		pos.GetY() };
	Vector2 start{ barSeg.GetPosition().GetX(), barSeg.GetPosition().GetY() };
	LineSegment2D seg{ start, end };

	// �{�[���ƃo�[���������Ă�����
	if (Collision::AreCollided(circle, seg))
	{
		printf("AreCollided");
		// Y�������̈ړ����x�𔽓]
		speed.SetY(-speed.GetY());
		return;
	}

	// �ǂƏՓ˂��Ă�����I�u�W�F�N�g����ʓ��Ɏ��߂�
	// X, Y���̑��x���󋵂ɉ����Ĕ��]����
	switch (Collision::ExistInsideScreen(pos, graphSize))
	{
	case leftSideOfScreen:
		position.SetX(0.0f);
		speed.SetX(-speed.GetX());
		return;
	case rightSideOfScreen:
		position.SetX(screenSizeWidth - graphSize.GetX());
		speed.SetX(-speed.GetX());
		return;
	case topOfScreen:
		position.SetY(0.0f);
		speed.SetY(-speed.GetY());
		return;
	case bottomOfScreen:
		position.SetY(screenSizeHeight - graphSize.GetY());
		speed.SetY(-speed.GetY());
		return;
	default:
		break;
	}

	// ���Ƃ��Փ˂��Ă��Ȃ������炻�̂܂܈ړ�����
	position = pos;
}

/// <summary>
/// �`��
/// </summary>
void Ball::Draw()
{
	DrawGraphF(position.GetX(), position.GetY(), handle, TRUE);
}
