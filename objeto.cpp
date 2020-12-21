#include "objeto.h"

objeto_t::objeto_t(int x_, int y_, std::vector<std::vector<char>>& mapa){
    x = x_;
    y = y_;
}

void objeto_t::set_posicion(int x_, int y_){
    x = x_;
    y = y_;
}

int objeto_t::get_x(){
    return x;
}

int objeto_t::get_y(){
    return y;
}

int objeto_t::get_direccion(){
    return direccion;
}

bool objeto_t::get_vida(){
    return alive;
}

void objeto_t::set_vida(bool state){
    alive = state;
}

















































