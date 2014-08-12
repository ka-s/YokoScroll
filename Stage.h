// ================================
//  �X�e�[�W
// ================================

// ���d�C���N���[�h�h�~
#pragma once

// Siv3D
#include <Siv3D.hpp>
// ����
#include <random>
// �萔�w�b�_
#include "Const.h"

// �X�e�[�W�N���X
class Stage{
private:
	// �u���b�N�p�������W
	std::array<int, BLOCK_NUM> randX;
	std::array<int, BLOCK_NUM> randY;
	// �X�N���[���p�ϐ�
	int offsetX;
	// �u���b�N
	Rect block[BLOCK_NUM];

	// �u���b�N�`��֐�
	void BlockDraw();

public:
	Stage();
	~Stage();

	// �X�V&�v���C���[��X���W���擾
	void Update(int x);
	// �`��
	void Draw();

	// �u���b�N��Ԃ��֐�
	Rect getBlock(int v);
	// �u���b�N�̗���������
	void BlockReset();
};