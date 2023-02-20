#include "Bar.h"

/// <summary>
/// �R���X�g���N�^
/// </summary>
Bar::Bar
(
	const Vector2& pos, 
	const Vector2& size,
	const std::string_view fileName,
	const float& spd
):Player(pos, size, fileName)
{
	speed = spd;
}

/// <summary>
/// ��ԍX�V
/// </summary>
void Bar::Update()
{
	if (GetJoypadInputState(DX_INPUT_PAD1) & PAD_INPUT_RIGHT)
	{
		position = Vector2::AddX(position, speed);
	}
	if (GetJoypadInputState(DX_INPUT_PAD1) & PAD_INPUT_LEFT)
	{
		position = Vector2::AddX(position, -speed);
	}
}

/// <summary>
/// �`��
/// </summary>
void Bar::Draw()
{
	DrawGraphF(position.GetX(), position.GetY(), handle, TRUE);
}