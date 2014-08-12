// ================================
//  プレイヤー
// ================================

// プレイヤーヘッダ
#include "Player.h"

Player::Player(){
	// プレイヤーの位置を初期化する
	PlayerReset();
	// 地面
	floor = 500 - 30;
}

Player::~Player(){

}

// 更新
bool Player::Update(){
	// スクロール用変数の計算
	offsetX = x - WINDOW_WIDTH / 4;

	// ジャンプ
	Jump();
	// 移動
	x += 4;

	// クリア判定
	if (x > MAP_SIZE){
		return true;
	}
	else{
		return false;
	}
}

// 描画
void Player::Draw(){
	// プレイヤーの描画
	player = Rect(x - offsetX, y, 30, 30).draw(Palette::Aqua);
}

// ================================ 境界 ================================

// ジャンプ
void Player::Jump(){
	// ジャンプ力
	static int jumpPower = 0;

	// SPACEキーでジャンプ
	if (Input::KeySpace.pressed){
		jumpPower = 8;
	}

	// ジャンプによるy座標更新処理
	y -= jumpPower;
	jumpPower -= 1;

	// 床に着地で静止
	if (y > floor){
		jumpPower = 0;
		y = floor;
	}

	// 天井より上に行かないようにする
	if (y < 0){
		y = 0;
		jumpPower = 0;
	}
}

// プレイヤーのX座標を返す
int Player::getPlayerX(){
	return x;
}

// プレイヤーの位置を初期化する
void Player::PlayerReset(){
	x = 0;
	y = 500 - 30;
}

// プレイヤー情報を返す
Rect Player::getPlayer(){
	return player;
}