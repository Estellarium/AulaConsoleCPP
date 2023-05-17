#include "FileReader.h"
#include <iostream>

void printFile(std::string name) {
	std::string prefix = "GDDs/" + name + "/";
	std::string file = prefix + name + ".txt";
	std::ifstream gdd;
	gdd.open(file, std::ios::in);
	if (gdd.is_open()) {
		std::string line;
		while (std::getline(gdd, line)) {
			std::cout << line << "\n";
		}
	}
	else {
		std::cout << "Arquivo não encontrado!" << "\n";
		return;
	}
	
}