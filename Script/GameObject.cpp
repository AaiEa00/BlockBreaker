#include "GameObject.h"

/// <summary>
/// �f�t�H���g�R���X�g���N�^
/// </summary>
GameObject::GameObject()
{
	position = Vector2::zero;
}

/// <summary>
/// �R���X�g���N�^
/// </summary>
/// <param name="pos">�摜�t�@�C���ւ̃p�X</param>
GameObject::GameObject(const Vector2& pos)
{
	position = pos;
}