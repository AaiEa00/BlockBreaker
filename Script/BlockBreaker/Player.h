#pragma once

#include "GameObject.h"
#include "DxLib.h"

/// <summary>
/// �v���C���[�Ǘ��N���X
/// </summary>
class Player :public GameObject
{
protected:	// �����o�ϐ�
	int handle = 0;	// �O���t�B�b�N�n���h��

public:		// �R���X�g���N�^
	Player():handle(0){}
	Player(const std::string_view fileName);
	virtual ~Player();

public:		// �C���^�[�t�F�[�X
	virtual void Update(GameManager* gm) = 0;	// ��ԍX�V

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

	virtual void Draw() = 0;					// �`��
};