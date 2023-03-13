#pragma once
#include "Shape.h"

namespace GameMath
{
	class Capsule : public Shape
	{
		friend class CollisionDetector;

	private:
		Vector2 tip{ 0.0f, 0.0f };		// �J�v�Z���̉E�[
		Vector2 base{ 0.0f, 0.0f };		// �J�v�Z���̍��[
		Vector2 lineTip{ 0.0f, 0.0f };	// �����̒[tip��
		Vector2 lineBase{ 0.0f, 0.0f };	// �����̒[base��
		float radius{ 0.0f };			// ���a

	public:
		// �R���X�g���N�^
		Capsule()
			:tip(0.0f, 0.0f), 
			base(0.0f, 0.0f), 
			lineTip(0.0f, 0.0f), 
			lineBase(0.0f, 0.0f), 
			radius(0.0f){}
		Capsule(
			const Vector2& pos,
			const Vector2& tp,
			const float r
		);

	public:
		Vector2 GetLineTip() { return lineTip; }
		Vector2 GetLineBase() { return lineBase; }
		float GetRadius() { return radius; }
	};
}