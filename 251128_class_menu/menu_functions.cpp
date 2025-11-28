#include "menu_functions.hpp"

#include <cstdlib>
#include <iostream>

const zlata::MenuItem* zlata::show_menu(const MenuItem* current) {
	std::cout << "Познакомься с искусством Росии" << std::endl;
	for (int i = 1; i < current->history_count; i++) {
		std::cout << current->history[i]->title << std::endl;
	}
	std::cout <<  current->history[0]->title << std::endl;
	std::cout << "Исскуство России";
	
	int user_input;
	std::cin >> user_input;
	std::cout << std::endl;
	
	return current->history[user_input];
}

const zlata::MenuItem* zlata::exit(const MenuItem* current) {
	std::exit(0);
}


const zlata::MenuItem* zlata::historyy(const MenuItem* current) {
	// TODO
	std::cout << current->title << std::endl << std::endl;
	return current->parent;
}

const zlata::MenuItem* zlata::russion_art(const MenuItem* current) {
	// TODO
	std::cout << current->title << std::endl << std::endl;
	return current->parent;
}

const zlata::MenuItem* zlata::russion_musik(const MenuItem* current) {
	// TODO
	std::cout << current->title << std::endl << std::endl;
	return current->parent;
}
