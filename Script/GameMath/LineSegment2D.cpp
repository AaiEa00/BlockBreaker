#include "LineSegment2D.h"

/// <summary>
/// �R���X�g���N�^
/// </summary>
/// <param name="s">�n�_</param>
/// <param name="e">�I�_</param>
GameMath::LineSegment2D::LineSegment2D(const Vector2& s, const Vector2& e)
{
	start = s;
	end = e;
	direction = end - start;
}
