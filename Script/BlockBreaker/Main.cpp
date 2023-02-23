#include "DxLib.h"
#include "Utility.h"
#include "Shape.h"
#include "GameManager.h"
#include "GameObject.h"
#include <list>
#include <vector>

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

	SetWindowText("ブロック崩し");

	// 裏画面に描画
	SetDrawScreen(DX_SCREEN_BACK);

	// シーンに登録するゲームオブジェクト
	list<GameObject*> scene;
	Vector2 speed{5.0f, 5.0f};
	vector<Vector2> graphSize = { {barWidth, barHeight}, {ballSize, ballSize} };
	vector<Vector2> pos = { 
		{ screenSizeWidth / 2 - barWidth / 2, 400.0f } , 
		{ 50.0f, 20.0f }
	};
	Bar gOBar{ pos.at(0), graphSize.at(0), bar, 10.0f };
	scene.push_back(&gOBar);
	scene.push_back(new Ball(pos.at(1), graphSize.at(1), ball, speed));

	GameManager gm;

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