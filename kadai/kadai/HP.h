#pragma once

class PlayerHP 
{
public:
    PlayerHP(int* HP) 
    {
        HP_ = HP;
    }

	~PlayerHP()
	{
		delete HP_;
	}

	void set(int value) 
	{
		*HP_ = value;
	}

	int get() 
	{
		return *HP_;
	}

private:
	int* HP_ = nullptr;
};
