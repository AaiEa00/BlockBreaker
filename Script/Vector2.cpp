#include "Vector2.h"

const GameMath::Vector2 GameMath::Vector2::zero{ 0.0f, 0.0f };

/// <summary>
/// デフォルトコンストラクタ
/// </summary>
GameMath::Vector2::Vector2()
{
	x = y = 0.0f;
}

/// <summary>
/// コンストラクタ
/// </summary>
/// <param name="xx">初期化に使用するx成分</param>
/// <param name="yy">初期化に使用するy成分</param>
GameMath::Vector2::Vector2(float xx, float yy)
{
	x = xx;
	y = yy;
}

/// <summary>
/// コピーコンストラクタ
/// </summary>
/// <param name="vec">コピー元の2次元ベクトル</param>
GameMath::Vector2::Vector2(Vector2& vec)
{
	x = vec.x;
	y = vec.y;
}
