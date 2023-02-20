#pragma once

#include "Character.h"

/// <summary>
/// �v���C���[�Ǘ��N���X
/// </summary>
class Player
	:public Character
{
protected:	// �����o�ϐ�
	int handle = 0;		// �O���t�B�b�N�n���h��

public:		// �R���X�g���N�^
	Player
	(
		const Vector2& pos,
		const Vector2& size,
		const string_view fileName
	);

public:		// �C���^�[�t�F�[�X
	virtual void Update() { cout << "Player::Update()" << endl; };	// ��ԍX�V
	virtual void Draw() { cout << "Player::Draw()" << endl; };		// �`��
};