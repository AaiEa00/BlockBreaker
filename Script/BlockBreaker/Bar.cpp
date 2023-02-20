#include "Bar.h"

/// <summary>
/// コンストラクタ
/// </summary>
Bar::Bar
(
	Vector2& pos, 
	const Vector2& size,
	const std::string_view fileName,
	const float& spd
):Player(pos, size, fileName)
{
	speed = spd;
}

/// <summary>
/// 状態更新
/// </summary>
void Bar::Update()
{
	Vector2 pos = position;
	if (GetJoypadInputState(DX_INPUT_PAD1) & PAD_INPUT_RIGHT)
	{
		pos = Vector2::AddX(position, speed);
		if (!Collision::ExistInsideScreen(pos, graphSize))
			position = pos;
	}
	if (GetJoypadInputState(DX_INPUT_PAD1) & PAD_INPUT_LEFT)
	{
		pos = Vector2::AddX(position, -speed);
		if (!Collision::ExistInsideScreen(pos, graphSize))
			position = pos;
	}
}

/// <summary>
/// 描画
/// </summary>
void Bar::Draw()
{
	DrawGraphF(position.GetX(), position.GetY(), handle, TRUE);
}
