#pragma once
#include <string>

class PlayerParameter 
{
protected:
	std::string name_ ;
	int ATK_;
public:
	PlayerParameter(std::string name, int ATK) : name_(name), ATK_(ATK) {}
	std::string getName() const;
	int getATK() const;

	virtual void setName(const std::string& name) ;
	virtual void setATK(int ATK);
};



