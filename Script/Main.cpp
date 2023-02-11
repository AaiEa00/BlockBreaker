#include "DxLib.h"
#include "Utility.h"
#include "Ball.h"

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

	Ball *ball = new Ball{ 0.0f,0.0f };

	while (ProcessMessage() == normal && ClearDrawScreen() == normal)
	{
		ScreenFlip();
	}

	DxLib_End();

	return normal;
}