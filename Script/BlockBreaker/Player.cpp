#include "Player.h"

/// <summary>
/// �R���X�g���N�^
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