// ================================
//  当たり判定
// ================================

// 当たり判定ヘッダ
#include "Collision.h"

Collision::Collision(Rect a, Rect b){
	rectA = a;
	rectB = b;
}

Collision::~Collision(){

}

// 判定結果を返す
bool Collision::Judgment(){
	if (rectA.intersects(rectB)){
		return true;
	}
	else{
		return false;
	}
}