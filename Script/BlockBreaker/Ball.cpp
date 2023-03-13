#include "Ball.h"

/// <summary>
/// コンストラクタ
/// </summary>
Ball::Ball(const std::string_view fileName, const Vector2& spd)
	:Player(fileName)
{
	speed = spd;
	boundary = new Circle;
}

Ball::~Ball()
{
	delete boundary;
	boundary = nullptr;
}

/// <summary>
/// 状態更新
/// </summary>
void Ball::Update(GameManager* gm)
{
	// 移動後の座標
	Vector2 pos = boundary->GetPosition() + speed;
	if (gm->_isCollided(*static_cast<Circle*>(boundary)))
		printf("Ball::Update");
	else
		boundary->SetPosition(pos);
}

bool Ball::_isCollided(
	const GameMath::CollisionDetector& collider, 
	const Box& box
)
{
	return collider.isCollided(*static_cast<Circle*>(boundary), box);
}

bool Ball::_isCollided(
	const GameMath::CollisionDetector& collider, 
	const LineSegment& lineSegment
)
{
	return collider.isCollided(*static_cast<Circle*>(boundary), lineSegment);
}

bool Ball::_isCollided(const GameMath::CollisionDetector& collider, const Capsule& capsule)
{
	return collider.isCollided(*static_cast<Circle*>(boundary), capsule);
}


/// <summary>
/// 描画
/// </summary>
void Ball::Draw()
{
	DrawGraphF(
		boundary->GetPosition().GetX(), 
		boundary->GetPosition().GetY(),	
		handle, 
		TRUE
	);
}
