#pragma once

#include "Player.h"
#include "Bar.h"
#include "Collision.h"

constexpr string_view ball = "Image/Ball.png";
constexpr int ballSize = 16;

class Ball
	:public Player
{
private:	// �����o�[�ϐ�
	Vector2 speed {0.0f, 0.0f};		// �ړ����x
	Circle circle{position, ballSize / 2};

public:		// �R���X�g���N�^
	Ball
	(
		const Vector2& pos,
		const Vector2& size,
		const string_view fileName,
		const Vector2& spd
	);

public:
	void Update(Bar barSeg);
	void Draw();
};