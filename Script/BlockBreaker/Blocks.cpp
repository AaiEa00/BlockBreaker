#include "Blocks.h"

/// <summary>
/// デフォルトコンストラクタ
/// </summary>
Blocks::Blocks()
	: handles{ 0,0,0,0 }, Character(Vector2::zero, Vector2::zero){}

/// <summary>
/// コンストラクタ
/// </summary>
Blocks::Blocks
(
	const Vector2& pos,
	const Vector2& gSize,
	const string_view& fileName
):Character(pos, gSize)
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

/// <summary>
/// 状態更新
/// </summary>
/// <param name="gm"></param>
void Blocks::Update(GameManager& gm)
{

}

/// <summary>
/// 描画
/// </summary>
void Blocks::Draw()
{
	for (int i = 0; i < blocksAllNum; i++)
	{
		DrawGraphF(position.GetX(), position.GetY(), handles[i], TRUE);
	}
}
