#pragma once
#include "Shape.h"
#include "CollisionDetector.h"

class GameManager;
class CollisionDetector;

/// <summary>
/// 基底クラス
/// </summary>
class GameObject
{
protected:	// メンバ変数
	Shape* boundary = nullptr;

public:		// インターフェース
	virtual void Update(GameManager* gm) = 0;		// 状態更新
	
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

	virtual void Draw() = 0;						// 描画
};