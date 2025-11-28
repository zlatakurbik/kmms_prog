#pragma once

#include "menu.hpp"

namespace zlata {
	const MenuItem* show_menu(const MenuItem* current);
	
	const MenuItem* exit(const MenuItem* current);	
	
	const MenuItem* history(const MenuItem* current);
	const MenuItem* russion_art(const MenuItem* current);
	const MenuItem* russion_musik(const MenuItem* current);
	const MenuItem* history_go_back(const MenuItem* current);
}