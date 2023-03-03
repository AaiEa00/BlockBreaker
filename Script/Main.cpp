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

	// ウィンドウモード
	ChangeWindowMode(TRUE);
	// HD画質
	SetGraphMode(screenSizeWidth, screenSizeHeight, colorBitNum);

	if (DxLib_Init() == error)
		return error;

	SetWindowText("ブロック崩し");

	// 裏画面に描画
	SetDrawScreen(DX_SCREEN_BACK);

	// シーンに登録するゲームオブジェクト
	std::list<GameObject*> scene;

	GameManager* gm = new BlockBreaker;

	while (ProcessMessage() == normal && ClearDrawScreen() == normal)
	{
		// 全てのゲームオブジェクトの状態を更新
		for (auto& objs : scene)
		{
			objs->Update(gm);
		}

		// 全てのゲームオブジェクトを描画
		for (auto& objs : scene)
		{
			objs->Draw();
		}

		ScreenFlip();
	}

	// 全てのゲームオブジェクトを解放
	for (auto& objs : scene)
	{
		delete objs;
	}

	DxLib_End();

	return normal;
}