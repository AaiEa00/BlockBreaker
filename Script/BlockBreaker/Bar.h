#pragma once

#include "Player.h"
#include "Collision.h"
#include "Utility.h"
using namespace GameMath;

constexpr string_view bar = "Image/Bar.png";	// バーの画像へのパス
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
	Bar(
		Vector2& pos,
		const Vector2& size,
		const std::string_view fileName,
		const float& spd
	);

public:		// インターフェース
	void Update(GameManager& gm);		// 状態更新
	void Draw();		// 描画
};