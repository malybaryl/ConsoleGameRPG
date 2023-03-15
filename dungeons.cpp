#include <iostream>
#include <cstdlib>
#include <ctime>
#include "mobs.h"
#include <Windows.h>
#include <stdlib.h>

void dungeon_1_5(std::string Hero_class, int& hero_lvl, int& hero_EXP, int& hero_EXP_MAX, int& hero_HP, int& hero_HP_MAX, int& hero_BUI, int& hero_STR , int&hero_GOLD , int&hero_MIND, int&hero_MAXD)
{
	srand(time(NULL));
	int chance_mob_spawn = (std::rand() % 100) + 1;
	if (chance_mob_spawn >= 0 and chance_mob_spawn <= 75)
	{
		Rat rat;
		rat.lvl = hero_lvl;
		rat.STR = 1 + hero_lvl;
		rat.BUI = 1 + hero_lvl;
		rat.HP_MAX = 10 * rat.lvl * rat.BUI;
		rat.HP = rat.HP_MAX;

		int combat_choise;
		int rat_HP = rat.HP;
		int rat_HP_MAX = rat.HP_MAX;

		while (true)
		{
			system("CLS");
			std::cout << "YOU                             RAT" << std::endl;
			std::cout << "HP: " << hero_HP << '/' << hero_HP_MAX << "                   HP: " << rat_HP << "/" << rat_HP_MAX;
			std::cout << std::endl << std::endl;
			std::cout << "WHAT YOU WANT TO DO:" << std::endl;
			std::cout << "1 - Attact" << std::endl;
			if (rat_HP < 1)
			{
				system("CLS");
				int gold;
				gold = (std::rand() % 10) + 1;
				hero_GOLD += gold;
				std::cout << "You gain 50 EXP and " << gold << "GOLD" << std::endl;
				hero_EXP += 50;
				Sleep(2000);
				system("CLS");
				break;
			}
			else if (hero_HP < 1)
			{
				system("CLS");
				std::cout << "YOU LOSE" << std::endl;
				Sleep(4000);
				system("CLS");
				break;
			}
			std::cin >> combat_choise;
			if (combat_choise == 1)
			{
				system("CLS");
				int dmg =(std::rand() % hero_MAXD-2) + hero_MIND+1;
				rat_HP = rat_HP - dmg;
				std::cout << "YOU TOOK " << dmg << " DAMAGE TO RAT" << std::endl;
				Sleep(1000);
				system("CLS");
				int rat_dmg = rat.STR * (std::rand() % 2) + 1;
				std::cout << "RAT ATTACTS YOU AND TOOK YOU " << rat_dmg << " DAMAGE" << std::endl;
				Sleep(1000);
				system("CLS");
				hero_HP = hero_HP - rat.STR;
			}

		}
	}
	else
	{
		Goblin goblin;

		goblin.lvl = hero_lvl;
		goblin.STR = 2 + hero_lvl;
		goblin.BUI = 1 + hero_lvl;
		goblin.HP_MAX = 25 * goblin.lvl * goblin.BUI;
		goblin.HP = goblin.HP_MAX;

		int combat_choise;
		int goblin_HP = goblin.HP;
		int goblin_HP_MAX = goblin.HP_MAX;

		while (true)
		{
			system("CLS");
			std::cout << "YOU                             GOBLIN" << std::endl;
			std::cout << "HP: " << hero_HP << '/' << hero_HP_MAX << "                   HP: " << goblin_HP << "/" << goblin_HP_MAX;
			std::cout << std::endl << std::endl;
			std::cout << "WHAT YOU WANT TO DO:" << std::endl;
			std::cout << "1 - Attact" << std::endl;
			if (goblin_HP < 1)
			{
				system("CLS");
				int gold;
				gold = (std::rand() % 30) + 1;
				hero_GOLD += gold;
				std::cout << "You gain 200 EXP and " << gold << "GOLD" << std::endl;
				hero_EXP += 200;
				Sleep(2000);
				system("CLS");
				break;
			}
			else if (hero_HP < 1)
			{
				system("CLS");
				std::cout << "YOU LOSE" << std::endl;
				Sleep(4000);
				system("CLS");
				break;
			}
			std::cin >> combat_choise;
			if (combat_choise == 1)
			{
				system("CLS");
				int dmg = (std::rand() % hero_MAXD-2) + hero_MIND+1;
				goblin_HP = goblin_HP - dmg;
				std::cout << "YOU TOOK " << dmg << " DAMAGE TO GOBLIN" << std::endl;
				Sleep(1000);
				system("CLS");
				int rat_dmg = goblin.STR * (std::rand() % 3) + 1;
				std::cout << "GOBLIN ATTACTS YOU AND TOOK YOU " << rat_dmg << " DAMAGE" << std::endl;
				Sleep(1000);
				system("CLS");
				hero_HP = hero_HP - goblin.STR;
			}
		}
	}
}