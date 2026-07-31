#pragma once

class PlayerHP 
{
public:
	PlayerHP(int* HP);

	~PlayerHP();

	void set(int value) const;

	int get() 
	{
		return *HP_;
	}

private:
	int* HP_ = nullptr;
};
