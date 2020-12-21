#ifndef ENEMIGO_H
#define ENEMIGO_H

#include "objeto.h"

class enemigo_t : public objeto_t {
	public:
		enemigo_t() = default;
		enemigo_t(int x, int y, std::vector<std::vector<char>>& mapa); 
		void move(int dx, int dy, std::vector<std::vector<char>>& mapa) override;
};
#endif