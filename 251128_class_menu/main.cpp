#include <clocale>
#include <iostream>

#include "menu.hpp"
#include "menu_functions.hpp"
#include "menu_items.hpp"

int main() {
	setlocale(LC_ALL, "ru_RU.UTF-8");
	const zlata::MenuItem* current = &zlata::MAIN;
	do {
		current = current->func(current);
	} while (true);
	
	return 0;
}