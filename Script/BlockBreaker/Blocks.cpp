#include "Blocks.h"

Blocks::~Blocks()
{
	delete boundary;
	boundary = nullptr;
}

/// <summary>
/// 状態更新
/// </summary>
/// <param name="gm"></param>
void Blocks::Update(GameManager* gm)
{
	if (gm->_isCollided(*static_cast<Box*>(boundary)))
		delete this;
}

bool Blocks::_isCollided(const GameMath::CollisionDetector& collider, const Circle& circle)
{
	return collider.isCollided(circle , *static_cast<Box*>(boundary));
}

/// <summary>
/// 描画
/// </summary>
void Blocks::Draw()
{
	DrawGraphF(
		boundary->GetPosition().GetX(), 
		boundary->GetPosition().GetY(), 
		handle, 
		TRUE
	);
}
