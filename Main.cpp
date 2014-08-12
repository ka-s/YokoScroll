// ================================
//  メイン
// ================================

// Siv3D
#include <Siv3D.hpp>
// 定数ヘッダ
#include "Const.h"
// 画面ヘッダ
#include "Screen.h"

// メイン関数
void Main(){
	// ==== ■システム初期化 ====
	// タイトル
	Window::SetTitle(L"Title");
	// ウィンドウサイズ
	Window::Resize(WINDOW_WIDTH, WINDOW_HEIGHT);
	// 終了条件
	System::SetExitEvent(WindowEvent::EscapeKey);

	// ==== ■いろいろ初期化 ====
	// 画面クラス
	auto s = std::make_shared<Screen>();

	// ==== メインループ ====
	while (System::Update()){
		// ==== ■更新 ====
		s->Update();

		// ==== ■描画 ====
		s->Draw();
	}
}
