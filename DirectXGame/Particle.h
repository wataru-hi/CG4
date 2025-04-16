#pragma once

#include "KamataEngine.h"

using namespace KamataEngine;

class Particle
{
public:

	//������
	void Initialize();

	//�X�V
	void Update();

	//�`��
	void Draw();

private:
	WorldTransform worldTransform_;

	Model* model_ = nullptr;
};

