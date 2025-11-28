#include "menu_items.hpp"

#include <cstddef> 
#include "menu_functions.hpp"

const zlata::MenuItem zlata::HISTORY = {
	"1 - Искусство России", zlata::history, &zlata::history
};

const zlata::MenuItem zlata::HISTORY_RUSSION_ART = {
	"1 - Русские художники", zlata::russion_art, &zlata::history
};

const zlata::MenuItem zlata::HISTORY_RUSSION_MUSIK = {
	"2 - Русские музыканты", zlata::russion_musik, &zlata::history
};

const zlata::MenuItem zlata::HISTORY_GO_BACK = {
	"0 - Выйти в главное меню", zlata::history_go_back, &zlata::history
};

namespace {
	const zlata::MenuItem* const art_russia[] = {
		&zlata::HISTORY_GO_BACK,
		&zlata::HISTORY_RUSSION_ART,
		&zlata::HISTORY_RUSSION_MUSIK,
	};
	const int art_russia_size = sizeof(art_russia)/ sizeof(art_russia[0]);
}

const zlata::MenuItem zlata::HISTORY = {
	"1 - Искусство России", zlata::show_menu, &zlata::MAIN, art_russia, art_russia_size
};
const zlata::MenuItem zlata::EXIT = {
	"0 - Выйти", zlata::exit, &zlata::MAIN
};

namespace {
	const zlata::MenuItem* const main_art[] = {
		&zlata::EXIT,
		&zlata::HISTORY
	};
	const int main_art_size = sizeof(main_art)/sizeof(main_art[0]);
}

const zlata::MenuItem zlata::MAIN = {
	nullptr, zlata::show_menu, nullptr, main_art, main_art_size
};


const zlata::MenuItem zlata::  = {
	"1 - Андрей Иванов сын Рублёв", zlata::history_, &zlata::MUSIK_PEOPLE
};
		
const zlata::MenuItem zlata::  = {
	"2 - ", zlata::history_, &zlata::ART_PEOPLE
};

const zlata::MenuItem zlata::  = {
	"", zlata::history_, &zlata::ART_PEOPLE
};
