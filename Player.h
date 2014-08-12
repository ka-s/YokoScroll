// ================================
//  �v���C���[
// ================================

// ���d�C���N���[�h�h�~
#pragma once

// Siv3D
#include <Siv3D.hpp>
// �萔�w�b�_
#include "Const.h"

// �v���C���[�N���X
class Player{
private:
	// ==== ���ϐ� ====
	// �v���C���[�̉摜
	Rect player;
	// �v���C���[�̍��W
	int x, y;
	// �X�N���[���p�ϐ�
	int offsetX;
	// �n��
	int floor;

	// ==== ���֐� ====
	// �W�����v
	void Jump();

public:
	Player();
	~Player();

	// �X�V
	bool Update();
	// �`��
	void Draw();

	// �v���C���[��X���W��Ԃ�
	int getPlayerX();
	// �v���C���[�̈ʒu������������
	void PlayerReset();
	// �v���C���[����Ԃ�
	Rect getPlayer();
};