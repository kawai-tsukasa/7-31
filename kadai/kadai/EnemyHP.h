#pragma once

class EnemyHP
{
public:
	EnemyHP(int* HP);
	
	~EnemyHP();

	void set(int value)const;
	
	int get()
	{
		return *HP_;
	}

private:
	int* HP_ = nullptr;
};