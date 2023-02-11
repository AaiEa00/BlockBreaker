#pragma once

#include "Character.h"
#include <algorithm>

constexpr std::string_view blocks = "Image/Blocks.png";		// ブロック画像ファイルへのパス
constexpr int blocksDivisionTotalCount = 4;					// ブロックの総分割数
constexpr int blocksDivisionNumber = 2;						// ブロックの縦横分割数
constexpr int blocksSizeWidth = 100;						// ブロックの横幅
constexpr int blocksSizeHeight = 64;						// ブロックの縦幅

class Blocks
	:public Character {
private:
	int handles[blocksDivisionTotalCount];		// 分割した画像ハンドル

public:
	Blocks();
	Blocks(
		const Vector2& pos, 
		const float& spd, 
		const string_view& fileName);
	~Blocks() {};

public:
	void Update();		// 状態更新
	void Draw();		// 描画
};