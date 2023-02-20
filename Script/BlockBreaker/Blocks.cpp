#include "Blocks.h"

/// <summary>
/// デフォルトコンストラクタ
/// </summary>
Blocks::Blocks()
	: handles{ 0,0,0,0 }, GameObject(Vector2::zero){}

/// <summary>
/// コンストラクタ
/// </summary>
Blocks::Blocks
(
	const Vector2& pos,
	const string_view& fileName
):GameObject(pos)
{
	LoadDivGraph
	(
		string(fileName).c_str(),
		blocksAllNum,
		blocksDivisionNum,
		blocksDivisionNum,
		blocksSizeWidth,
		blocksSizeHeight,
		handles);
}