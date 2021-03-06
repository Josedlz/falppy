#include "player.h"

player_t::player_t(int x_, int y_, std::vector<std::vector<char>>& mapa) : entity_t(x_, y_, mapa){
    x = x_;
    y = y_;
    mapa[x][y] = 'p';
}

void player_t::move(int dx, int dy, std::vector<std::vector<char>>& mapa){
    if(mapa[x + dx][y + dy] == '#' || mapa[x + dx][y + dy] == '%'){
        return;
    }

    if(dx == 0 && dy == -1){
        direction = 4;
    }else
    if(dx == 1 && dy == 0){
        direction = 3;
    }else
    if(dx == 0 && dy == 1){
        direction = 2;
    }else if(dx == -1 && dy == 0){
        direction = 1;
    }

    mapa[x][y] = ' ';
    x += dx;
    y += dy;
    if(mapa[x][y] == '>'){
        dardo_t d;
        dardos.push_back(d);
    }
    mapa[x][y] = 'p';
}
   
std::vector<dardo_t>& player_t::get_dardos() {
    return dardos;
}

int player_t::get_ammo() {
    return ammo;
}

void player_t::set_ammo(int a) {
    ammo = a;
}
