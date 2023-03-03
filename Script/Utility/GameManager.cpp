#include "GameManager.h"

BlockBreaker::BlockBreaker()
{
	for (int i = 0; i < 10; ++i)
	{
		scene.push_back(new Blocks);
	}
	_bar = new Bar;
	scene.push_back(_bar);
	_ball = new Ball;
	scene.push_back(_ball);
}

BlockBreaker::~BlockBreaker()
{
	for (GameObject* obj : scene)
	{
		delete obj;
	}
	scene.clear();
}

void BlockBreaker::Update()
{
	_bar->Update(this);
	_ball->Update(this);
}

bool BlockBreaker::_isCollided(const Circle& circle)
{
	for (GameObject* obj : scene)
	{
		if (((obj != _ball) && (obj != _bar))
			&& obj->_isCollided(collider, circle))
		{
			return true;
		}
	}

	return false;
}

bool BlockBreaker::_isCollided(const Box& box)
{
	for (GameObject* obj : scene)
	{
		if (((obj != _ball) && (obj != _bar))
			&& obj->_isCollided(collider, box))
		{
			return true;
		}
	}

	return false;
}

bool BlockBreaker::_isCollided(const LineSegment& lineSegment)
{
	for (GameObject* obj : scene)
	{
		if (((obj != _ball) && (obj != _bar))
			&& obj->_isCollided(collider, lineSegment))
		{
			return true;
		}
	}

	return false;
}

bool BlockBreaker::_isCollided(const Capsule& capsule)
{
	for (GameObject* obj : scene)
	{
		if (((obj != _ball) && (obj != _bar))
			&& obj->_isCollided(collider, capsule))
		{
			return true;
		}
	}

	return false;
}

void BlockBreaker::Draw()
{
	for (GameObject* obj : scene)
	{
		obj->Update(this);
	}
}
