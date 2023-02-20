#pragma once
#include "Vector2.h"

namespace GameMath
{
	/// <summary>
	/// 2D����
	/// </summary>
	class LineSegment2D
	{
	private:	// �����o�[�ϐ�
		Vector2 start{ 0.0f, 0.0f };		// �n�_
		Vector2 end{ 0.0f, 0.0f };			// �I�_
		Vector2 direction{ 0.0f,0.0f };		// �����̕����x�N�g��

	public:		// �R���X�g���N�^
		LineSegment2D() {};
		LineSegment2D
		(
			const Vector2& s,
			const Vector2& e
		);

	public:
		Vector2 GetStart() const { return start; }
		Vector2 GetEnd() const { return end; }
		Vector2 GetDirection() const { return direction; }
		void SetStart(Vector2& v) { start = v; }
		void SetEnd(Vector2& v) { end = v; }
		void SetDirection(Vector2& v) { direction = v; }
	};
}