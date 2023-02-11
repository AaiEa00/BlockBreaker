#include "Player.h"

Player::Player()
	:Character(Vector2::zero, 0)
{
	for (auto& c : handles) 
	{
		c = 0;
	}
}

Player::Player(const Vector2& pos, const int& b, const string_view& fileName)
	:Character(pos, b)
{
	LoadDivGraph(
		string(fileName).c_str(), blocksDivisionTotalCount,
		blocksDivisionNumber, blocksDivisionNumber,
		blocksSizeWidth, blocksSizeHeight,
		handles);

}
