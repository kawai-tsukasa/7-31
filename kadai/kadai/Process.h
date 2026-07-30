#pragma once

class Process
{
public:
	void battle();
};	

void Process::battle()
{
	PlayerHP HP(new int);

	


	int command;
	bool Socs = false;
	std::cin >> command;
	switch (command)
	{
	case 1:
		std::cout << "剣士が攻撃した！" << std::endl;
		break;
	case 2:
		std::cout << "魔法使いが攻撃した！" << std::endl;
		break;
	case 3:
		std::cout << "召喚士が攻撃した！" << std::endl;
		break;
	default:
		std::cout << "無効なコマンドです" << std::endl;
		std::cout << "もう一度入力してください" << std::endl;
		break;
	}
	
	std::cout << "-----------------------------" << std::endl;

	std::cout << "敵の行動" << std::endl;

	int enemyCommand = rand() % 3 + 1;

	if (enemyCommand == 1)
	{
		std::cout << "敵剣士が攻撃した！" << std::endl;
	}
	else if (enemyCommand == 2)
	{
		std::cout << "敵魔法使いが攻撃した！" << std::endl;
	}
	else if (enemyCommand == 3)
	{
		std::cout << "敵召喚士が攻撃した！" << std::endl;;
	}
	else
	{
		std::cout << "無効なコマンドです。" << std::endl;
	}

	std::cout << "-----------------------------" << std::endl;

	if (command == 1 && enemyCommand == 1)
	{
		std::cout << "ドロー" << std::endl;
	}
	else if (command == 2 && enemyCommand == 2)
	{
		std::cout << "ドロー" << std::endl;
		
	}
	else if (command == 3 && enemyCommand == 3)
	{
		std::cout << "ドロー" << std::endl;
	}
	else if (command == 1 && enemyCommand == 2)
	{
		std::cout << "カウンター！" << std::endl;
	}
	else if (command == 2 && enemyCommand == 3)
	{
		std::cout << "カウンター！" << std::endl;
	}
	else if (command == 3 && enemyCommand == 1)
	{
		std::cout << "クリティカル！" << std::endl;
	}
	else if (command == 2 && enemyCommand == 1)
	{
		std::cout << "クリティカル！" << std::endl;
	}
	else if (command == 3 && enemyCommand == 2)
	{
		std::cout << "クリティカル！" << std::endl;
	}
	else if (command == 1 && enemyCommand == 3)
	{
		std::cout << "カウンター！" << std::endl;
	}
	else
	{
		std::cout << "プレイヤーと敵の攻撃が交錯した！" << std::endl;
	}
	std::cout << "-----------------------------" << std::endl;
	std::cout << "次のターン" << std::endl;
	std::cout << "-----------------------------" << std::endl;
}
