#include "Bar.h"

/// <summary>
/// コンストラクタ
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
/// 状態更新
/// </summary>
void Bar::Update(GameManager* gm)
{
	// 現在の座標
	Vector2 pos = boundary->GetPosition();

	// 右方向の入力
	if (GetJoypadInputState(DX_INPUT_PAD1) & PAD_INPUT_RIGHT)
	{
		pos = Vector2::AddX(pos, speed);
		if (gm->CheckCollision(*static_cast<Capsule*>(boundary))) {
			puts("右入力");
			return;
		}
	}
	// 左方向の入力
	if (GetJoypadInputState(DX_INPUT_PAD1) & PAD_INPUT_LEFT)
	{
		pos = Vector2::AddX(pos, -speed);
		if (gm->CheckCollision(*static_cast<Capsule*>(boundary))) {
			puts("左入力");
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
/// 描画
/// </summary>
void Bar::Draw()
{
	DrawGraphF(boundary->GetPosition().GetX(), boundary->GetPosition().GetY(), handle, TRUE);
}
