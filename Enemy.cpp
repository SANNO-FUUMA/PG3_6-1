#include <Novice.h>
#include "Enemy.h"

Enemy::Enemy()
{
	Pos_ = {};
	radius_ = 0;
	speed_ = 0;
	isAlive_ = false;
}

Enemy::Enemy(Vector2 Pos, int S, int R, int isAlive)
{
	Pos_ = Pos;
	radius_ = R;
	speed_ = S;
	isAlive_ = isAlive;
}

void Enemy::Update() {
	Pos_.x += speed_;

	// 画面端に当たったら反対に移動
	if (Pos_.x - radius_ <= 0 || Pos_.x + radius_ >= 1280)speed_ *= -1;
}


void Enemy::Draw() {
	Novice::DrawEllipse((int)Pos_.x, (int)Pos_.y, radius_, radius_, 0.0f, RED, kFillModeSolid);
}
