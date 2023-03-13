#pragma once

#include "Player.h"
#include "CollisionDetector.h"
#include "Utility.h"
#include "DxLib.h"
using namespace GameMath;

class GameManager;

/// <summary>
/// バー管理クラス
/// </summary>
class Bar
	:public Player
{
private:	// メンバ変数
	float speed = 0.0f;		// 移動速度

public:		// コンストラクタ
	Bar() :speed(0.0f) {}
	Bar(const float& spd);
	~Bar();

public:		// インターフェース
	void Update(GameManager* gm);		// 状態更新

	bool CheckCollision(
		const GameMath::CollisionDetector& collider,
		const Circle& circle
	) {
		return true;
	}

	bool CheckCollision(
		const GameMath::CollisionDetector& collider,
		const Box& box
	) {
		return true;
	}

	bool CheckCollision(
		const GameMath::CollisionDetector& collider,
		const LineSegment& lineSegment
	);

	bool CheckCollision(
		const GameMath::CollisionDetector& collider,
		const Capsule& capsule
	) {
		return true;
	}

	void Draw();		// 描画
};