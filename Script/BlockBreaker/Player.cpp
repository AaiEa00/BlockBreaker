#include "Player.h"

/// <summary>
/// コンストラクタ
/// </summary>
Player::Player
(
	const Vector2& pos, 
	const Vector2& size,
	const string_view fileName
):Character(pos, size)
{
	handle = LoadGraph(string(fileName).c_str());
}