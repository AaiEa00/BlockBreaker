#pragma once

#include "Player.h"
#include "Bar.h"
#include "CollisionDetector.h"

constexpr std::string_view ball = "Image/Ball.png";
constexpr int ballSize = 16;

class GameManager;

class Ball :public Player
{
private:	// メンバー変数
	Vector2 speed {0.0f, 0.0f};		// 移動速度

public:		// コンストラクタ
	Ball():speed(0.0f, 0.0f){}
	Ball(const std::string_view fileName, const Vector2& spd);
	~Ball();

public:
	void Update(GameManager* gm);

	bool _isCollided(
		const GameMath::CollisionDetector& collider,
		const Circle& circle
	) {};
	bool _isCollided(
		const GameMath::CollisionDetector& collider,
		const Box& box
	);
	bool _isCollided(
		const GameMath::CollisionDetector& collider,
		const LineSegment& lineSegment
	);
	bool _isCollided(
		const GameMath::CollisionDetector& collider,
		const Capsule& capsule
	);

	void Draw();
};