#include "GameScene.h"

GameScene::~GameScene()
{
	delete modelparticle_;

	
}

void GameScene::Initialize()
{
	modelparticle_ = Model::CreateSphere(4,4);
}

void GameScene::Update()
{
}

void GameScene::Draw()
{
}
