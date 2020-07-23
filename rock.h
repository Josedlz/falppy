#ifndef ROCK_H
#define ROCK_H

#include "entity.h"
#include <iostream>

class rock_t : public entity_t {
	public:
		bool c_erase ;
		rock_t() = default;
		rock_t(int x, int y, std::vector<std::vector<char>>& mapa);
		void move(int dx, int dy, std::vector<std::vector<char>>& mapa) override;
};

#endif