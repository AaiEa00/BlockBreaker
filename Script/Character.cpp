#include "Character.h"

Character::Character()
	:GameObject(Vector2::zero)
{
	speed = 0.0f;
}

Character::Character(const Vector2& pos, const float& spd)
	: GameObject(pos)
{
	speed = spd;
}
