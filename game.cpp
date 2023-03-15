#include <iostream>
#include "new_game.h"
#include "menu.h"
#include "game.h"
#include <Windows.h>

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




