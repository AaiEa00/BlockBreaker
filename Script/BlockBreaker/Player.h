#pragma once

#include "GameObject.h"
#include "DxLib.h"

/// <summary>
/// プレイヤー管理クラス
/// </summary>
class Player :public GameObject
{
protected:	// メンバ変数
	int handle = 0;	// グラフィックハンドル

public:		// コンストラクタ
	Player():handle(0){}
	Player(const std::string_view fileName);
	virtual ~Player();

public:		// インターフェース
	virtual void Update(GameManager* gm) = 0;	// 状態更新

	virtual bool CheckCollision(
		const GameMath::CollisionDetector& collider,
		const Circle& circle
	) = 0;
	virtual bool CheckCollision(
		const GameMath::CollisionDetector& collider,
		const Box& box
	) = 0;
	virtual bool CheckCollision(
		const GameMath::CollisionDetector& collider,
		const LineSegment& lineSegment
	) = 0;
	virtual bool CheckCollision(
		const GameMath::CollisionDetector& collider,
		const Capsule& capsule
	) = 0;

	virtual void Draw() = 0;					// 描画
};