#pragma once

#include "Character.h"

/// <summary>
/// プレイヤー管理クラス
/// </summary>
class Player
	:public Character
{
protected:	// メンバ変数
	int handle = 0;		// グラフィックハンドル

public:		// コンストラクタ
	Player
	(
		const Vector2& pos,
		const Vector2& size,
		const string_view fileName
	);

public:		// インターフェース
	virtual void Update() { cout << "Player::Update()" << endl; };	// 状態更新
	virtual void Draw() { cout << "Player::Draw()" << endl; };		// 描画
};