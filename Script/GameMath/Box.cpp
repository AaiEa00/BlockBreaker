#include "Box.h"

/// <summary>
/// �R���X�g���N�^
/// </summary>
/// <param name="lt">����</param>
/// <param name="rb">�E��</param>
Box::Box(const Vector2& lt, const Vector2& rb)
{
	leftTop = lt;
	rightBottom = rb;
}
