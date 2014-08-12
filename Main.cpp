// ================================
//  ���C��
// ================================

// Siv3D
#include <Siv3D.hpp>
// �萔�w�b�_
#include "Const.h"
// ��ʃw�b�_
#include "Screen.h"

// ���C���֐�
void Main(){
	// ==== ���V�X�e�������� ====
	// �^�C�g��
	Window::SetTitle(L"Title");
	// �E�B���h�E�T�C�Y
	Window::Resize(WINDOW_WIDTH, WINDOW_HEIGHT);
	// �I������
	System::SetExitEvent(WindowEvent::EscapeKey);

	// ==== �����낢�돉���� ====
	// ��ʃN���X
	auto s = std::make_shared<Screen>();

	// ==== ���C�����[�v ====
	while (System::Update()){
		// ==== ���X�V ====
		s->Update();

		// ==== ���`�� ====
		s->Draw();
	}
}
