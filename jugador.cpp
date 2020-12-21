#include "jugador.h"

jugador_t::jugador_t(int x_, int y_, std::vector<std::vector<char>>& mapa) : objeto_t(x_, y_, mapa){
    x = x_;
    y = y_;
    mapa[x][y] = 'p';
}

void jugador_t::move(int dx, int dy, std::vector<std::vector<char>>& mapa){
    if(mapa[x + dx][y + dy] == '$' || mapa[x + dx][y + dy] == '@'){
        return;
    }

    if(dx == 0 && dy == -1){
        direccion = 4;
    }else
    if(dx == 1 && dy == 0){
        direccion = 3;
    }else
    if(dx == 0 && dy == 1){
        direccion = 2;
    }else if(dx == -1 && dy == 0){
        direccion = 1;
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

std::vector<dardo_t>& jugador_t::get_dardos() {
    return dardos;
}

int jugador_t::get_municion() {
    return ammo;
}

void jugador_t::set_municion(int a) {
    ammo = a;
}
