#include "Utility.h"
#include "Bar.h"
#include "Box.h"
#include "Capsule.h"
#include "Circle.h"
#include "LineSegment.h"
#include "GameManager.h"
#include "Bar.h"

#ifdef _DEBUG
int main(int argc, char* argv[]) 
{
#else
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
#endif // _DEBUG

	if (argc < 2)
		return error;
	else
		assert(argc >= 2);

	// �E�B���h�E���[�h
	ChangeWindowMode(TRUE);
	// HD�掿
	SetGraphMode(screenSizeWidth, screenSizeHeight, colorBitNum);

	if (DxLib_Init() == error)
		return error;

	SetWindowText("�u���b�N����");

	// ����ʂɕ`��
	SetDrawScreen(DX_SCREEN_BACK);

	GameManager* gm = new BlockBreaker(argv[1]);

	while (ProcessMessage() == normal && ClearDrawScreen() == normal)
	{
		// �S�ẴQ�[���I�u�W�F�N�g�̏�Ԃ��X�V
		gm->Update();

		// �S�ẴQ�[���I�u�W�F�N�g��`��
		gm->Draw();

		ScreenFlip();
	}

	// �S�ẴQ�[���I�u�W�F�N�g�����
	delete gm;

	DxLib_End();

	return normal;
}