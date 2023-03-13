#pragma once
#include <list>
//#include <string>
//#include "Ball.h"
//#include "Blocks.h"
#include "Bar.h"
#include "MyStream.h"

class GameObject;

class GameManager
{
protected:
	std::list<GameObject*> scene;
	GameMath::CollisionDetector collider;

public:
	virtual ~GameManager() { scene.clear(); }

public:
	virtual void Update() = 0;

	virtual bool CheckCollision(const Circle& circle) = 0;
	virtual bool CheckCollision(const Box& box) = 0;
	virtual bool CheckCollision(const LineSegment& lineSegment) = 0;
	virtual bool CheckCollision(const Capsule& capsule) = 0;

	virtual void Draw() = 0;
};

/// <summary>
/// 自作ゲームマネージャー
/// </summary>
class BlockBreaker
	:public GameManager
{
protected:
	//Ball* _ball;
	Bar* _bar;

public:
	BlockBreaker(char*);
	~BlockBreaker();

public:
	void Update();

	bool CheckCollision(const Circle& circle);
	bool CheckCollision(const Box& box);
	bool CheckCollision(const LineSegment& lineSegment);
	bool CheckCollision(const Capsule& capsule);

	void Draw();
};