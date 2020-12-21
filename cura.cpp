#include "cura.h"

cura_t::cura_t(int x_, int y_, std::vector<std::vector<char>>& mapa) : objeto_t(x_, y_, mapa){
    x = x_;
    y = y_;
    mapa[x][y] = 'c';
}

void cura_t::move(int dx, int dy, std::vector<std::vector<char>>& mapa){
    if(mapa[x + dx][y + dy] == '$' || mapa[x + dx][y + dy] == 'o')  return;

    if(dx == 1) mapa[x][y] = ' ';
    else mapa[x][y] = 'p';

		if(mapa[x + dx][y + dy] == '@') set_won(true);
    x += dx;
    y += dy;
    mapa[x][y] = 'c';
}
