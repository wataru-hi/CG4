#include <Windows.h>

#include "KamataEngine.h"
#include "Scene/GameScene.h"

using namespace KamataEngine;

// Windowsアプリでのエントリーポイント(main関数)
int WINAPI WinMain(_In_ HINSTANCE, _In_opt_ HINSTANCE, _In_ LPSTR, _In_ int) {
	
	//	エンジンの初期化
	KamataEngine::Initialize(L"LE3D_13_ヒガ_ワタル");

	DirectXCommon* dxCommon = DirectXCommon::GetInstance();

	GameScene* gameScene = new GameScene();
	gameScene->Initialize();

	while (true)
	{
		//エンジンの出力
		if (KamataEngine::Update())
		{
			break;
		}

		gameScene->Update();

		dxCommon->PreDraw();

		gameScene->Draw();

		dxCommon->PostDraw();
	}

	delete gameScene;
	gameScene = nullptr;

	KamataEngine::Finalize();

	return 0;
}
