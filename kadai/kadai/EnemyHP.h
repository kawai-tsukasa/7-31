#pragma once

class EnemyHP
{
public:
	EnemyHP(int* HP)
	{
		HP_ = HP;
	}

	~EnemyHP()
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