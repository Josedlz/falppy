#ifndef CURA_H
#define CURA_H

#include "objeto.h"
#include <iostream>

class cura_t : public objeto_t {
	 bool won = false;
	public:
		cura_t() = default;
		cura_t(int x, int y, std::vector<std::vector<char>>& mapa);
		void move(int dx, int dy, std::vector<std::vector<char>>& mapa) override;
		void set_won(bool x) { won = x; }
		bool get_won() { return won; }
};

#endif