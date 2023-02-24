#pragma once

#include <iostream>

namespace GameMath {

	/// <summary>
	/// 2�����x�N�g��
	/// </summary>
	class Vector2
	{
	public:
		static const Vector2 zero;		// �[���x�N�g��

	private:	// �����o�[�ϐ�
		float x = 0;	// x����
		float y = 0;	// y����

	public:		// �R���X�g���N�^
		Vector2(float xx, float yy);

	public:		// Accessor
		float GetX() const {return x;}
		float GetY() const {return y;}
		void SetX(float xx) { x = xx; }
		void SetY(float yy) { y = yy; }

	public:		// ���Z�q�I�[�o�[���[�h
		// �񍀉��Z�q
		Vector2& operator=(const Vector2& v) throw();	// ���
		Vector2& operator+=(const Vector2& v);			// ���Z���
		Vector2& operator-=(const Vector2& v);			// ���Z���
		Vector2 operator+(const Vector2& v);			// ���Z
		Vector2 operator-(const Vector2& v) const;			// ���Z

		friend Vector2 operator*(const float f, const Vector2& v);	// �����{
		friend Vector2 operator*(const Vector2& v, const float f);	// �����{

	public:		// X�������̌v�Z
		static Vector2 AddX(const Vector2& v, float x);		// ���Z

	public:		// �x�N�g�����Z
		float Magnitude();		// �傫��
		Vector2 Normalize();		// ���K��

		float Dot(const Vector2& v);	// ����
		float Cross(const Vector2& v);	// �O��
	};

	// friend�֐��̐錾
	Vector2 operator*(const float f, const Vector2& v);
	Vector2 operator*(const Vector2& v, const float f);
}