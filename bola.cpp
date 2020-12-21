#include "bola.h"

bola_t::bola_t(int x_, int y_, std::vector<std::vector<char>>& mapa) : objeto_t(x_, y_, mapa){
    x = x_;
    y = y_;
    mapa[x][y] = 'o';
}

void bola_t::move(int dx, int dy, std::vector<std::vector<char>>& mapa){
    if(mapa[x + dx][y + dy] == '#' || mapa[x + dx][y + dy] == 'o' || mapa[x + dx][y + dy] == '>'){
        return;
    }
    if(dx == 1) mapa[x][y] = ' ';
    else mapa[x][y] = 'p';
    x += dx;
    y += dy;
    mapa[x][y] = 'o';
}
