#include "enemy.h"


enemy_t::enemy_t(int x_, int y_, std::vector<std::vector<char>>& mapa) : entity_t(x_, y_, mapa){
    x = x_;
    y = y_;
    mapa[x][y] = 'c';
}

void enemy_t::move(int dx, int dy, std::vector<std::vector<char>>& mapa){
    if(mapa[x + dx][y + dy] == '#'){
        return;
    }
    mapa[x][y] = ' ';
    mapa[x + dx][y + dy] = 'c';
    x += dx;
    y += dy;
}

