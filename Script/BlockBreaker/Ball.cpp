#include "Ball.h"

/// <summary>
/// �R���X�g���N�^
/// </summary>
Ball::Ball
(
	const Vector2& pos,
	const Vector2& size,
	const string_view fileName, 
	const Vector2& spd
):Player(pos, size, fileName)
{
	speed = spd;
	cout << speed.GetX() << ", " << speed.GetY() << endl;
}

/// <summary>
/// ��ԍX�V
/// </summary>
void Ball::Update()
{
	position += speed;
}

/// <summary>
/// �`��
/// </summary>
void Ball::Draw()
{
	DrawGraphF(position.GetX(), position.GetY(), handle, TRUE);
}
