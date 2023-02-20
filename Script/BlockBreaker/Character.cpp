#include "Character.h"

/// <summary>
/// コンストラクタ
/// </summary>
/// <param name="pos">座標</param>
/// <param name="size">画像サイズ</param>
Character::Character(const Vector2& pos, const Vector2 size)
	:GameObject(pos)
{
	graphSize = size;
}
