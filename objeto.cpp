#include "objeto.h"

objeto_t::objeto_t(int x_, int y_, std::vector<std::vector<char>>& mapa){
    x = x_;
    y = y_;
}

void objeto_t::set_coords(int x_, int y_){
    x = x_;
    y = y_;
}

int objeto_t::get_x(){
    return x;
}

int objeto_t::get_y(){
    return y;
}

int objeto_t::get_direction(){
    return direction;
}

bool objeto_t::get_alive(){
    return alive;
}

void objeto_t::set_alive(bool state){
    alive = state;
}

















































