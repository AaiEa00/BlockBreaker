#pragma once
#include "DxLib.h"
#include "Player.h"
#include <algorithm>

constexpr std::string_view blocks = "Image/GreenBlock.png";		// �u���b�N�摜�t�@�C���ւ̃p�X
constexpr int blocksAllNum = 4;					// �u���b�N�̑�������
constexpr int blocksDivisionNum = 2;						// �u���b�N�̏c��������
constexpr int blocksSizeWidth = 100;						// �u���b�N�̉���
constexpr int blocksSizeHeight = 64;						// �u���b�N�̏c��

class gameManager;

class Blocks 
	:public Player
{
//private:
	//int handles[blocksAllNum]{ 0, 0, 0, 0 };		// ���������摜�n���h��	

public:
	~Blocks();

public:
	void Update(GameManager* gm);		// ��ԍX�V

	bool _isCollided(
		const GameMath::CollisionDetector& collider,
		const Circle& circle
	);
	bool _isCollided(
		const GameMath::CollisionDetector& collider,
		const Box& box
	) {}
	bool _isCollided(
		const GameMath::CollisionDetector& collider,
		const LineSegment& lineSegment
	) {}
	bool _isCollided(
		const GameMath::CollisionDetector& collider,
		const Capsule& capsule
	) {}

	void Draw();						// �`��
};