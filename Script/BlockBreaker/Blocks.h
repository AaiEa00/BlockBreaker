#pragma once
#include "DxLib.h"
#include "Player.h"
#include <algorithm>

constexpr std::string_view blocks = "Image/GreenBlock.png";		// ブロック画像ファイルへのパス
constexpr int blocksAllNum = 4;					// ブロックの総分割数
constexpr int blocksDivisionNum = 2;						// ブロックの縦横分割数
constexpr int blocksSizeWidth = 100;						// ブロックの横幅
constexpr int blocksSizeHeight = 64;						// ブロックの縦幅

class gameManager;

class Blocks 
	:public Player
{
//private:
	//int handles[blocksAllNum]{ 0, 0, 0, 0 };		// 分割した画像ハンドル	

public:
	~Blocks();

public:
	void Update(GameManager* gm);		// 状態更新

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

	void Draw();						// 描画
};