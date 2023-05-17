#include <iostream>s

#include "Project.h"
#include "FileReader.h"


void loadProject()
{
	ShowMainMenu();
}

void About()
{
	std::cout << "Projeto";
}

void TextMainMenu()
{
	std::cout << "1 - Jogo 1 \n";
	std::cout << "2 - Jogo 2 \n";
	std::cout << "0 - Sair \n";
}

void ShowMainMenu()
{
	int op = 1;
	while (op != 0) {
		TextMainMenu();
		std::cin >> op;
		switch (op)
		{
		case 1: printFile("Omnilarium");
		default:
			break;
		}
	}
}
