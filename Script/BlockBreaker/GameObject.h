#pragma once
#include "DxLib.h"
#include "Vector2.h"
#include "GameManager.h"
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

public:		// Accessor
	Vector2 GetPosition() const { return position; }

public:		// インターフェース
	virtual void Update(GameManager& gm) = 0;		// 状態更新
	virtual void Draw() = 0;		// 描画
};