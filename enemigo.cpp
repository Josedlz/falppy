#include "enemigo.h"

enemigo_t::enemigo_t(int x_, int y_, std::vector<std::vector<char>>& mapa) : objeto_t(x_, y_, mapa){
    x = x_;
    y = y_;
    mapa[x][y] = 'e';
}

void enemigo_t::move(int dx, int dy, std::vector<std::vector<char>>& mapa){
    if(mapa[x + dx][y + dy] == '$') return;
    mapa[x][y] = ' ';
    mapa[x + dx][y + dy] = 'e';
    x += dx;
    y += dy;
}