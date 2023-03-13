#pragma once
#include "Shape.h"
#include "CollisionDetector.h"

class GameManager;
class CollisionDetector;

/// <summary>
/// ���N���X
/// </summary>
class GameObject
{
protected:	// �����o�ϐ�
	Shape* boundary = nullptr;

public:		// �C���^�[�t�F�[�X
	virtual void Update(GameManager* gm) = 0;		// ��ԍX�V
	
	virtual bool CheckCollision(
		const GameMath::CollisionDetector& collider, 
		const Circle& circle
	) = 0;
	virtual bool CheckCollision(
		const GameMath::CollisionDetector& collider, 
		const Box& box
	) = 0;
	virtual bool CheckCollision(
		const GameMath::CollisionDetector& collider, 
		const LineSegment& lineSegment
	) = 0;
	virtual bool CheckCollision(
		const GameMath::CollisionDetector& collider, 
		const Capsule& capsule
	) = 0;

	virtual void Draw() = 0;						// �`��
};