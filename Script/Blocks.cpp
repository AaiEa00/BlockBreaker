#include "Blocks.h"

/// <summary>
/// �f�t�H���g�R���X�g���N�^
/// </summary>
Blocks::Blocks()
	:Character(Vector2::zero, 0.0f) {
	for (int c : handles) {
		c = 0;
	}
}

/// <summary>
/// �R���X�g���N�^
/// </summary>
Blocks::Blocks
(
	const Vector2& pos, 
	const float& spd, 
	const string_view& fileName
):Character(pos, spd)
{
	// �摜�𕪊����ēǂݍ���
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
