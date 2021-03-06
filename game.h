#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <vector>
#include "player.h"
#include "enemy.h"
#include "dardo.h"
#include "rock.h"
#include "cure.h"

#include <unistd.h>
//esta es para la funcion "readr"
#include <termios.h>

class game_t 
{
  private:
    int* input;
    bool game_over = false;
    bool game_won = false;
    bool next_stage = false;

    int n = 17;
    int m = 17;
    std::vector<std::vector<char>> ground{17, std::vector<char>(m)};

    bool controlling_player = true;
    player_t jugador;
    std::vector<enemy_t> enemies;
    std::vector<rock_t> rocks;
    std::vector<cure_t> cures;

    int lives_in_game = 5;

    bool stage_ended = false;
    int stage = 1;
    //update functions 
    void update_control();
    void update_player();
    void update_rocks();
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
    void create_header_game();
    void create_footer_game();
    void create_es_1();
    void create_es_2();
    void create_es_3();
    bool running();
    void set_game_won(bool ok) {game_won = ok;}
    bool get_game_won(){return game_won;};
    bool get_game_over(){return game_over;};

};

#endif
