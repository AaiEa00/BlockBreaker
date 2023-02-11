#include "GameObject.h"

/// <summary>
/// デフォルトコンストラクタ
/// </summary>
GameObject::GameObject()
{
	position = Vector2::zero;
}

/// <summary>
/// コンストラクタ
/// </summary>
/// <param name="pos">画像ファイルへのパス</param>
GameObject::GameObject(const Vector2& pos)
{
	position = pos;
}