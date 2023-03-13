#include "GameManager.h"

BlockBreaker::BlockBreaker(char* argv)
{
	//for (int i = 0; i < 10; ++i)
	//{
	//	scene.push_back(new Blocks);
	//}
	std::vector<float> barData = GetCapsuleData(*argv);
	_bar = new Bar(
		barData.at(0), 
		barData.at(1), 
		barData.at(2), 
		barData.at(3), 
		barData.at(4)
	);
	scene.push_back(_bar);
	//_ball = new Ball;
	//scene.push_back(_ball);
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
	//_ball->Update(this);
}

bool BlockBreaker::CheckCollision(const Circle& circle)
{
	for (GameObject* obj : scene)
	{
		if (/*((obj != _ball) &&*/ (obj != _bar)
			&& obj->CheckCollision(collider, circle))
		{
			return true;
		}
	}

	return false;
}

bool BlockBreaker::CheckCollision(const Box& box)
{
	for (GameObject* obj : scene)
	{
		if (/*((obj != _ball) &&*/ obj != _bar
			&& obj->CheckCollision(collider, box))
		{
			return true;
		}
	}

	return false;
}

bool BlockBreaker::CheckCollision(const LineSegment& lineSegment)
{
	for (GameObject* obj : scene)
	{
		if (/*((obj != _ball) && */obj != _bar
			&& obj->CheckCollision(collider, lineSegment))
		{
			return true;
		}
	}

	return false;
}

bool BlockBreaker::CheckCollision(const Capsule& capsule)
{
	for (GameObject* obj : scene)
	{
		if (/*((obj != _ball) && (*/obj != _bar
			&& obj->CheckCollision(collider, capsule))
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
