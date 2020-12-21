#ifndef BOLA_H
#define BOLA_H

#include "objeto.h"
#include <iostream>

class bola_t : public objeto_t {
	public:
		bola_t() = default;
		bola_t(int x, int y, std::vector<std::vector<char>>& mapa);
		void move(int dx, int dy, std::vector<std::vector<char>>& mapa) override;
};

#endif