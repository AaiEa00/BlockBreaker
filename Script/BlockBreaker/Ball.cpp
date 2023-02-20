#include "Ball.h"

/// <summary>
/// コンストラクタ
/// </summary>
Ball::Ball
(
	const Vector2& pos,
	const Vector2& gSize,
	const string_view fileName, 
	const Vector2& spd
):Player(pos, gSize, fileName)
{
	speed = spd;
}

/// <summary>
/// 状態更新
/// </summary>
void Ball::Update(Bar barSeg)
{
	// 移動後の座標
	Vector2 pos = position + speed;
	// 線分と円の当たり判定用
	Vector2 end{
		barSeg.GetPosition().GetX() + barSeg.GetGraphSize().GetX(), 
		pos.GetY() };
	Vector2 start{ barSeg.GetPosition().GetX(), barSeg.GetPosition().GetY() };
	LineSegment2D seg{ start, end };

	// ボールとバーが当たっていたら
	if (Collision::AreCollided(circle, seg))
	{
		printf("AreCollided");
		// Y軸方向の移動速度を反転
		speed.SetY(-speed.GetY());
		return;
	}

	// 壁と衝突していたらオブジェクトを画面内に収めて
	// X, Y軸の速度を状況に応じて反転する
	switch (Collision::ExistInsideScreen(pos, graphSize))
	{
	case leftSideOfScreen:
		position.SetX(0.0f);
		speed.SetX(-speed.GetX());
		return;
	case rightSideOfScreen:
		position.SetX(screenSizeWidth - graphSize.GetX());
		speed.SetX(-speed.GetX());
		return;
	case topOfScreen:
		position.SetY(0.0f);
		speed.SetY(-speed.GetY());
		return;
	case bottomOfScreen:
		position.SetY(screenSizeHeight - graphSize.GetY());
		speed.SetY(-speed.GetY());
		return;
	default:
		break;
	}

	// 何とも衝突していなかったらそのまま移動する
	position = pos;
}

/// <summary>
/// 描画
/// </summary>
void Ball::Draw()
{
	DrawGraphF(position.GetX(), position.GetY(), handle, TRUE);
}
