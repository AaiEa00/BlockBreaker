#pragma once

// 画面
constexpr int screenSizeWidth = 640;		// 横解像度
constexpr int screenSizeHeight = 480;		// 縦解像度
constexpr int colorBitNum = 32;				// カラービット数

// 終了コード
constexpr int normal = 0;					// 正常終了
constexpr int error = -1;					// 異常終了

// データの個数
constexpr int barDataNum = 5;				// バークラス

// 画像ファイルへのパス
constexpr std::string_view barPass = "Image/Bar.png";	// バーの画像へのパス