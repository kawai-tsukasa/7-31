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

	int* pHP = new int(300);

	PlayerHP playerHP(pHP);

	int* eHP = new int(300);

	EnemyHP enemyHP(eHP);


	PlayerParameter PP[3];
	for (int i = 0; i < 3; ++i)
	{
		PP[0].name_ = "剣士";
		PP[1].name_ = "魔法使い";
		PP[2].name_ = "召喚士";
		PP[0].ATK_ = 40;
		PP[1].ATK_ = 35;
		PP[2].ATK_ = 25;
		
	}

	EnemyParameter EP[3];
	for (int i = 0; i < 3; ++i)
	{
		EP[0].name_ = "敵剣士";
		EP[1].name_ = "敵魔法使い";
		EP[2].name_ = "敵召喚士";
		EP[0].ATK_ = 40;
		EP[1].ATK_ = 35;
		EP[2].ATK_ = 25;
	}


	while (!isGameOver)
	{
		std::cout << "-----------------------------" << std::endl;

		std::cout << "名前:" << PP[0].name_ << "ATK:" << PP[0].ATK_<<endl;
		std::cout << "名前:" << PP[1].name_ << "ATK:" << PP[1].ATK_<<endl;
		std::cout << "名前:" << PP[2].name_ << "ATK:" << PP[2].ATK_<<endl;

		std::cout << "-----------------------------" << std::endl;

		std::cout << "あなた の HP:" << playerHP.get() << endl;

		std::cout << "-----------------------------" << std::endl;

		std::cout << "名前:" << EP[0].name_ << "ATK:" << EP[0].ATK_ << endl;
		std::cout << "名前:" << EP[1].name_ << "ATK:" << EP[1].ATK_ << endl;
		std::cout << "名前:" << EP[2].name_ << "ATK:" << EP[2].ATK_ << endl;


		std::cout << "-----------------------------" << std::endl;

		std::cout << "敵 の HP:" << enemyHP.get() << endl;

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
			int command = 6;
		}

		std::cout << "-----------------------------" << std::endl;
		
		std::cout << "敵の行動" << std::endl;

		int enemyCommand = rand() % 6 + 1;

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

		if (command == 1 && enemyCommand == 1) 
		{
			std::cout << "ドロー" << endl;
		}
		else if (command == 1 && enemyCommand == 2)
		{
			std::cout << "ドロー" << endl;
		}
		else if (command == 1 && enemyCommand == 3)
		{
			std::cout << "攻撃成功！" << endl;
			enemyHP.set(enemyHP.get() - PP[0].ATK_);
		}
		else if (command == 1 && enemyCommand == 4)
		{
			std::cout << "カウンター！" << endl;
			playerHP.set(playerHP.get() - PP[0].ATK_ * 2);
		}
		else if (command == 1 && enemyCommand == 5)
		{
			std::cout << "攻撃成功！" << endl;
			enemyHP.set(enemyHP.get() - PP[0].ATK_);
		}
		else if (command == 1 && enemyCommand == 6)
		{
			std::cout << "クリティカル！" << endl;
			enemyHP.set(enemyHP.get() - PP[0].ATK_ * 2);
		}
		else if (command == 2 && enemyCommand == 1)
		{
			std::cout << "ドロー！" << endl;
		}
		else if (command == 2 && enemyCommand == 2)
		{
			std::cout << "ドロ－！" << endl;
		}
		else if (command == 2 && enemyCommand == 3)
		{
			std::cout << "クリティカル！" << endl;
			playerHP.set(playerHP.get() - EP[1].ATK_ * 2);
		}
		else if (command == 2 && enemyCommand == 4)
		{
			std::cout << "防御成功！" << endl;
		}
		else if (command == 2 && enemyCommand == 5)
		{
			std::cout << "カウンター！" << endl;
			enemyHP.set(enemyHP.get() - EP[2].ATK_ * 2);
		}
		else if (command == 2 && enemyCommand == 6)
		{
			std::cout << "防御成功！！" << endl;
		}
		else if (command == 3 && enemyCommand == 1)
		{
			std::cout << "攻撃失敗,,," << endl;
			playerHP.set(playerHP.get() - EP[0].ATK_);
		}
		else if (command == 3 && enemyCommand == 2)
		{
			std::cout << "クリティカル！" << endl;
			enemyHP.set(enemyHP.get() - PP[1].ATK_ * 2);
		}
		else if (command == 3 && enemyCommand == 3)
		{
			std::cout << "ドロー" << endl;
		}
		else if (command == 3 && enemyCommand == 4)
		{
			std::cout << "ドロー" << endl;
		}
		else if (command == 3 && enemyCommand == 5)
		{
			std::cout << "攻撃成功" << endl;
			enemyHP.set(enemyHP.get() - PP[1].ATK_);
		}
		else if (command == 3 && enemyCommand == 6)
		{
			std::cout << "カウンター！" << endl;
			playerHP.set(playerHP.get() - PP[1].ATK_ * 2);
		}
		else if (command == 4 && enemyCommand == 1)
		{
			std::cout << "カウンター！" << endl;
			enemyHP.set(enemyHP.get() - EP[0].ATK_ * 2);
		}
		else if (command == 4 && enemyCommand == 2)
		{
			std::cout << "防御成功！" << endl;
		}
		else if (command == 4 && enemyCommand == 3)
		{
			std::cout << "ドロー！" << endl;
		}
		else if (command == 4 && enemyCommand == 4)
		{
			std::cout << "ドロー！" << endl;
		}
		else if (command == 4 && enemyCommand == 5)
		{
			std::cout << "クリティカル！" << endl;
			playerHP.set(playerHP.get() - EP[2].ATK_ * 2);
		}
		else if (command == 4 && enemyCommand == 6)
		{
			std::cout << "防御成功！" << endl;
		}
		else if (command == 5 && enemyCommand == 1)
		{
			std::cout << "攻撃失敗！" << endl;
			playerHP.set(playerHP.get() - EP[0].ATK_);
		}
		else if (command == 5 && enemyCommand == 2)
		{
			std::cout << "カウンター！" << endl;
			playerHP.set(playerHP.get() - PP[2].ATK_ * 2);
		}
		else if (command == 5 && enemyCommand == 3)
		{
			std::cout << "攻撃失敗！" << endl;
			playerHP.set(playerHP.get() - EP[1].ATK_);
		}
		else if (command == 5 && enemyCommand == 4)
		{
			std::cout << "クリティカル！" << endl;
			enemyHP.set(enemyHP.get() - EP[1].ATK_ * 2);
		}
		else if (command == 5 && enemyCommand == 5)
		{
			std::cout << "ドロー！" << endl;
		}
		else if (command == 5 && enemyCommand == 6)
		{
			std::cout << "ドロー！" << endl;
		}
		else if (command == 6 && enemyCommand == 1)
		{
			std::cout << "クリティカル！" << endl;
			playerHP.set(playerHP.get() - EP[0].ATK_ * 2);
		}
		else if (command == 6 && enemyCommand == 2)
		{
			std::cout << "防御成功！" << endl;
		}
		else if (command == 6 && enemyCommand == 3)
		{
			std::cout << "カウンター！" << endl;
			enemyHP.set(enemyHP.get() - EP[1].ATK_ * 2);
		}
		else if (command == 6 && enemyCommand == 4)
		{
			std::cout << "防御成功！" << endl;
		}
		else if (command == 6 && enemyCommand == 5)
		{
			std::cout << "ドロー！" << endl;
		}
		else if (command == 6 && enemyCommand == 6)
		{
			std::cout << "ドロー！" << endl;
		}
		
		
		
		if (playerHP.get() <= 0) 
		{
			isGameOver = true;
			std::cout << "-----------------------------" << std::endl;
			std::cout << "プレイヤーの負け...( > < )" << std::endl;
		}
		if (enemyHP.get() <= 0)
		{
			isGameOver = true;
			std::cout << "-----------------------------" << std::endl;
			std::cout << "プレイヤーの勝ち！( > v < )" << std::endl;
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

