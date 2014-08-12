// ================================
//  �v���C���[
// ================================

// �v���C���[�w�b�_
#include "Player.h"

Player::Player(){
	// �v���C���[�̈ʒu������������
	PlayerReset();
	// �n��
	floor = 500 - 30;
}

Player::~Player(){

}

// �X�V
bool Player::Update(){
	// �X�N���[���p�ϐ��̌v�Z
	offsetX = x - WINDOW_WIDTH / 4;

	// �W�����v
	Jump();
	// �ړ�
	x += 4;

	// �N���A����
	if (x > MAP_SIZE){
		return true;
	}
	else{
		return false;
	}
}

// �`��
void Player::Draw(){
	// �v���C���[�̕`��
	player = Rect(x - offsetX, y, 30, 30).draw(Palette::Aqua);
}

// ================================ ���E ================================

// �W�����v
void Player::Jump(){
	// �W�����v��
	static int jumpPower = 0;

	// SPACE�L�[�ŃW�����v
	if (Input::KeySpace.pressed){
		jumpPower = 8;
	}

	// �W�����v�ɂ��y���W�X�V����
	y -= jumpPower;
	jumpPower -= 1;

	// ���ɒ��n�ŐÎ~
	if (y > floor){
		jumpPower = 0;
		y = floor;
	}

	// �V�����ɍs���Ȃ��悤�ɂ���
	if (y < 0){
		y = 0;
		jumpPower = 0;
	}
}

// �v���C���[��X���W��Ԃ�
int Player::getPlayerX(){
	return x;
}

// �v���C���[�̈ʒu������������
void Player::PlayerReset(){
	x = 0;
	y = 500 - 30;
}

// �v���C���[����Ԃ�
Rect Player::getPlayer(){
	return player;
}