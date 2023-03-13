#include "Ball.h"

/// <summary>
/// �R���X�g���N�^
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
/// ��ԍX�V
/// </summary>
void Ball::Update(GameManager* gm)
{
	// �ړ���̍��W
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
/// �`��
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
