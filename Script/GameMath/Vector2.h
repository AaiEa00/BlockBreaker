#pragma once

#include <iostream>

namespace GameMath {

	/// <summary>
	/// 2次元ベクトル
	/// </summary>
	class Vector2
	{
	public:
		static const Vector2 zero;		// ゼロベクトル

	private:	// メンバー変数
		float x = 0;	// x成分
		float y = 0;	// y成分

	public:		// コンストラクタ
		Vector2(float xx, float yy);

	public:		// Accessor
		float GetX() const {return x;}
		float GetY() const {return y;}
		void SetX(float xx) { x = xx; }
		void SetY(float yy) { y = yy; }

	public:		// 演算子オーバーロード
		// 二項演算子
		Vector2& operator=(const Vector2& v) throw();	// 代入
		Vector2& operator+=(const Vector2& v);			// 加算代入
		Vector2& operator-=(const Vector2& v);			// 減算代入
		Vector2 operator+(const Vector2& v);			// 加算
		Vector2 operator-(const Vector2& v) const;			// 減算

		friend Vector2 operator*(const float f, const Vector2& v);	// 実数倍
		friend Vector2 operator*(const Vector2& v, const float f);	// 実数倍

	public:		// X軸方向の計算
		static Vector2 AddX(const Vector2& v, float x);		// 加算

	public:		// ベクトル演算
		float Magnitude();		// 大きさ
		Vector2 Normalize();		// 正規化

		float Dot(const Vector2& v);	// 内積
		float Cross(const Vector2& v);	// 外積
	};

	// friend関数の宣言
	Vector2 operator*(const float f, const Vector2& v);
	Vector2 operator*(const Vector2& v, const float f);
}