#ifndef CURE_H
#define CURE_H

#include "entity.h"
#include <iostream>

class cure_t : public entity_t {
	 bool won = false;
	public:
		cure_t() = default;
		cure_t(int x, int y, std::vector<std::vector<char>>& mapa);
		void move(int dx, int dy, std::vector<std::vector<char>>& mapa) override;
		void set_won(bool x) { won = x; }
		bool get_won() { return won; }
};

#endif