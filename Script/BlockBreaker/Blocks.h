#pragma once

#include "Character.h"
#include <algorithm>

constexpr string_view blocks = "Image/Blocks.png";		// �u���b�N�摜�t�@�C���ւ̃p�X
constexpr int blocksAllNum = 4;					// �u���b�N�̑�������
constexpr int blocksDivisionNum = 2;						// �u���b�N�̏c��������
constexpr int blocksSizeWidth = 100;						// �u���b�N�̉���
constexpr int blocksSizeHeight = 64;						// �u���b�N�̏c��

class Blocks
	:public Character {
private:
	int handles[blocksAllNum];		// ���������摜�n���h��

public:
	Blocks();
	Blocks
	(
		const Vector2& pos,
		const Vector2& gSize,
		const string_view& fileName
	);
	~Blocks() {};

public:
	void Update(GameManager& gm);		// ��ԍX�V
	void Draw();						// �`��
};