#pragma once

#include "DxLib.h"
#include "Vector2.h"


using namespace std;
using namespace GameMath;

/// <summary>
/// ゲームオブジェクト管理クラス
/// </summary>
class GameObject {
protected:
	Vector2 position;		// 座標

public:
	GameObject();
	GameObject(const Vector2& pos);
	virtual ~GameObject() {};

public:
	virtual void Update() = 0;		// 状態更新
	virtual void Draw() = 0;		// 描画
};