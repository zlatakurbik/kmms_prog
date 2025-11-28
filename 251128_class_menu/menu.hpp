#pragma once

namespace zlata {
	struct MenuItem {
		const char* const title;
		const MenuItem* (*func)(const MenuItem* current);
		
		const MenuItem* parent;
		
		const MenuItem* const* history;
		const int history_count;
	};
}