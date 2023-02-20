#pragma once
#include "GameObject.h"

class Character
	:public GameObject 
{
protected:	// �����o�[�ϐ�
	Vector2 graphSize{ 0.0f, 0.0f };		// �摜�T�C�Y

public:		// �R���X�g���N�^
	Character(const Vector2& pos, const Vector2 size);

public:		// Accessor
	Vector2 GetGraphSize() const { return graphSize; }

public:
	virtual void Update() { cout << "Character::Update()" << endl; };	// ��ԍX�V
	virtual void Draw() { cout << "Character::Draw()" << endl; };		// �`��
};