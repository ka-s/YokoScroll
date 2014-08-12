// ================================
//  ���
// ================================

// ���d�C���N���[�h�h�~
#pragma once

// Siv3D
#include <Siv3D.hpp>
// iostream
#include <iostream>
// �X�}�[�g�|�C���^
#include <memory>
// �萔�w�b�_
#include "Const.h"
// �X�e�[�W�w�b�_
#include "Stage.h"
// �v���C���[�w�b�_
#include "Player.h"
// �����蔻��w�b�_
#include "Collision.h"

// ��ʃN���X
class Screen{
private:
	// �X�e�[�W
	std::shared_ptr<Stage> stage;
	// �v���C���[
	std::shared_ptr<Player> player;

	// �N���A���p�t�H���g
	Font clear;

	// �����蔻����s���֐�
	void RectAndRectCollision();

public:
	Screen();
	~Screen();

	// �X�V
	void Update();
	// �`��
	void Draw();
};