#include "DxLib.h"
#include "Utility.h"
#include "Shape.h"
#include "GameManager.h"
#include "GameObject.h"
#include <list>
#include <vector>

#ifdef _DEBUG
int main(int argc, char* argv[]) 
{
#else
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
#endif // _DEBUG

	if (argc < 2)
		return error;

	// �E�B���h�E���[�h
	ChangeWindowMode(TRUE);
	// HD�掿
	SetGraphMode(screenSizeWidth, screenSizeHeight, colorBitNum);

	if (DxLib_Init() == error)
		return error;

	SetWindowText("�u���b�N����");

	// ����ʂɕ`��
	SetDrawScreen(DX_SCREEN_BACK);

	// �V�[���ɓo�^����Q�[���I�u�W�F�N�g
	std::list<GameObject*> scene;

	GameManager* gm = new BlockBreaker;

	while (ProcessMessage() == normal && ClearDrawScreen() == normal)
	{
		// �S�ẴQ�[���I�u�W�F�N�g�̏�Ԃ��X�V
		for (auto& objs : scene)
		{
			objs->Update(gm);
		}

		// �S�ẴQ�[���I�u�W�F�N�g��`��
		for (auto& objs : scene)
		{
			objs->Draw();
		}

		ScreenFlip();
	}

	// �S�ẴQ�[���I�u�W�F�N�g�����
	for (auto& objs : scene)
	{
		delete objs;
	}

	DxLib_End();

	return normal;
}