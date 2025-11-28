#include "menu_items.hpp"

#include <cstddef> 

#include "menu_functions.hpp"

const zlata::MenuItem zlata::HISTORY_RUSSION_ART = {
	"1 - Русские художники", zlata::russion_art, &zlata::HISTORY
};

const zlata::MenuItem zlata::HISTORY_RUSSION_MUSIK = {
	"2 - Русские музыканты", zlata::russion_musik, &zlata::HISTORY
};

const zlata::MenuItem zlata::HISTORY_GO_BACK = {
	"0 - Выйти в главное меню", zlata::history_go_back, &zlata::HISTORY
};

namespace {
	const zlata::MenuItem* const history_children[] = {
		&zlata::HISTORY_GO_BACK,
		&zlata::HISTORY_RUSSION_ART,
		&zlata::HISTORY_RUSSION_MUSIK,
	};
	const int history_size = sizeof(history_children)/ sizeof(history_children[0]);
}

const zlata::MenuItem zlata::HISTORY = {
	"1 - Искусство России", zlata::show_menu, &zlata::MAIN, history_children, history_size
};
const zlata::MenuItem zlata::EXIT = {
	"0 - Выйти", zlata::exit, &zlata::MAIN
};

namespace {
	const zlata::MenuItem* const main_children[] = {
		&zlata::EXIT,
		&zlata::HISTORY
	};
	const int main_size = sizeof(main_children)/sizeof(main_children[0]);
}

const zlata::MenuItem zlata::MAIN = {
	nullptr, zlata::show_menu, nullptr, main_children, main_size
};

