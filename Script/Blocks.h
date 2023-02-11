#pragma once

#include "Character.h"
#include <algorithm>

constexpr std::string_view blocks = "Image/Blocks.png";		// �u���b�N�摜�t�@�C���ւ̃p�X
constexpr int blocksDivisionTotalCount = 4;					// �u���b�N�̑�������
constexpr int blocksDivisionNumber = 2;						// �u���b�N�̏c��������
constexpr int blocksSizeWidth = 100;						// �u���b�N�̉���
constexpr int blocksSizeHeight = 64;						// �u���b�N�̏c��

class Blocks
	:public Character {
private:
	int handles[blocksDivisionTotalCount];		// ���������摜�n���h��

public:
	Blocks();
	Blocks(
		const Vector2& pos, 
		const float& spd, 
		const string_view& fileName);
	~Blocks() {};

public:
	void Update();		// ��ԍX�V
	void Draw();		// �`��
};