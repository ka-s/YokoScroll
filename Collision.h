// ================================
//  �����蔻��
// ================================

// ���d�C���N���[�h�h�~
#pragma once

// Siv3D
#include <Siv3D.hpp>
// �萔�w�b�_
#include "Const.h"

// �����蔻��N���X
class Collision{
private:
	// �l�pA�Ǝl�pB
	Rect rectA;
	Rect rectB;

public:
	// �Ώۂ�2�̎l�p���Z�b�g
	Collision(Rect a, Rect b);
	~Collision();

	// ���茋�ʂ�Ԃ�
	bool Judgment();
};