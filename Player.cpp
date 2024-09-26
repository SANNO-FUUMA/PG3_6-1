#include"Player.h"
#include"Novice.h"
#include"Bullet.h"

Player::Player()
{
	pos_ = {};
	speed_ = 0;
}

Player::Player(Vector2 pos, int speed)
{
	pos_ = pos;
	speed_ = speed;
}

Player::~Player()
{
}

void Player::Init()
{
	bullet_ = new Bullet({ pos_,3,30, true });
}

void Player::Update()
{
	bullet_->Update();
}

void Player::Draw()
{
	Novice::DrawEllipse((int)pos_.x, (int)pos_.y, r_, r_, 0.0f, GREEN, kFillModeSolid);
	bullet_->Draw();
}

void Player::MoveRight()
{
	this->pos_.x += this->speed_;
}

void Player::MoveLeft()
{
	this->pos_.x -= this->speed_;
}
