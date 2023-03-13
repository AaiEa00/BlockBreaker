#include "Bar.h"

/// <summary>
/// �R���X�g���N�^
/// </summary>
Bar::Bar(const float& spd)
	:Player(barPass)
{

	boundary = new Capsule;
	speed = spd;
}

Bar::~Bar()
{
	delete boundary;
	boundary = nullptr;
}

/// <summary>
/// ��ԍX�V
/// </summary>
void Bar::Update(GameManager* gm)
{
	// ���݂̍��W
	Vector2 pos = boundary->GetPosition();

	// �E�����̓���
	if (GetJoypadInputState(DX_INPUT_PAD1) & PAD_INPUT_RIGHT)
	{
		pos = Vector2::AddX(pos, speed);
		if (gm->CheckCollision(*static_cast<Capsule*>(boundary))) {
			puts("�E����");
			return;
		}
	}
	// �������̓���
	if (GetJoypadInputState(DX_INPUT_PAD1) & PAD_INPUT_LEFT)
	{
		pos = Vector2::AddX(pos, -speed);
		if (gm->CheckCollision(*static_cast<Capsule*>(boundary))) {
			puts("������");
			return;
		}
	}

	boundary->SetPosition(pos);
}

bool Bar::CheckCollision(const GameMath::CollisionDetector& collider, const LineSegment& lineSegment)
{
	return collider.isCollided(*static_cast<Capsule*>(boundary), lineSegment);
}

/// <summary>
/// �`��
/// </summary>
void Bar::Draw()
{
	DrawGraphF(boundary->GetPosition().GetX(), boundary->GetPosition().GetY(), handle, TRUE);
}
