// ================================
//  画面
// ================================

// 多重インクルード防止
#pragma once

// Siv3D
#include <Siv3D.hpp>
// iostream
#include <iostream>
// スマートポインタ
#include <memory>
// 定数ヘッダ
#include "Const.h"
// ステージヘッダ
#include "Stage.h"
// プレイヤーヘッダ
#include "Player.h"
// 当たり判定ヘッダ
#include "Collision.h"

// 画面クラス
class Screen{
private:
	// ステージ
	std::shared_ptr<Stage> stage;
	// プレイヤー
	std::shared_ptr<Player> player;

	// クリア時用フォント
	Font clear;

	// 当たり判定を行う関数
	void RectAndRectCollision();

public:
	Screen();
	~Screen();

	// 更新
	void Update();
	// 描画
	void Draw();
};