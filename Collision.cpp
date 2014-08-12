// ================================
//  “–‚½‚è”»’è
// ================================

// “–‚½‚è”»’èƒwƒbƒ_
#include "Collision.h"

Collision::Collision(Rect a, Rect b){
	rectA = a;
	rectB = b;
}

Collision::~Collision(){

}

// ”»’èŒ‹‰Ê‚ð•Ô‚·
bool Collision::Judgment(){
	if (rectA.intersects(rectB)){
		return true;
	}
	else{
		return false;
	}
}