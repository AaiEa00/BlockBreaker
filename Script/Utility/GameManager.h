#pragma once
#include <list>

#include "Ball.h"
#include "Bar.h"
#include "Blocks.h"
#include "CollisionDetector.h"

class GameObject;
class Player;
class Blocks;

class GameManager
{
protected:
	std::list<GameObject*> scene;
	GameMath::CollisionDetector collider;

public:
	virtual ~GameManager() { scene.clear(); }

public:
	virtual void Update() = 0;

	virtual bool _isCollided(const Circle& circle) = 0;
	virtual bool _isCollided(const Box& box) = 0;
	virtual bool _isCollided(const LineSegment& lineSegment) = 0;
	virtual bool _isCollided(const Capsule& capsule) = 0;

	virtual void Draw() = 0;
};

/// <summary>
/// 自作ゲームマネージャー
/// </summary>
class BlockBreaker :public GameManager
{
protected:
	Ball* _ball;
	Bar* _bar;

public:
	BlockBreaker();
	~BlockBreaker();

public:
	void Update();

	bool _isCollided(const Circle& circle);
	bool _isCollided(const Box& box);
	bool _isCollided(const LineSegment& lineSegment);
	bool _isCollided(const Capsule& capsule);

	void Draw();
};