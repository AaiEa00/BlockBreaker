#include "GameObject.h"

/// <summary>
/// コンストラクタ
/// </summary>
GameObject::GameObject(const Vector2& pos)
{
	position = pos;
	cout << "GameObject::GameObject()"
		<< position.GetX()
		<< ", "
		<< position.GetY()
		<< endl;
}