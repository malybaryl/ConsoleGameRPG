#include <iostream>
#include "new_game.h"
#include "menu.h"
#include "game.h"
#include <Windows.h>
#include <fstream>
#include "dungeons.h"

void town()
{
	std::cout << "WHAT YOU WANT TO DO:" << std::endl;
	std::cout << std::endl;
	std::cout << "1 - go dungeons" << std::endl;
	std::cout << std::endl;
	std::cout << "2 - show statistics" << std::endl;
	std::cout << std::endl;
	std::cout << "3 - go to tavern (10 GOLD)" << std::endl;
	std::cout << std::endl;
	std::cout << "4 - save game" << std::endl;
	std::cout << std::endl;
}

void show_statistic(std::string Hero_class, int hero_lvl, int hero_EXP, int hero_EXP_MAX, int hero_HP, int hero_HP_MAX, int hero_BUI, int hero_STR, int hero_GOLD, int& hero_MIND, int& hero_MAXD)
{
	int choice;
	system("CLS");
	std::cout << "CLASS: " << Hero_class << std::endl;
	std::cout << "LEVEL: " << hero_lvl << std::endl;
	std::cout << "EXPERIENCE: " << hero_EXP << '/' << hero_EXP_MAX << std::endl;
	std::cout << std::endl;
	std::cout << "HP: " << hero_HP << '/' << hero_HP_MAX << std::endl; 
	std::cout << "DMG: " << hero_MIND << " - " << hero_MAXD << std::endl;
	std::cout << "BUI: " << hero_BUI << std::endl;
	std::cout << "STR: " << hero_STR << std::endl;
	std::cout << std::endl;
	std::cout << "GOLD: " << hero_GOLD << std::endl;
	std::cout << std::endl;
	std::cout << "1 - Exit" << std::endl;
	std::cin >> choice;
	system("CLS");

}
void lvl_system(int& hero_lvl, int& hero_EXP, int& hero_EXP_MAX,int& hero_STR, int& hero_BUI, int& hero_HP_MAX,int& hero_MIN_DMG_p , int& hero_MAX_DMG_p, int& hero_MIN_DMG, int& hero_MAX_DMG)
{
	if (hero_EXP >= hero_EXP_MAX)
	{
		hero_lvl++;
		system("CLS");
		std::cout << "LEVEL UP!" << std::endl;
		hero_EXP_MAX = hero_EXP_MAX * 2;
		hero_STR = 1 * 2 * hero_lvl;
		hero_BUI = 1 * 3 * hero_lvl;
		hero_HP_MAX = 50 * hero_lvl * hero_BUI;
		hero_MIN_DMG = hero_MIN_DMG_p * hero_STR;
		hero_MAX_DMG = hero_MAX_DMG_p * hero_STR;
		
		Sleep(3000);
		system("CLS");
	}
}
bool check_gold_tavern(int& hero_GOLD)
{
	if (hero_GOLD >= 10)
		return true;
	else return false;
}
bool check_if_lose(int hero_HP)
{
	if (hero_HP <= 0)
		return true;
	else return false;
}
void save_game(std::string Hero_class, int hero_lvl, int hero_EXP_MAX, int hero_HP_MAX, int hero_BUI, int hero_STR, int hero_GOLD, int& hero_MIND, int& hero_MAXD, int& hero_HP, int& hero_EXP, int& hero_MIN_DMG, int& hero_MAX_DMG, int& hero_MIN_DMG_p, int& hero_MAX_DMG_p)
{
	std::ofstream save_file("SAVE_FILE.txt");
	system("CLS");
	if (not save_file)
		std::cout << "Something went wrong...";
	else
	{
		save_file << Hero_class << ' ' << hero_lvl << ' ' << hero_EXP_MAX << ' ' << hero_HP_MAX << ' ' << hero_BUI << ' ' << hero_STR << ' ' << hero_GOLD << ' ' << hero_MIND << ' ' << hero_MAXD << ' ' << hero_HP << ' ' << hero_EXP << ' ' << hero_MIN_DMG << ' ' << hero_MAX_DMG << ' ' << hero_MIN_DMG_p << ' ' << hero_MAX_DMG_p;
	}
	
}
void game_ENG(std::string Hero_class, int hero_lvl, int hero_EXP, int hero_EXP_MAX, int hero_HP, int hero_HP_MAX, int hero_BUI, int hero_STR, int hero_GOLD, int& hero_MIND, int& hero_MAXD, int& hero_MIN_DMG, int& hero_MAX_DMG, int& hero_MIN_DMG_p, int& hero_MAX_DMG_p)
{
	system("CLS");
	int class_choice;
	new_game();
	std::cin >> class_choice;
	system("CLS");
	if (class_choice == 1)
	{
		while (true)
		{
			bool check_lose = check_if_lose(hero_HP);

			if (check_lose == true)
			{
				lose_menu();
				break;
			}
			else
			{
				int town_doing;
				town();
				std::cin >> town_doing;
				if (town_doing == 1)
				{
					dungeon_1_5(Hero_class , hero_lvl, hero_EXP, hero_EXP_MAX, hero_HP, hero_HP_MAX, hero_BUI, hero_STR, hero_GOLD, hero_MIN_DMG, hero_MAX_DMG);
				}
				else if (town_doing == 2)
				{
					show_statistic(Hero_class, hero_lvl, hero_EXP, hero_EXP_MAX, hero_HP, hero_HP_MAX, hero_BUI, hero_STR, hero_GOLD, hero_MIN_DMG, hero_MAX_DMG);
				}
				else if (town_doing == 3)
				{
					system("CLS");
					bool tavern_gold = check_gold_tavern(hero_GOLD);
					if (tavern_gold == true)
					{
						hero_GOLD -= 10;
						hero_HP = hero_HP_MAX;
						system("CLS");
					}
					else
					{
						std::cout << "YOU DONT HAVE ENOUGH MONEY" << std::endl;
						Sleep(2000);
						system("CLS");

					}
				}
				else if (town_doing == 4)
				{
					save_game(Hero_class, hero_lvl, hero_EXP_MAX, hero_HP_MAX, hero_BUI, hero_STR, hero_GOLD, hero_MIND, hero_MAXD, hero_HP, hero_EXP, hero_MIN_DMG, hero_MAX_DMG, hero_MIN_DMG_p, hero_MAX_DMG_p);
					std::cout << "THE GAME HAVE BEEM SAVED" << std::endl;
					Sleep(2000);
					system("CLS");
				}
				lvl_system(hero_lvl, hero_EXP, hero_EXP_MAX, hero_STR, hero_BUI, hero_HP_MAX, hero_MIN_DMG_p, hero_MAX_DMG_p, hero_MIN_DMG, hero_MAX_DMG);
			}
		}

	}
}
void load_game()
{
	std::ifstream save_file("SAVE_FILE.txt");
	if (not save_file)
	{
		std::cout << "Cant find file..." << std::endl;
	}
	else
	{
		std::string Hero_class;
		int hero_lvl, hero_EXP_MAX, hero_HP_MAX, hero_BUI, hero_STR, hero_GOLD, hero_MIND, hero_MAXD, hero_HP,hero_EXP,hero_MIN_DMG,hero_MAX_DMG, hero_min_DMG,hero_MIN_DMG_p,hero_MAX_DMG_p;
		save_file >> Hero_class >> hero_lvl >> hero_EXP_MAX >> hero_HP_MAX >> hero_BUI >> hero_STR >> hero_GOLD >> hero_MIND >> hero_MAXD >> hero_HP >> hero_EXP >> hero_MIN_DMG >> hero_MAX_DMG >> hero_MIN_DMG_p >> hero_MAX_DMG_p;
		game_ENG(Hero_class, hero_lvl, hero_EXP, hero_EXP_MAX, hero_HP, hero_HP_MAX, hero_BUI, hero_STR, hero_GOLD, hero_MIND, hero_MAXD, hero_MIN_DMG, hero_MAX_DMG, hero_MIN_DMG_p, hero_MAX_DMG_p);
		
		
	}
}





