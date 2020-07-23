#include "cure.h"

cure_t::cure_t(int x_, int y_, std::vector<std::vector<char>>& mapa) : entity_t(x_, y_, mapa){
    x = x_;
    y = y_;
    mapa[x][y] = 'c';
}

void cure_t::move(int dx, int dy, std::vector<std::vector<char>>& mapa){
    if(mapa[x + dx][y + dy] == '#' || mapa[x + dx][y + dy] == 'o'){
        return;
    }
    if(dx == 1) mapa[x][y] = ' ';
    else mapa[x][y] = 'p';
		if(mapa[x][y] == '%') won = 1;
    x += dx;
    y += dy;
    mapa[x][y] = 'c';
}
