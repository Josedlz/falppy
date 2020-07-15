#include <iostream>
#include "game.h"
#include "enemy.h"

// Cabecera del juego (DECORADOR)
void game_t::create_header_game() {
  for(int j=0; j<37; j++) {
    std::cout << "#";
  }
  std::cout << '\n';
  for(int i=0; i<3; i++) {
    if(i == 1) {
      std::cout << " Falppie ";
    } else {
      for(int j=0; j<14; j++) {
        std::cout << "#";
      }
    }
  }
  std::cout << '\n';

  std::cout << "## lives: ";
  for(int i=0; i<lives_in_game.size(); i++) {
    std::cout << lives_in_game.at(i);
  }
  std::cout << "\\darts: ";
  std::cout << "dd"; // debe cambiar
  std::cout << "\\enemies: ";
  std::cout << "e"; // debe cambiar
  std::cout << " ##";

  std::cout << '\n';
  for(int j=0; j<37; j++) {
    std::cout << "#";
  }
  std::cout << '\n';
}
// Pie del juego (DECORADOR)
void game_t::create_footer_game() {
  for(int i=0; i<2; i++) {
    for(int j=0; j<37; j++) {
      std::cout << "#";
    }
    std::cout << '\n';
  }
}

// Escenario 1
void game_t::create_es_1() {
  ground = 
  { 
    { '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#' }, 
    { '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#' }, 
    { '#', ' ', ' ', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', ' ', ' ', ' ', '#' }, 
    { '#', ' ', '>', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#' }, 
    { '#', ' ', '>', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', ' ', ' ', '#' }, 
    { '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#' }, 
    { '#', ' ', ' ', ' ', ' ', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#' }, 
    { '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#' }, 
    { '#', ' ', ' ', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', ' ', ' ', ' ', '#' }, 
    { '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#' }, 
    { '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', ' ', ' ', ' ', ' ', ' ', '#' }, 
    { '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#' }, 
    { '#', ' ', ' ', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', ' ', ' ', '#' }, 
    { '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#' }, 
    { '#', '#', ' ', '#', '#', '#', ' ', '#', '#', ' ', '#', '#', '#', ' ', '#', '%', '#' }, 
    { '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#' }, 
    { '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#' }
  };
  jugador.set_coords(1, 1);
  enemy_t enemy_1(13, 13, ground);
  enemy_t enemy_2(15, 15, ground);
  enemies.push_back(enemy_1);
  enemies.push_back(enemy_2);
}

// Escenario 2
void game_t::create_es_2() {
  ground = 
  { 
    { '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#' }, 
    { '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#' }, 
    { '#', ' ', ' ', ' ', '>', ' ', ' ', ' ', ' ', '>', ' ', ' ', ' ', ' ', ' ', ' ', '#' }, 
    { '#', '#', '#', '#', '#', ' ', ' ', '#', '#', '#', ' ', ' ', '#', '#', '#', '#', '#' }, 
    { '#', ' ', '>', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#' }, 
    { '#', '#', '#', ' ', ' ', '#', '#', '#', ' ', ' ', '#', '#', '#', '#', '#', '#', '#' }, 
    { '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#' }, 
    { '#', '#', '#', '#', '#', '#', ' ', '#', '#', '#', '#', ' ', ' ', '#', '#', '#', '#' }, 
    { '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#' }, 
    { '#', ' ', '#', '#', '#', '#', '#', ' ', '#', '#', '#', ' ', ' ', '#', '#', '#', '#' }, 
    { '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#' }, 
    { '#', '#', '#', '#', '#', ' ', ' ', '#', '#', '#', ' ', ' ', '#', '#', '#', '#', '#' }, 
    { '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#' }, 
    { '#', '#', '#', ' ', ' ', '#', '#', '#', ' ', ' ', '#', '#', '#', '#', '#', '#', '#' }, 
    { '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#' }, 
    { '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '%', '#' }, 
    { '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#' }, 
  };
  jugador.set_coords(1, 1);
  enemy_t enemy_1(4, 15, ground);
  enemy_t enemy_2(6, 15, ground);
  enemy_t enemy_3(8, 15, ground);
  enemies.push_back(enemy_1);
}

// Escenario 3
void game_t::create_es_3() {
  ground = 
  { 
    // 0    1     2    3   4    5    6    7    8    9    10   11   12   13   14   15   16 
    { '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#' }, 
    { '#', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#' }, 
    { '#', ' ', '>', ' ', ' ', ' ', ' ', ' ', '#', ' ', '#', ' ', ' ', '#', '#', ' ', '#' }, 
    { '#', ' ', '#', ' ', ' ', '#', ' ', ' ', '#', ' ', '#', ' ', ' ', '#', '#', ' ', '#' }, 
    { '#', ' ', '#', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', '#', ' ', '#' }, 
    { '#', ' ', '#', ' ', ' ', '#', ' ', ' ', '#', ' ', '#', ' ', ' ', '#', '#', ' ', '#' }, 
    { '#', ' ', '#', ' ', ' ', '#', ' ', ' ', '#', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#' }, 
    { '#', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', '#', ' ', ' ', '#', '#', ' ', '#' }, 
    { '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', '#', ' ', ' ', '#', '#', ' ', '#' }, 
    { '#', ' ', ' ', ' ', ' ', '#', ' ', ' ', '#', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#' }, 
    { '#', ' ', ' ', ' ', ' ', '#', ' ', ' ', '#', ' ', '#', ' ', ' ', '#', '#', ' ', '#' }, 
    { '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', '#', ' ', ' ', '#', '#', ' ', '#' }, 
    { '#', ' ', '#', ' ', '>', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', '#', '#', ' ', '#' }, 
    { '#', ' ', '#', '#', '#', '#', ' ', '>', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#' }, 
    { '#', '>', '#', '#', '#', '#', '#', '#', '#', '#', ' ', '>', ' ', ' ', '#', ' ', '#' }, 
    { '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', ' ', '#', ' ', ' ', '#', '%', '#' }, 
    { '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#' }, 
  };
  jugador.set_coords(1, 1);
  enemy_t enemy_1(12, 4, ground);
  enemy_t enemy_2(14, 15, ground);
  enemy_t enemy_3(12, 3, ground);
  enemy_t enemy_4(15, 10, ground);
  enemy_t enemy_5(8, 15, ground);
  enemies.push_back(enemy_1);
}

// Escenario 1 es llamado en el constructor del juego
game_t::game_t(){
  create_es_1();
}

// FUNCION LECTORA DE KEYBOARD SOLO PARA LINUX - REPL.IT
// Esta funcion lee el input del teclado. 
// Si "wait" es true espera a que el usuario ingrese algo, si no, espera un tiempo default y continua
void game_t::readr(int* key, bool wait) {
  input = key;
  // Prepara el system para poder recibir raw input
  struct termios old = {0};
  if(tcgetattr(0, &old) < 0)
    perror("tcsetattr()");
  old.c_lflag &= ~ICANON;
  old.c_lflag &= ~ECHO;
  if(tcsetattr(0, TCSANOW, &old) < 0)
    perror("tcsetattr ICANON");
  // Define si quiere esperar algun input
  old.c_cc[VMIN] = wait;
  old.c_cc[VTIME] = 3; //este es el tiempo que espera por un input
  // Recibe el input si hay
  if(read(0, input, 1) == -1)
    perror ("read()");
  // Regresa el system a como estaba inicialmente
  old.c_lflag |= ICANON;
  old.c_lflag |= ECHO;
  if(tcsetattr(0, TCSADRAIN, &old) < 0)
    perror ("tcsetattr ~ICANON");
}

// Manejar el dardo
void game_t::update_control() {
  std::vector<dardo_t>& v = jugador.get_dardos();
  //si presiono la tecla de control una vez
  if(*input == 'j'){
    //si no estoy controlando al jugador
    //retorno el control a el
    if(!controlling_player){
      controlling_player = true;
      return;
    }
    //pero si estoy controlando al jugador
    //debo comprobar si hay dardos en el aire
    //que puedo controlar
    for(int i = 0; i < v.size(); i++){
      if(v[i].get_shot() && v[i].get_control()){
        controlling_player = false;
        return;
      }
    }
    //si no hay, no hago nada
  }
}

// Actualizar al jugador
void game_t::update_player() {
  if(!jugador.get_alive()){
    game_over = true;
    // Implementar el counter de vidas.
  }

  if(controlling_player){
    switch(*input){
      case 'a' : jugador.move(0, -1, ground);
                 break;
      case 's' : jugador.move(1, 0, ground);
                  break;
      case 'd' : jugador.move(0, 1, ground);
                  break;
      case 'w' : jugador.move(-1, 0, ground);
                  break;
      case 'q' : game_over = true;
      default: jugador.move(0, 0, ground);
    }
  }

  for(int i = 0; i < enemies.size(); i++) {
    if(enemies[i].get_x() == jugador.get_x() && enemies[i].get_y() == jugador.get_y()){
      jugador.set_alive(false);
      ground[jugador.get_x()][jugador.get_y()] = 'x';
    }
  }

}

// Actualizar dardos
void game_t::update_darts() {
  std::vector<dardo_t>& v = jugador.get_dardos();
  //si presione la tecla de disparar
  if(*input == 'k'){
  //disparar el que todavia no se ha disparado
    for(int i = 0; i < v.size(); i++){
      if(!v[i].get_shot()){
        v[i].shoot(jugador.get_x(), jugador.get_y(), jugador.get_direction(), ground);
        break;
      }
    }
  }
  //mover a los que estan en el aire
  //dos casos para estos dardos:
  //1. no estoy controlando al jugador,
  //por lo que controlo a los que puedo controlar
  if(!controlling_player) {
    for(int i = 0; i < v.size(); i++){
      if(v[i].get_shot()){
        if(v[i].get_control()){
          switch(*input){
            case 'a' : v[i].move(0, -1, ground);
                      break;
            case 's' : v[i].move(1, 0, ground);
                        break;
            case 'd' : v[i].move(0, 1, ground);
                        break;
            case 'w' : v[i].move(-1, 0, ground);
                        break;
            case 'q' : game_over = true;
            default: v[i].move(0, 0, ground);
          }
        }else{
          //checkeo si el dardo ha llegado al piso
          if(ground[v[i].get_x() + 1][v[i].get_y()] == '#'){
            v[i].set_shot(false);
          }
          v[i].move(1, 0, ground);
        }
      }
    }
  }
}

void game_t::update_cure() {

}

// Actualizar enemigos
void game_t::update_enemies() {
  //checkeamos si los enemigos siguen vivos
  // TODO
  //borramos los enemigos del mapa si estan muertos
  for(int i = 0; i < enemies.size(); i++){
    if(!enemies[i].get_alive()){
      ground[enemies[i].get_x()][enemies[i].get_y()] = ' ';
    }
  }
}

void game_t::update_stage() {
  switch(stage){
    case 1 : create_es_1();
              break;
    case 2 : create_es_2();
              break;
    default: create_es_3();
              break;
  }
}

// Update
void game_t::update() {
  update_control();
  update_player();
  update_darts();
  update_cure();
  update_enemies();
}

// Renderizar el juego
void game_t::render() {
  create_header_game();
  for(int i = 0; i < n; i++){
    std::cout << "##";
    for(int j = 0; j < m; j++){
      if(m-j == 1) {
        std::cout << ground[i][j];
      } else {
        std::cout << ground[i][j] << " ";
      }
    }
    std::cout << "##";
    std::cout << '\n';
  }
  create_footer_game();
}

// 
bool game_t::running(){
  return game_over ? false : true;
}
