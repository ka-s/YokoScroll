// ================================
//  �X�e�[�W
// ================================

// �X�e�[�W�w�b�_
#include "Stage.h"

Stage::Stage(){
	// �V�[�h�l��ݒ�
	SeedDefaultRNG(std::random_device()());
	// �u���b�N�̗���������
	BlockReset();
}

Stage::~Stage(){

}

// �X�V&�v���C���[��X���W���擾
void Stage::Update(int x){
	// �X�N���[���p�ϐ��̌v�Z
	offsetX = x - WINDOW_WIDTH / 4;
}

// �`��
void Stage::Draw(){
	// ��
	Rect(0 - offsetX, 500, MAP_SIZE, 300).draw(Palette::Green);
	// �u���b�N�`��
	BlockDraw();
}

// ================================ ���E ================================

// �u���b�N�̗���������
void Stage::BlockReset(){
	for (auto & a : randX){
		a = Random(300, MAP_SIZE - 100);
	}
	for (auto & a : randY){
		a = Random(0, 450);
	}
}

// �u���b�N�`��֐�
void Stage::BlockDraw(){
	for (int i = 0; i < BLOCK_NUM; ++i){
		block[i] = Rect(randX[i] - offsetX, randY[i] , 50, 50).draw(Palette::Brown);
	}
}

// �u���b�N��Ԃ��֐�
Rect Stage::getBlock(int v){
	return block[v];
}