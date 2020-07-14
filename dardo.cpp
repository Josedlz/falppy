#include "dardo.h"

void dardo_t::move(int dx, int dy, std::vector<std::vector<char>>& mapa){

    if(mapa[x + dx][y + dy] == '#'){
        if(mapa[x][y] == '<' && dx == 0 && dy == -1){
            control = false;
        }else
        if(mapa[x][y] == 'v' && dx == 1 && dy == 0){
            control = false;
        }else
        if(mapa[x][y] == '>' && dx == 0 && dy == 1){
            control = false;
        }else
        if(mapa[x][y] == '^' && dx == -1 && dy == 0){
            control = false;
        }
        return;
    }

    mapa[x][y] = ' ';

    if(dx = 0 && dy == -1){
        mapa[x + dx][y + dy] = '<';
        direction = 4;
    }else
    if(dx == 1 && dy == 0){
        mapa[x + dx][y + dy] = 'v'; 
        direction = 3;
    }else
    if(dx == 0 && dy == 1){
        mapa[x + dx][y + dy] = '>';
        direction = 2;
    }else
    if(dx == -1 && dy == 0){
        mapa[x + dx][y + dy] = '^';
        direction = 1;
    }

    x += dx;
    y += dy;
}

bool dardo_t::get_control(){
    return control;
}

void dardo_t::shoot(int x_, int y_, int dir, std::vector<std::vector<char>>& mapa){
    //si disparo al lado de una pared, no disparo. si no,
    //le paso las coordenadas y direccion del jugador que disparo;
    switch(dir){
        case 1: if(mapa[x_ - 1][y_] == '#') return; 
                shot = true;
                x = x_ - 1;
                y = y_;
                mapa[x][y] = '^';
                return;
        case 2: if(mapa[x_][y_ + 1] == '#') return;
                shot = true;
                x = x_;
                y = y_ + 1;
                mapa[x][y] = '>';
                return;
        case 3: if(mapa[x_ + 1][y_] == '#') return;
                shot = true;
                x = x_ + 1;
                y = y_;
                mapa[x][y] = 'v';
                return;
        case 4: if(mapa[x_][y_ - 1] == '#') return; 
                shot = true;
                x = x_;
                y = y_ - 1;
                mapa[x][y] = '<';
                return;
    }
}

bool dardo_t::get_shot(){
    return shot;
}

void dardo_t::set_shot(bool state){
    shot = state;
}
