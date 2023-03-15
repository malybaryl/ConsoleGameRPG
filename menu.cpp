#include <iostream>
#include <Windows.h>
#include <stdlib.h>
#include "menu.h"

void intro()
{
	for (int j = 0; j < 28; j++)
	{
		for (int i = 0; i < 120; i++)
		{
			std::cout << '-';
			Sleep(0.8);
			
		}
		if (j == 12)
		{
			for (int k = 0; k < 52; k++)
			{
				std::cout << '-';
				Sleep(0.8);
			}
			std::cout << 'C';
			Sleep(100);
			std::cout << 'O';
			Sleep(100);
			std::cout << 'N';
			Sleep(100);
			std::cout << 'S';
			Sleep(100);
			std::cout << 'O';
			Sleep(100);
			std::cout << 'L';
			Sleep(100);
			std::cout << '-';
			Sleep(100);
			std::cout << 'G';
			Sleep(100);
			std::cout << 'A';
			Sleep(100);
			std::cout << 'M';
			Sleep(100);
			std::cout << 'E';
			Sleep(100);
			std::cout << '-';
			Sleep(100);
			std::cout << 'R';
			Sleep(100);
			std::cout << 'P';
			Sleep(100);
			std::cout << 'G';
			Sleep(100);
			std::cout << '-';
			Sleep(100);
			for (int k = 0; k < 52; k++)
			{
				std::cout << '-';
				Sleep(0.8);
			}
		}
	}
		for (int i = 0; i < 106; i++)
		{
			std::cout << '-';
			Sleep(0.8);
		}
		std::cout << 'V';
		Sleep(0.8);
		std::cout << 'E';
		Sleep(0.8);
		std::cout << 'R';
		Sleep(0.8);
		std::cout << 'S';
		Sleep(0.8);
		std::cout << 'I';
		Sleep(0.8);
		std::cout << 'O';
		Sleep(0.8);
		std::cout << 'N';
		Sleep(0.8);
		std::cout << '-';
		Sleep(0.8);
		std::cout << '0';
		Sleep(0.8);
		std::cout << '.';
		Sleep(0.8);
		std::cout << '0';
		Sleep(0.8);
		std::cout << '.';
		Sleep(0.8);
		std::cout << '5';
		Sleep(0.8);
		std::cout << '-';
		Sleep(0.8);
	Sleep(1500);
	system("CLS");
}

void language_selection(int &language)
{
	int choice;
	std::cout << "CHOOSE LANGUAGE / WYBIERZ JEZYK" << std::endl;
	std::cout << std::endl;
	std::cout << "1 - ENGLISH" << std::endl;
	std::cout << "2 - POLSKI" << std::endl;
	std::cout << std::endl;
	std::cin >> choice;
	language = choice;
}

void menu_eng()
{
	std::cout << "         MAIN  MENU" << std::endl << std::endl;
	std::cout << "1 - NEW GAME" << std::endl;
	std::cout << "2 - LOAD GAME" << std::endl;
	std::cout << "3 - INSTRUCTION" << std::endl;
	std::cout << "4 - EXIT" << std::endl;
}

void menu_pol()
{
	std::cout << "         MENU GLOWNE" << std::endl << std::endl;
	std::cout << "1 - NOWA GRA" << std::endl;
	std::cout << "2 - WCZYTAJ GRE" << std::endl;
	std::cout << "3 - INSTRUKCJA" << std::endl;
	std::cout << "4 - WYJSCIE" << std::endl;
}

void lose_menu()
{
	system("CLS");
	for (int j = 0; j < 28; j++)
	{
		for (int i = 0; i < 120; i++)
		{
			std::cout << '-';
			Sleep(0.8);

		}
		if (j == 12)
		{
			for (int k = 0; k < 52; k++)
			{
				std::cout << '-';
				Sleep(0.8);
			}
			std::cout << '-';
			Sleep(300);
			std::cout << '-';
			Sleep(300);
			std::cout << '-';
			Sleep(300);
			std::cout << 'G';
			Sleep(300);
			std::cout << 'A';
			Sleep(300);
			std::cout << 'M';
			Sleep(300);
			std::cout << 'E';
			Sleep(300);
			std::cout << '-';
			Sleep(300);
			std::cout << '-';
			Sleep(300);
			std::cout << 'O';
			Sleep(300);
			std::cout << 'V';
			Sleep(300);
			std::cout << 'E';
			Sleep(300);
			std::cout << 'R';
			Sleep(300);
			std::cout << '-';
			Sleep(300);
			std::cout << '-';
			Sleep(300);
			std::cout << '-';
			Sleep(300);
			for (int k = 0; k < 52; k++)
			{
				std::cout << '-';
				Sleep(0.8);
			}
		}
		std::cout << std::endl;
	}
	Sleep(1500);
	system("CLS");
}