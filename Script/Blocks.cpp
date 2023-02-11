#include "Blocks.h"

/// <summary>
/// デフォルトコンストラクタ
/// </summary>
Blocks::Blocks()
	:Character(Vector2::zero, 0.0f) {
	for (int c : handles) {
		c = 0;
	}
}

/// <summary>
/// コンストラクタ
/// </summary>
Blocks::Blocks
(
	const Vector2& pos, 
	const float& spd, 
	const string_view& fileName
):Character(pos, spd)
{
	// 画像を分割して読み込み
	LoadDivGraph(
		string(fileName).c_str(),
		blocksDivisionTotalCount,
		blocksDivisionNumber,
		blocksDivisionNumber,
		blocksSizeWidth,
		blocksSizeHeight,
		handles
	);
}

void Blocks::Update()
{
}

void Blocks::Draw()
{
}
