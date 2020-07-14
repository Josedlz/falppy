#include "entity.h"

entity_t::entity_t(int x_, int y_, std::vector<std::vector<char>>& mapa){
    x = x_;
    y = y_;
}

void entity_t::set_coords(int x_, int y_){
    x = x_;
    y = y_;
}

int entity_t::get_x(){
    return x;
}

int entity_t::get_y(){
    return y;
}

int entity_t::get_direction(){
    return direction;
}

bool entity_t::get_alive(){
    return alive;
}

void entity_t::set_alive(bool state){
    alive = state;
}

















































