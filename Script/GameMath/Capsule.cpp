#include "Capsule.h"

/// <summary>
/// �R���X�g���N�^
/// </summary>
/// <param name="start">�����̎n�_�x�N�g��</param>
/// <param name="end">�����̏I�_�x�N�g��</param>
/// <param name="r">���a</param>
GameMath::Capsule::Capsule(
	const Vector2& start, 
	const Vector2& end, 
	const float r
)
{
	direction = end - start;
	radius = r;
}
