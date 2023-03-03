#include "LineSegment.h"

/// <summary>
/// �R���X�g���N�^
/// </summary>
/// <param name="s">�n�_�ʒu</param>
/// <param name="e">�I�_�ʒu</param>
GameMath::LineSegment::LineSegment(
	const Vector2& pos, 
	const Vector2& s, 
	const Vector2& e
):Shape(pos)
{
	startVector2 = s;
	endVector2 = e;
	direction = e - s;
}
