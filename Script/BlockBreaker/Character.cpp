#include "Character.h"

/// <summary>
/// �R���X�g���N�^
/// </summary>
/// <param name="pos">���W</param>
/// <param name="size">�摜�T�C�Y</param>
Character::Character(const Vector2& pos, const Vector2 size)
	:GameObject(pos)
{
	graphSize = size;
}
