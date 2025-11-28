#include "menu_functions.hpp"

#include <cstdlib>
#include <iostream>

const zlata::MenuItem* zlata::show_menu(const MenuItem* current) {
	std::cout << "Познакомься с искусством Росcии" << std::endl;
	for (int i = 0; i < current->children_count; i++) {
		std::cout << current->children[i]->title << std::endl;
	}
	std::cout <<  current->children[0]->title << std::endl;
	std::cout << "Искусcтво России";
	
	int user_input;
	std::cin >> user_input;
	std::cout << std::endl;
	
	return current->children[user_input];
}

const zlata::MenuItem* zlata::exit(const MenuItem* current) {
	std::exit(0);
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

const zlata::MenuItem* zlata::history_go_back(const MenuItem* current) {
	// TODO
	std::cout << current->title << std::endl << std::endl;
	return current->parent->parent;
}

const zlata::MenuItem* zlata::art_rublev(const MenuItem* current) {
	// TODO
	std::cout << current->title << std::endl << std::endl;
	return current->parent;
}

const zlata::MenuItem* zlata::art_polenov(const MenuItem* current) {
	// TODO
	std::cout << current->title << std::endl << std::endl;
	return current->parent;
}

const zlata::MenuItem* zlata::art_aivazovsky(const MenuItem* current) {
	// TODO
	std::cout << current->title << std::endl << std::endl;
	return current->parent->parent;
}

const zlata::MenuItem* zlata::art_go_back(const MenuItem* current) {
	// TODO
	std::cout << current->title << std::endl << std::endl;
	return current->parent->parent;
}
