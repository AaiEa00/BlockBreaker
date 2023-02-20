#include "Blocks.h"

/// <summary>
/// �f�t�H���g�R���X�g���N�^
/// </summary>
Blocks::Blocks()
	: handles{ 0,0,0,0 }, GameObject(Vector2::zero){}

/// <summary>
/// �R���X�g���N�^
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