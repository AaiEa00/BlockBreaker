#pragma once

#include "Player.h"
#include "CollisionDetector.h"
#include "Utility.h"
using namespace GameMath;

constexpr std::string_view bar = "Image/Bar.png";	// バーの画像へのパス
constexpr int barWidth = 150;					// バー画像の幅
constexpr int barHeight = 16;					// バー画像の高さ
constexpr float initialBarPositionX = screenSizeWidth / barWidth;

/// <summary>
/// バー管理クラス
/// </summary>
class Bar
	:public Player
{
private:	// メンバ変数
	float speed = 0.0f;		// 移動速度

public:		// コンストラクタ
	Bar():speed(0.0f){}
	Bar(const std::string_view fileName, const float& spd);
	~Bar();

public:		// インターフェース
	void Update(GameManager* gm);		// 状態更新

	bool _isCollided(
		const GameMath::CollisionDetector& collider,
		const Circle& circle
	) {}
	bool _isCollided(
		const GameMath::CollisionDetector& collider,
		const Box& box
	) {}
	bool _isCollided(
		const GameMath::CollisionDetector& collider,
		const LineSegment& lineSegment
	);
	bool _isCollided(
		const GameMath::CollisionDetector& collider,
		const Capsule& capsule
	) {}

	void Draw();		// 描画
};