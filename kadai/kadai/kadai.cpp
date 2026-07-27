#include <iostream>
#include "Stetas.h"
#include "EnemyStetas.h"
#include "HP.h"
#include "EnemyHP.h"
#include "Process.h"

using namespace std;

bool isGameOver = false;

int main()
{
	PlayerParameter PP[3];
	for (int i = 0; i < 3; ++i)
	{
		PP[0].name_ = "剣士";
		PP[1].name_ = "魔法使い";
		PP[2].name_ = "召喚士";
		PP[i].ATK_ = 20;
		
	}

	EnemyParameter EP[3];
	for (int i = 0; i < 3; ++i)
	{
		EP[0].name_ = "敵剣士";
		EP[1].name_ = "敵魔法使い";
		EP[2].name_ = "敵召喚士";
		EP[i].ATK_ = 20;

	}

	std::cout << "-----------------------------" << std::endl;
	std::cout << "プレイヤーの攻撃！" << std::endl;

	while (!isGameOver)
	{

		PlayerHP* playerHP = new PlayerHP;
		playerHP->HP_ = 100;

		EnemyHP* enemyHP = new EnemyHP;
		enemyHP->HP_ = 100;
		
		std::cout << "-----------------------------" << std::endl;

		std::cout << "名前:" << PP[0].name_ << "ATK:" << PP[0].ATK_<<endl;
		std::cout << "名前:" << PP[1].name_ << "ATK:" << PP[1].ATK_<<endl;
		std::cout << "名前:" << PP[2].name_ << "ATK:" << PP[2].ATK_<<endl;

		std::cout << "-----------------------------" << std::endl;

		std::cout << "HP:" << playerHP << endl;

		std::cout << "-----------------------------" << std::endl;

		std::cout << "名前:" << EP[0].name_ << "ATK:" << EP[0].ATK_ << endl;
		std::cout << "名前:" << EP[1].name_ << "ATK:" << EP[1].ATK_ << endl;
		std::cout << "名前:" << EP[2].name_ << "ATK:" << EP[2].ATK_ << endl;


		std::cout << "-----------------------------" << std::endl;

		std::cout << "行動選択" << std::endl;

		std::cout << "1.剣士" << "2.魔法使い" << "3.召喚士" << std::endl;

		Process process;
		process.battle();

	}
}

