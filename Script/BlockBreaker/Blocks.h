#pragma once

#include "GameObject.h"
#include <algorithm>

constexpr string_view blocks = "Image/Blocks.png";		// ブロック画像ファイルへのパス
constexpr int blocksAllNum = 4;					// ブロックの総分割数
constexpr int blocksDivisionNum = 2;						// ブロックの縦横分割数
constexpr int blocksSizeWidth = 100;						// ブロックの横幅
constexpr int blocksSizeHeight = 64;						// ブロックの縦幅

class Blocks
	:public GameObject {
private:
	int handles[blocksAllNum];		// 分割した画像ハンドル

public:
	Blocks();
	Blocks
	(
		const Vector2& pos,
		const string_view& fileName
	);
	~Blocks() {};
};