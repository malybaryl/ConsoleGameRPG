#include <iostream>
#include <Windows.h>
#include "menu.h"
#include "new_game.h"
#include "game.h"
#include "mobs.h"
#include "dungeons.h"
#include "hero.h"

int main()
{
	Warrior hero;

	hero.CLA = "Warrior";
	hero.lvl = 1;
	hero.EXP = 0;
	hero.EXP_MAX = 500 * hero.lvl;
	hero.STR = 1 * 2 * hero.lvl;
	hero.BUI = 1 * 3 * hero.lvl;
	hero.HP_MAX = 50 * hero.lvl * hero.BUI;
	hero.HP = hero.HP_MAX;
	hero.GOLD = 0;
	hero.MIN_DMG_p = 1;
	hero.MAX_DMG_p = 3;
	hero.MIN_DMG = hero.MIN_DMG_p * hero.STR;
	hero.MAX_DMG = hero.MAX_DMG_p * hero.STR;

	int language;
	intro();
	language_selection(language);
	while (true)
	{
		if (language == 1)
		{
			int choice;
			system("CLS");
			menu_eng();
			std::cout << std::endl;
			std::cin >> choice;
			if (choice == 1)
			{
				game_ENG(hero.CLA, hero.lvl, hero.EXP, hero.EXP_MAX, hero.HP, hero.HP_MAX, hero.BUI, hero.STR, hero.GOLD, hero.MIN_DMG, hero.MAX_DMG, hero.MIN_DMG, hero.MAX_DMG, hero.MIN_DMG_p, hero.MAX_DMG_p);
			}
			else if (choice == 2)
			{
				load_game();
			}
			else if (choice == 4)
			{
				break;
			}
		}
		else if (language == 2)
		{
			int wybor;
			system("CLS");
			menu_pol();
			std::cin >> wybor;
			if(wybor==4)
			break;
		}
		else
		{
			system("CLS");
			language_selection(language);
		}
	}
}