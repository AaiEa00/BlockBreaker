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

	// ウィンドウモード
	ChangeWindowMode(TRUE);
	// HD画質
	SetGraphMode(screenSizeWidth, screenSizeHeight, colorBitNum);

	if (DxLib_Init() == error)
		return error;

	// 裏画面に描画
	SetDrawScreen(DX_SCREEN_BACK);

	Ball *ball = new Ball{ 0.0f,0.0f };

	while (ProcessMessage() == normal && ClearDrawScreen() == normal)
	{
		ScreenFlip();
	}

	DxLib_End();

	return normal;
}