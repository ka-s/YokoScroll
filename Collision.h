// ================================
//  当たり判定
// ================================

// 多重インクルード防止
#pragma once

// Siv3D
#include <Siv3D.hpp>
// 定数ヘッダ
#include "Const.h"

// 当たり判定クラス
class Collision{
private:
	// 四角Aと四角B
	Rect rectA;
	Rect rectB;

public:
	// 対象の2つの四角をセット
	Collision(Rect a, Rect b);
	~Collision();

	// 判定結果を返す
	bool Judgment();
};