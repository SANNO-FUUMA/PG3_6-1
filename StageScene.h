#pragma once
#include"IScene.h"
#include"inputHandler.h"
#include"command.h"
#include"Player.h"
#include"Enemy.h"

class StageScene : public IScene {
private:
	InputHandler* inputHandler_ = nullptr;
	ICommand* iCommand_ = nullptr;
	Player* player_;
	Enemy* enemy_;

public:
	StageScene();

	void Init()override;
	void Update(char* keys, char* preKeys)override;
	void Draw()override;
};