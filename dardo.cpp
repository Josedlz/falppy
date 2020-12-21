#include "dardo.h"

void dardo_t::move(int dx, int dy, std::vector<std::vector<char>>& mapa){
    if(mapa[x + dx][y + dy] == '$' || mapa[x + dx][y + dy] == 'o' || mapa[x + dx][y + dy] == '@'){
        if(direccion == 4 && dx == 0 && dy == -1){
            control = false;
        }else
        if(direccion == 3 && dx == 1 && dy == 0){
            control = false;
        }else
        if(direccion == 2 && dx == 0 && dy == 1){
            control = false;
        }else
        if(direccion == 1 && dx == -1 && dy == 0){
            control = false;
        }
        return;
    }

    mapa[x][y] = ' ';

    x += dx;
    y += dy;

    if(dx == 0 && dy == -1){
        mapa[x][y] = '<';
        direccion = 4;
    } else {
        if(dx == 1 && dy == 0){
            mapa[x][y] = 'v'; 
            direccion = 3;
        } else {
            if(dx == 0 && dy == 1){
            mapa[x][y] = '>';
            direccion = 2;
            } else {
                if(dx == -1 && dy == 0){
                    mapa[x][y] = '^';
                    direccion = 1;
                }
                else{
                    switch(direccion){
                        case 1 : mapa[x][y] = '^';
                        case 3 : mapa[x][y] = 'v';
                        case 4 : mapa[x][y] = '<';
                        default : mapa[x][y] = '>';
                    }
                }
            }                                                                                          
        }
    }
}

void dardo_t::set_direccion(int d){
    direccion = d;
}

bool dardo_t::get_control(){
    return control;
}

void dardo_t::shoot(int x_, int y_, int dir, std::vector<std::vector<char>>& mapa){
    switch(dir){
        case 1: if(mapa[x_ - 1][y_] == '$') return; 
                shot = true;
                x = x_ - 1;
                y = y_;
                mapa[x][y] = '^';
                direccion = 1;
                return;
        case 2: if(mapa[x_][y_ + 1] == '$') return;
                shot = true;
                x = x_;
                y = y_ + 1;
                mapa[x][y] = '>';
                direccion = 2;
                return;
        case 3: if(mapa[x_ + 1][y_] == '$') return;
                shot = true;
                x = x_ + 1;
                y = y_;
                mapa[x][y] = 'v';
                direccion = 3;
                return;
        case 4: if(mapa[x_][y_ - 1] == '$') return; 
                shot = true;
                x = x_;
                y = y_ - 1;
                mapa[x][y] = '<';
                direccion = 4;
                return;
    }
}

bool dardo_t::disparar(){
    return shot;
}