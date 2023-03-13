#pragma once

#include "Player.h"
#include "CollisionDetector.h"
#include "Utility.h"
#include "DxLib.h"
using namespace GameMath;

class GameManager;

/// <summary>
/// �o�[�Ǘ��N���X
/// </summary>
class Bar
	:public Player
{
private:	// �����o�ϐ�
	float speed = 0.0f;		// �ړ����x

public:		// �R���X�g���N�^
	Bar() :speed(0.0f) {}
	Bar(const float& spd);
	~Bar();

public:		// �C���^�[�t�F�[�X
	void Update(GameManager* gm);		// ��ԍX�V

	bool CheckCollision(
		const GameMath::CollisionDetector& collider,
		const Circle& circle
	) {
		return true;
	}

	bool CheckCollision(
		const GameMath::CollisionDetector& collider,
		const Box& box
	) {
		return true;
	}

	bool CheckCollision(
		const GameMath::CollisionDetector& collider,
		const LineSegment& lineSegment
	);

	bool CheckCollision(
		const GameMath::CollisionDetector& collider,
		const Capsule& capsule
	) {
		return true;
	}

	void Draw();		// �`��
};