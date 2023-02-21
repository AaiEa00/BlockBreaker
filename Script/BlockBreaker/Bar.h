#pragma once

#include "Player.h"
#include "Collision.h"
#include "Utility.h"
using namespace GameMath;

constexpr string_view bar = "Image/Bar.png";	// �o�[�̉摜�ւ̃p�X
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
	Bar(
		Vector2& pos,
		const Vector2& size,
		const std::string_view fileName,
		const float& spd
	);

public:		// �C���^�[�t�F�[�X
	void Update(GameManager& gm);		// ��ԍX�V
	void Draw();		// �`��
};