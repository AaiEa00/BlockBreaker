#include "Player.h"

/// <summary>
/// �R���X�g���N�^
/// </summary>
Player::Player(const std::string_view fileName)
{
	handle = LoadGraph(std::string(fileName).c_str());
}

Player::~Player()
{
	delete boundary;
	boundary = nullptr;
}