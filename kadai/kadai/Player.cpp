#include "Player.h"
#include <iostream>

Player::Player(std::string name, int ATK) : PlayerParameter(name, ATK) {}

void Player::setName(const std::string& name) 
{
	name_ = name;
}

void Player::setATK(int ATK) 
{
	ATK_ = ATK;
}