#pragma once
#include "GameObject.h"

class Character
	:public GameObject 
{
protected:	// メンバー変数
	Vector2 graphSize{ 0.0f, 0.0f };		// 画像サイズ

public:		// コンストラクタ
	Character(const Vector2& pos, const Vector2 size);

public:		// Accessor
	Vector2 GetGraphSize() const { return graphSize; }

public:
	virtual void Update() { cout << "Character::Update()" << endl; };	// 状態更新
	virtual void Draw() { cout << "Character::Draw()" << endl; };		// 描画
};