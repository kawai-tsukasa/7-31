#pragma once
#include "Stetas.h"

class Player : public PlayerParameter 
{
public:
	Player(std::string name, int ATK) : PlayerParameter(name, ATK) {}

	void setName(const std::string& name) override;
	void setATK(int ATK) override;
};