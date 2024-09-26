#pragma once
#include <Vector2.h>
#include "bullet.h"

class Player {
private:
	Bullet* bullet_;
	Vector2 pos_;
	int r_ = 30;
	int speed_;

public:
	Player();
	Player(Vector2 pos, int speed);
	~Player();

	void Init();
	void Update();
	void Draw();

	//メンバ関数
	void MoveRight();
	void MoveLeft();
};