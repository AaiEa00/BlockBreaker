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

	// ウィンドウモード
	ChangeWindowMode(TRUE);
	// HD画質
	SetGraphMode(screenSizeWidth, screenSizeHeight, colorBitNum);

	if (DxLib_Init() == error)
		return error;

	SetWindowText("ブロック崩し");

	// 裏画面に描画
	SetDrawScreen(DX_SCREEN_BACK);

	GameManager* gm = new BlockBreaker(argv[1]);

	while (ProcessMessage() == normal && ClearDrawScreen() == normal)
	{
		// 全てのゲームオブジェクトの状態を更新
		gm->Update();

		// 全てのゲームオブジェクトを描画
		gm->Draw();

		ScreenFlip();
	}

	// 全てのゲームオブジェクトを解放
	delete gm;

	DxLib_End();

	return normal;
}