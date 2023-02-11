#pragma once

#include "DxLib.h"
#include "Vector2.h"


using namespace std;
using namespace GameMath;

/// <summary>
/// �Q�[���I�u�W�F�N�g�Ǘ��N���X
/// </summary>
class GameObject {
protected:
	Vector2 position;		// ���W

public:
	GameObject();
	GameObject(const Vector2& pos);
	virtual ~GameObject() {};

public:
	virtual void Update() = 0;		// ��ԍX�V
	virtual void Draw() = 0;		// �`��
};