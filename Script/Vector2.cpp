#include "Vector2.h"

const GameMath::Vector2 GameMath::Vector2::zero{ 0.0f, 0.0f };

/// <summary>
/// �f�t�H���g�R���X�g���N�^
/// </summary>
GameMath::Vector2::Vector2()
{
	x = y = 0.0f;
}

/// <summary>
/// �R���X�g���N�^
/// </summary>
/// <param name="xx">�������Ɏg�p����x����</param>
/// <param name="yy">�������Ɏg�p����y����</param>
GameMath::Vector2::Vector2(float xx, float yy)
{
	x = xx;
	y = yy;
}

/// <summary>
/// �R�s�[�R���X�g���N�^
/// </summary>
/// <param name="vec">�R�s�[����2�����x�N�g��</param>
GameMath::Vector2::Vector2(Vector2& vec)
{
	x = vec.x;
	y = vec.y;
}
