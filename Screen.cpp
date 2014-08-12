// ================================
//  画面
// ================================

// 画面ヘッダ
#include "Screen.h"

Screen::Screen(){
	// ステージ
	stage = std::make_shared<Stage>();
	// プレイヤー
	player = std::make_shared<Player>();

	// クリア時用フォント
	clear = Font(64, L"Buxton Sketch");
}

Screen::~Screen(){
}

// 更新
void Screen::Update(){
	if (
		// プレイヤー更新
		player->Update() == false){
		// ステージ更新
		stage->Update(player->getPlayerX());

		// 当たり判定を行う関数
		RectAndRectCollision();
	}
	else{
		clear(L"CLEAR!").drawCenter(WINDOW_HEIGHT / 2, Palette::Red);
	}
}

// 描画
void Screen::Draw(){
	//ステージ描画
	stage->Draw();
	// プレイヤー更新
	player->Draw();
}

// ================================ 境界 ================================

// 当たり判定を行う関数
void Screen::RectAndRectCollision(){
	for (int i = 0; i < BLOCK_NUM; ++i){
		// ブロックに衝突したらやり直し
		if (Collision(
			player->getPlayer(),
			stage->getBlock(i)).Judgment()){
			// プレイヤーの位置を最初に戻す
			player->PlayerReset();
			// ブロックの乱数初期化
			stage->BlockReset();
			break;
		}
	}
}