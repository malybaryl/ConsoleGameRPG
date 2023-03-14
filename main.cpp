#include <iostream>
#include "menu.h"
#include "new_game.h"
#include "game.h"

int main()
{
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
				int class_choice;
				new_game();
				std::cin >> class_choice;
				if (class_choice == 1)
				{
					Warrior hero;
					
					hero.CLA = "Warrior";
					hero.lvl = 1;
					hero.BUI = 1;
					hero.STR = 1;
					hero.HP = 50 * hero.BUI;
					
					system("CLS");
					town();
					int doing_in_town;
					std::cin >> doing_in_town;
					if (doing_in_town == 1)
					{
						system("CLS");
						std::cout << "Class: " << hero.CLA << std::endl;
						std::cout << "level: " << hero.lvl << std::endl;
						std::cout << "HP: " << hero.HP << '/' << hero.HP << std::endl;
						std::cout << std::endl;
						std::cout << "BUI: " << hero.BUI << std::endl;
						std::cout << "STR: " << hero.STR << std::endl;
					}
				}
				break;
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