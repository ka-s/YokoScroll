// ================================
//  ���
// ================================

// ��ʃw�b�_
#include "Screen.h"

Screen::Screen(){
	// �X�e�[�W
	stage = std::make_shared<Stage>();
	// �v���C���[
	player = std::make_shared<Player>();

	// �N���A���p�t�H���g
	clear = Font(64, L"Buxton Sketch");
}

Screen::~Screen(){
}

// �X�V
void Screen::Update(){
	if (
		// �v���C���[�X�V
		player->Update() == false){
		// �X�e�[�W�X�V
		stage->Update(player->getPlayerX());

		// �����蔻����s���֐�
		RectAndRectCollision();
	}
	else{
		clear(L"CLEAR!").drawCenter(WINDOW_HEIGHT / 2, Palette::Red);
	}
}

// �`��
void Screen::Draw(){
	//�X�e�[�W�`��
	stage->Draw();
	// �v���C���[�X�V
	player->Draw();
}

// ================================ ���E ================================

// �����蔻����s���֐�
void Screen::RectAndRectCollision(){
	for (int i = 0; i < BLOCK_NUM; ++i){
		// �u���b�N�ɏՓ˂������蒼��
		if (Collision(
			player->getPlayer(),
			stage->getBlock(i)).Judgment()){
			// �v���C���[�̈ʒu���ŏ��ɖ߂�
			player->PlayerReset();
			// �u���b�N�̗���������
			stage->BlockReset();
			break;
		}
	}
}