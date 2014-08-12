// ================================
//  ステージ
// ================================

// ステージヘッダ
#include "Stage.h"

Stage::Stage(){
	// シード値を設定
	SeedDefaultRNG(std::random_device()());
	// ブロックの乱数初期化
	BlockReset();
}

Stage::~Stage(){

}

// 更新&プレイヤーのX座標を取得
void Stage::Update(int x){
	// スクロール用変数の計算
	offsetX = x - WINDOW_WIDTH / 4;
}

// 描画
void Stage::Draw(){
	// 床
	Rect(0 - offsetX, 500, MAP_SIZE, 300).draw(Palette::Green);
	// ブロック描画
	BlockDraw();
}

// ================================ 境界 ================================

// ブロックの乱数初期化
void Stage::BlockReset(){
	for (auto & a : randX){
		a = Random(300, MAP_SIZE - 100);
	}
	for (auto & a : randY){
		a = Random(0, 450);
	}
}

// ブロック描画関数
void Stage::BlockDraw(){
	for (int i = 0; i < BLOCK_NUM; ++i){
		block[i] = Rect(randX[i] - offsetX, randY[i] , 50, 50).draw(Palette::Brown);
	}
}

// ブロックを返す関数
Rect Stage::getBlock(int v){
	return block[v];
}