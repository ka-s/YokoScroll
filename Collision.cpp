// ================================
//  �����蔻��
// ================================

// �����蔻��w�b�_
#include "Collision.h"

Collision::Collision(Rect a, Rect b){
	rectA = a;
	rectB = b;
}

Collision::~Collision(){

}

// ���茋�ʂ�Ԃ�
bool Collision::Judgment(){
	if (rectA.intersects(rectB)){
		return true;
	}
	else{
		return false;
	}
}