#include "Vector2.h"
using namespace std;
using namespace GameMath;

const Vector2 Vector2::zero{ 0.0f, 0.0f };		// ゼロベクトル

/// <summary>
/// コンストラクタ
/// </summary>
GameMath::Vector2::Vector2(float xx, float yy)
{
	x = xx;
	y = yy;
}

/// <summary>
/// 代入
/// </summary>
Vector2& GameMath::Vector2::operator=(const Vector2& v) throw()
{
	x = v.x;
	y = v.y;
	return *this;
}

/// <summary>
/// 加算代入
/// </summary>
Vector2& GameMath::Vector2::operator+=(const Vector2& v)
{
	x += v.x;
	y += v.y;
	return *this;
}

/// <summary>
/// 減算代入
/// </summary>
Vector2& GameMath::Vector2::operator-=(const Vector2& v)
{
	x -= v.x;
	y -= v.y;
	return *this;
}

/// <summary>
/// 加算
/// </summary>
Vector2 GameMath::Vector2::operator+(const Vector2& v)
{
	Vector2 result = 
	{
		x + v.x,
		y + v.y
	};
	return result;
}

/// <summary>
/// 減算
/// </summary>
Vector2 GameMath::Vector2::operator-(const Vector2& v)
{
	Vector2 result =
	{
		x - v.x,
		y - v.y
	};
	return *this;
}

/// <summary>
/// X軸方向の加算
/// </summary>
Vector2 GameMath::Vector2::AddX(const Vector2& v, float x)
{
	Vector2 result =
	{
		v.x + x,
		v.y + 0.0f
	};
	return result;
}

/// <summary>
/// ベクトルのスカラー
/// </summary>
float GameMath::Vector2::Magnitude()
{
	return sqrt(x * x + y * y);
}

/// <summary>
/// ベクトルの正規化
/// </summary>
Vector2 GameMath::Vector2::Normalize()
{
	float mag = Magnitude();
	Vector2 result =
	{
		x / mag,
		y / mag
	};
	return result;
}

/// <summary>
/// 内積
/// </summary>
float GameMath::Vector2::Dot(const Vector2& v)
{
	return x * v.x + y * v.y;
}

/// <summary>
/// 外積
/// </summary>
float GameMath::Vector2::Cross(const Vector2& v)
{
	return x * v.y - y * v.x;
}

/// <summary>
/// 実数倍
/// </summary>
Vector2 GameMath::operator*(const float f, const Vector2& v)
{
	Vector2 result =
	{
		f * v.x,
		f * v.y
	};
	return result;
}

/// <summary>
/// 実数倍
/// </summary>
Vector2 GameMath::operator*(const Vector2& v, const float f)
{
	Vector2 result =
	{
		f * v.x,
		f * v.y
	};
	return result;
}