#include "Box.h"

/// <summary>
/// �R���X�g���N�^
/// </summary>
/// <param name="lt">����</param>
/// <param name="rb">�E��</param>
Box::Box(const Vector2& pos, const Vector2& lt, const Vector2& rb)
	:Shape(pos)
{
	leftTop = lt;
	rightBottom = rb;
}
