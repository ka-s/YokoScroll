// ================================
//  ステージ
// ================================

// 多重インクルード防止
#pragma once

// Siv3D
#include <Siv3D.hpp>
// 乱数
#include <random>
// 定数ヘッダ
#include "Const.h"

// ステージクラス
class Stage{
private:
	// ブロック用乱数座標
	std::array<int, BLOCK_NUM> randX;
	std::array<int, BLOCK_NUM> randY;
	// スクロール用変数
	int offsetX;
	// ブロック
	Rect block[BLOCK_NUM];

	// ブロック描画関数
	void BlockDraw();

public:
	Stage();
	~Stage();

	// 更新&プレイヤーのX座標を取得
	void Update(int x);
	// 描画
	void Draw();

	// ブロックを返す関数
	Rect getBlock(int v);
	// ブロックの乱数初期化
	void BlockReset();
};