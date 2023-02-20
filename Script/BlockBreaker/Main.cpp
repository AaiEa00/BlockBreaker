#include "DxLib.h"
#include "Utility.h"
#include "Ball.h"
#include "Bar.h"
#include "Blocks.h"
#include <list>
#include <vector>

#ifdef _DEBUG
int main(void) 
{
#else
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
#endif // _DEBUG

	// �E�B���h�E���[�h
	ChangeWindowMode(TRUE);
	// HD�掿
	SetGraphMode(screenSizeWidth, screenSizeHeight, colorBitNum);

	if (DxLib_Init() == error)
		return error;

	// ����ʂɕ`��
	SetDrawScreen(DX_SCREEN_BACK);

	// �V�[���ɓo�^����Q�[���I�u�W�F�N�g
	list<GameObject*> scene;
	Vector2 speed{5.0f, 5.0f};
	vector<Vector2> pos = { { 10.0f, 10.0f } , {20.0f, 20.0f} };
	vector<Vector2> graphSize = { {barWidth, barHeight}, {ballSize, ballSize} };
	scene.push_back(new Bar(pos.at(0), graphSize.at(0), bar, 10.0f));
	scene.push_back(new Ball(pos.at(1), graphSize.at(1), ball, speed));

	while (ProcessMessage() == normal && ClearDrawScreen() == normal)
	{
		// �S�ẴQ�[���I�u�W�F�N�g�̏�Ԃ��X�V
		for (auto& objs : scene)
		{
			objs->Update();
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