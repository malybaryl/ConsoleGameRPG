#include <iostream>
#include "header.h"

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
			std::cin >> choice;
			if(choice==4)
			break;
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