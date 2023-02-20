#pragma once

#include "DxLib.h"
#include "Vector2.h"
using namespace std;
using namespace GameMath;

/// <summary>
/// 基底クラス
/// </summary>
class GameObject
{
protected:	// メンバ変数
	Vector2 position{0.0f, 0.0f};	// 座標

public:		// コンストラクタ・デストラクタ
	GameObject(const Vector2& pos);

public:		// インターフェース
	virtual void Update() = 0;		// 状態更新
	virtual void Draw() = 0;		// 描画
};