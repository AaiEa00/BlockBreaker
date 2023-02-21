#include "Blocks.h"

/// <summary>
/// �f�t�H���g�R���X�g���N�^
/// </summary>
Blocks::Blocks()
	: handles{ 0,0,0,0 }, Character(Vector2::zero, Vector2::zero){}

/// <summary>
/// �R���X�g���N�^
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
/// ��ԍX�V
/// </summary>
/// <param name="gm"></param>
void Blocks::Update(GameManager& gm)
{

}

/// <summary>
/// �`��
/// </summary>
void Blocks::Draw()
{
	for (int i = 0; i < blocksAllNum; i++)
	{
		DrawGraphF(position.GetX(), position.GetY(), handles[i], TRUE);
	}
}
