#include <iostream>
#include "Stetas.h"
#include "EnemyStetas.h"
#include "HP.h"
#include "EnemyHP.h"

using namespace std;

int main()
{
	bool isGameOver = false;

	bool Socs = false;

	int command;

	int* pHP = new int(100);

	PlayerHP playerHP(pHP);

	int* eHP = new int(100);

	EnemyHP enemyHP(eHP);


	PlayerParameter PP[3];
	for (int i = 0; i < 3; ++i)
	{
		PP[0].name_ = "剣士";
		PP[1].name_ = "魔法使い";
		PP[2].name_ = "召喚士";
		PP[0].ATK_ = 20;
		PP[1].ATK_ = 15;
		PP[2].ATK_ = 10;
		
	}

	EnemyParameter EP[3];
	for (int i = 0; i < 3; ++i)
	{
		EP[0].name_ = "敵剣士";
		EP[1].name_ = "敵魔法使い";
		EP[2].name_ = "敵召喚士";
		EP[0].ATK_ = 20;
		EP[1].ATK_ = 15;
		EP[2].ATK_ = 10;
	}


	while (!isGameOver)
	{
		std::cout << "-----------------------------" << std::endl;

		std::cout << "名前:" << PP[0].name_ << "ATK:" << PP[0].ATK_<<endl;
		std::cout << "名前:" << PP[1].name_ << "ATK:" << PP[1].ATK_<<endl;
		std::cout << "名前:" << PP[2].name_ << "ATK:" << PP[2].ATK_<<endl;

		std::cout << "-----------------------------" << std::endl;

		std::cout << "HP:" << playerHP.get() << endl;

		std::cout << "-----------------------------" << std::endl;

		std::cout << "名前:" << EP[0].name_ << "ATK:" << EP[0].ATK_ << endl;
		std::cout << "名前:" << EP[1].name_ << "ATK:" << EP[1].ATK_ << endl;
		std::cout << "名前:" << EP[2].name_ << "ATK:" << EP[2].ATK_ << endl;


		std::cout << "-----------------------------" << std::endl;

		std::cout << "HP:" << enemyHP.get() << endl;

		std::cout << "-----------------------------" << std::endl;

		std::cout << "行動選択" << std::endl;

		std::cout << "1.剣士    で 攻撃！" << "2.剣士     で 防御！" <<  std::endl;
		std::cout << "3.魔法使いで 攻撃！" << "4.魔法使い で 防御！" <<  std::endl;
		std::cout << "5.召喚士  で 攻撃！" << "6.召喚士   で 防御！" <<  std::endl;

		std::cin >> command;

		if (command == 1) 
		{
			std::cout << "剣士 で 攻撃！" << std::endl;
		}
		else if (command == 2) 
		{
			std::cout << "剣士 で 防御！" << std::endl;
		}
		else if (command == 3) 
		{
			std::cout << "魔法使いで 攻撃！" << std::endl;
		}
		else if (command == 4) 
		{
			std::cout << "魔法使い で 防御！" << std::endl;
		}
		else if (command == 5) 
		{
			std::cout << "召喚士 で 攻撃！" << std::endl;
		}
		else if (command == 6) 
		{
			std::cout << "召喚士 で 防御！" << std::endl;
		}
		else
		{
			std::cout << "召喚士 で 防御！" << std::endl;
		}

		std::cout << "-----------------------------" << std::endl;
		
		std::cout << "敵の行動" << std::endl;

		int enemyCommand = rand() % 1 + 1;

		if (enemyCommand == 1)
		{
			std::cout << "敵剣士の攻撃！" << std::endl;
		}
		else if (enemyCommand == 2)
		{
			std::cout << "敵剣士の防御！" << std::endl;
		}
		else if (enemyCommand == 3)
		{
			std::cout << "敵魔法使いの攻撃！" << std::endl;
		}
		else if (enemyCommand == 4)
		{
			std::cout << "敵魔法使いの防御！" << std::endl;
		}
		else if (enemyCommand == 5)
		{
			std::cout << "敵召喚士の攻撃！" << std::endl;
		}
		else if (enemyCommand == 6)
		{
			std::cout << "敵召喚士の防御！" << std::endl;
		}
		else
		{
			std::cout << "敵召喚士の防御！" << std::endl;		
		}

		std::cout << "-----------------------------" << std::endl;
		// ここから各パターンの処理を書くだけ
		if (command == enemyCommand) 
		{
			std::cout << "ドロー" << endl;
			playerHP.set(playerHP.get() - EP[1].ATK_);
		}
		if (command == 1) 
		{

		}
		
		
		if (playerHP.get() <= 0) 
		{
			isGameOver = true;
			std::cout << "-----------------------------" << std::endl;
			std::cout << "プレイヤーの勝ち！( > v < )" << std::endl;
		}
		if (enemyHP.get() <= 0)
		{
			isGameOver = true;
			std::cout << "-----------------------------" << std::endl;
			std::cout << "プレイヤーの負け...( > < )" << std::endl;
		}

		if (!isGameOver) 
		{
			std::cout << "-----------------------------" << std::endl;
			std::cout << "次のターン" << std::endl;
			std::cout << "-----------------------------" << std::endl;
		}
		
	}

	return 0;
}

