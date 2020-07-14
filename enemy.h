#ifndef ENEMY_H
#define ENEMY_H

#include "entity.h"

class enemy_t : public entity_t {
	public:
		enemy_t() = default;
		enemy_t(int x, int y, std::vector<std::vector<char>>& mapa); 
		void move(int dx, int dy, std::vector<std::vector<char>>& mapa) override;
};
#endif