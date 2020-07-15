#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <vector>
#include "player.h"
#include "enemy.h"
#include "dardo.h"

#include <unistd.h>
//esta es para la funcion "readr"
#include <termios.h>

class game_t 
{
  private:
    int* input;
    bool game_over = false;
    std::vector<char> lives_in_game = {'p', 'p', 'p'};
    std::vector<char> dardos_in_game;
    std::vector<char> enemies_in_game;

    int n = 17;
    int m = 17;
    std::vector<std::vector<char>> ground{17, std::vector<char>(m)};

    bool controlling_player = true;
    player_t jugador;
    std::vector<enemy_t> enemies;

    bool stage_ended = false;
    int stage = 1;
    //update functions 
    void update_control();
    void update_player();
    void update_darts();
    void update_cure();
    void update_enemies();
    void update_stage();
  public:
    game_t();
    virtual ~game_t() = default;
    void readr(int* key, bool wait);
    void update();
    void render();
    void next_stage();
    void create_header_game();
    void create_footer_game();
    void create_es_1();
    void create_es_2();
    void create_es_3();
    bool running();
};

#endif
