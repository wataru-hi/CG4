#pragma once

#include "KamataEngine.h"

using namespace KamataEngine;

class Particle
{
public:

	//‰Šú‰»
	void Initialize();

	//XV
	void Update();

	//•`‰æ
	void Draw();

private:
	WorldTransform worldTransform_;

	Model* model_ = nullptr;
};

