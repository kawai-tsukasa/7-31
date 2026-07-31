#include "EnemyHP.h"

EnemyHP::EnemyHP(int* HP)
{
	HP_ = HP;
}

EnemyHP::~EnemyHP()
{
	delete HP_;
}

void EnemyHP::set(int value)const 
{
	*HP_ = value;
}