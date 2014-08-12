// ================================
//  プレイヤー
// ================================

// 多重インクルード防止
#pragma once

// Siv3D
#include <Siv3D.hpp>
// 定数ヘッダ
#include "Const.h"

// プレイヤークラス
class Player{
private:
	// ==== ■変数 ====
	// プレイヤーの画像
	Rect player;
	// プレイヤーの座標
	int x, y;
	// スクロール用変数
	int offsetX;
	// 地面
	int floor;

	// ==== ■関数 ====
	// ジャンプ
	void Jump();

public:
	Player();
	~Player();

	// 更新
	bool Update();
	// 描画
	void Draw();

	// プレイヤーのX座標を返す
	int getPlayerX();
	// プレイヤーの位置を初期化する
	void PlayerReset();
	// プレイヤー情報を返す
	Rect getPlayer();
};