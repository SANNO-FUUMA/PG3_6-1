#include "StageScene.h"


StageScene::StageScene()
{
}

//初期化処理
void StageScene::Init() {
	inputHandler_ = new InputHandler();

	//Assign command
	inputHandler_->AssignMoveLeftCommand2PressKeyA();
	inputHandler_->AssignMoveRightCommand2PressKeyD();

	//New Player
	player_ = new Player({ {100,100},5 });
	player_->Init();

	//New enemy
	enemy_ = new Enemy();
}

//更新処理
void StageScene::Update(char* keys, char* preKeys) {

	(void)keys;
	(void)preKeys;
	//get input
	iCommand_ = inputHandler_->HandleInput();

	//set command
	if (this->iCommand_) {
		iCommand_->Exec(*player_);
	}

	player_->Update();
}

//描画処理
void StageScene::Draw()
{
	//Novice::DrawBox(0, 0, 1280, 720, 0.0f, 255, kFillModeSolid);
	/*プレイヤーの描画関数*/
	player_->Draw();
	/*敵の描画関数*/
	enemy_->Draw();
}