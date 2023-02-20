#pragma once

#include "DxLib.h"
#include "Vector2.h"
using namespace std;
using namespace GameMath;

/// <summary>
/// ���N���X
/// </summary>
class GameObject
{
protected:	// �����o�ϐ�
	Vector2 position{0.0f, 0.0f};	// ���W

public:		// �R���X�g���N�^�E�f�X�g���N�^
	GameObject(const Vector2& pos);

public:		// �C���^�[�t�F�[�X
	virtual void Update() = 0;		// ��ԍX�V
	virtual void Draw() = 0;		// �`��
};