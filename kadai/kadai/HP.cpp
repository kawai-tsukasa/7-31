#include "HP.h"

PlayerHP::PlayerHP(int* HP)
{
       HP_ = HP;
}

PlayerHP::~PlayerHP()
{
    delete HP_;
}

void PlayerHP::set(int value) const
{
    *HP_ = value;
}

