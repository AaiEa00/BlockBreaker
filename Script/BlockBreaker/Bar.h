#pragma once

#include "Player.h"
#include "CollisionDetector.h"
#include "Utility.h"
using namespace GameMath;

constexpr std::string_view bar = "Image/Bar.png";	// �o�[�̉摜�ւ̃p�X
constexpr int barWidth = 150;					// �o�[�摜�̕�
constexpr int barHeight = 16;					// �o�[�摜�̍���
constexpr float initialBarPositionX = screenSizeWidth / barWidth;

/// <summary>
/// �o�[�Ǘ��N���X
/// </summary>
class Bar
	:public Player
{
private:	// �����o�ϐ�
	float speed = 0.0f;		// �ړ����x

public:		// �R���X�g���N�^
	Bar():speed(0.0f){}
	Bar(const std::string_view fileName, const float& spd);
	~Bar();

public:		// �C���^�[�t�F�[�X
	void Update(GameManager* gm);		// ��ԍX�V

	bool _isCollided(
		const GameMath::CollisionDetector& collider,
		const Circle& circle
	) {}
	bool _isCollided(
		const GameMath::CollisionDetector& collider,
		const Box& box
	) {}
	bool _isCollided(
		const GameMath::CollisionDetector& collider,
		const LineSegment& lineSegment
	);
	bool _isCollided(
		const GameMath::CollisionDetector& collider,
		const Capsule& capsule
	) {}

	void Draw();		// �`��
};