#pragma once

#include "Player.h"

constexpr string_view ball = "Image/Ball.png";
constexpr int ballSize = 16;

class Ball
	:public Player
{
private:	// メンバー変数
	Vector2 speed {0.0f, 0.0f};		// 移動速度

public:		// コンストラクタ
	Ball
	(
		const Vector2& pos,
		const Vector2& size,
		const string_view fileName,
		const Vector2& spd
	);

public:
	void Update();
	void Draw();
};