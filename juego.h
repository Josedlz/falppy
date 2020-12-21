#ifndef JUEGO_H
#define JUEGO_H

#include <iostream>
#include <vector>
#include "jugador.h"
#include "enemigo.h"
#include "dardo.h"
#include "bola.h"
#include "cura.h"

#include <unistd.h>
#include <termios.h>

class juego_t 
{
  private:
    int* input;
    bool juego_over = false;
    bool juego_won = false;
    bool next_stage = false;

    int n = 17;
    int m = 17;
    std::vector<std::vector<char>> ground{17, std::vector<char>(m)};

    bool controlling_jugador = true;
    jugador_t jugador;
    std::vector<enemigo_t> enemies;
    std::vector<bola_t> bolas;
    std::vector<cura_t> curas;

    int lives_in_juego = 5;

    bool stage_ended = false;
    int stage = 1;
    //update functions 
    void update_control();
    void update_jugador();
    void update_bolas();
    void update_dardos();
    void update_cura();
    void update_enemigos();
    void update_nivel();
  public:
    juego_t();
    virtual ~juego_t() = default;
    void readr(int* key, bool wait);
    void update();
    void render();
    void encabezado();
    void pie();
    void escenario1();
    void escenario2();
    void escenario3();
    bool running();
    bool get_gano(){return juego_won;};
    bool get_perdio(){return juego_over;};

};

#endif
