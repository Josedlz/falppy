#include <iostream>
#include "game.h"
#include "enemy.h"
#include "rock.h"
#include "cure.h"

// Cabecera del juego (DECORADOR)
void game_t::create_header_game() {
  for(int j=0; j<50; j++) {
    std::cout << "\033[1;33m#\033[0m";
  }
  std::cout << '\n';
  for(int i=0; i<3; i++) {
    if(i == 1) {
      std::cout << "\033[1;4;35m Falppy \033[0m";
    } else {
      for(int j=0; j<50/2 - 4; j++) 
        std::cout << "\033[1;33m#\033[0m";
    }
  }
  std::cout << '\n';

  std::cout << "## lives: ";
  for(int i=0; i<lives_in_game; i++) {
    std::cout << "p"; 
  }
  std::cout << "\\darts: ";
  
  std::cout << "dd"; // debe cambiar
  std::cout << "\\enemies: ";
  std::cout << "e"; // debe cambiar
  std::cout << " ##";

  std::cout << '\n';
  for(int j=0; j<50; j++) {
    std::cout << "\033[1;32m#\033[0m";
  }
  std::cout << '\n';
}
// Pie del juego (DECORADOR)
void game_t::create_footer_game() {
  for(int i=0; i<2; i++) {
    for(int j=0; j<50; j++) {
      std::cout << "\033[1;32m#\033[0m";
    }
    std::cout << '\n';
  }
}

// Escenario 1
void game_t::create_es_1() {
  ground = 
  { 
    // 0    1     2    3   4    5    6    7    8    9    10   11   12   13   14   15   16 
    { '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#' }, //0
    { '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#' }, //1 
    { '#', ' ', ' ', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', ' ', ' ', ' ', '#' }, //2 
    { '#', ' ', '>', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#' }, //3 
    { '#', ' ', '>', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', ' ', ' ', '#' }, //4 
    { '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#' }, //5 
    { '#', ' ', ' ', ' ', ' ', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#' }, //6 
    { '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#' }, //7
    { '#', ' ', ' ', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', ' ', ' ', ' ', '#' }, //8 
    { '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#' }, //9
    { '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', ' ', ' ', ' ', ' ', ' ', '#' }, //10
    { '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#' }, //11
    { '#', ' ', ' ', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', ' ', ' ', '#' }, //12
    { '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#' }, //13
    { '#', '#', ' ', '#', '#', '#', ' ', '#', '#', ' ', '#', '#', '#', '#', '#', '%', '#' }, //14 
    { '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#' }, //15 
    { '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#' }  //16
  };

  jugador.set_coords(1, 1);
  // enemy_t enemy_1(13, 14, ground);
  enemy_t enemy_2(5, 15, ground);
  // enemies.push_back(enemy_1);
  enemies.push_back(enemy_2);
  rock_t rock_1(3, 10, ground);
  rock_t rock_2(5, 9, ground);
  rock_t rock_3(7, 8, ground);
  rock_t rock_4(11, 5, ground);
  rocks.push_back(rock_1);
  rocks.push_back(rock_2);
  rocks.push_back(rock_3);
  rocks.push_back(rock_4);
  //cure_t cure_1(1,12, ground);
  cure_t cure_1(11,13, ground);
  cures.push_back(cure_1);
}

// Escenario 2
void game_t::create_es_2() {
  ground = 
  { 
    // 0    1     2    3   4    5    6    7    8    9    10   11   12   13   14   15   16 
    { '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#' }, 
    { '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#' }, 
    { '#', '>', ' ', ' ', 'c', ' ', ' ', 'o', ' ', '>', ' ', ' ', ' ', ' ', ' ', ' ', '#' }, 
    { '#', '#', '#', '#', '#', ' ', ' ', '#', '#', '#', ' ', ' ', '#', '#', '#', '#', '#' }, 
    { '#', ' ', ' ', ' ', ' ', '>', ' ', 'o', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#' }, 
    { '#', '#', '#', ' ', ' ', '#', '#', '#', ' ', ' ', '#', '#', '#', '#', '#', '#', '#' }, 
    { '#', ' ', ' ', ' ', ' ', '>', ' ', 'o', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#' }, 
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
  enemies.push_back(enemy_2);
  enemies.push_back(enemy_3);
  rock_t rock_1(2, 7, ground);
  rock_t rock_2(4, 7, ground);
  rock_t rock_3(6, 7, ground);
  rocks.push_back(rock_1);
  rocks.push_back(rock_2);
  rocks.push_back(rock_3);
  cure_t cure_1(2,4, ground);
  cures.push_back(cure_1);
}

// Escenario 3
void game_t::create_es_3() {
  ground = 
  { 
    // 0    1     2    3   4    5    6    7    8    9    10   11   12   13   14   15   16 
    { '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#' }, 
    { '#', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#' }, 
    { '#', ' ', 'c', ' ', ' ', ' ', ' ', ' ', '#', ' ', '#', ' ', ' ', '#', '#', ' ', '#' }, 
    { '#', ' ', '#', ' ', ' ', '#', ' ', ' ', '#', ' ', '#', ' ', ' ', '#', '#', ' ', '#' }, 
    { '#', ' ', '#', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', '#', ' ', '#' }, 
    { '#', ' ', '#', ' ', ' ', '#', ' ', ' ', '#', ' ', '#', ' ', ' ', '#', '#', ' ', '#' }, 
    { '#', ' ', '#', ' ', ' ', '#', ' ', ' ', '#', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#' }, 
    { '#', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', '#', ' ', ' ', '#', '#', ' ', '#' }, 
    { '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', '#', ' ', ' ', '#', '#', ' ', '#' }, 
    { '#', ' ', ' ', ' ', ' ', '#', ' ', ' ', '#', ' ', '#', ' ', ' ', '>', ' ', ' ', '#' }, 
    { '#', ' ', ' ', ' ', ' ', '#', ' ', ' ', '#', ' ', '#', ' ', ' ', '#', '#', ' ', '#' }, 
    { '#', ' ', '>', ' ', ' ', ' ', ' ', ' ', '#', ' ', '#', ' ', ' ', '#', '#', ' ', '#' }, 
    { '#', ' ', '#', '>', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', '#', '#', ' ', '#' }, 
    { '#', ' ', '#', '#', '#', '#', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#' }, 
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
  enemies.push_back(enemy_2);
  enemies.push_back(enemy_3);
  enemies.push_back(enemy_4);
  enemies.push_back(enemy_5);
  rock_t rock_1(1, 10, ground);
  rock_t rock_2(2, 5, ground);
  rock_t rock_3(4, 8, ground);
  rock_t rock_4(11, 5, ground);
  rock_t rock_5(12, 5, ground);
  rock_t rock_6(12, 8, ground);
  rocks.push_back(rock_1);
  rocks.push_back(rock_2);
  rocks.push_back(rock_3);
  rocks.push_back(rock_4);
  rocks.push_back(rock_5);
  rocks.push_back(rock_6);
  cure_t cure_1(2,2, ground);
  cures.push_back(cure_1);
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

// Actualizar el control jugador / dardo
void game_t::update_control(){
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
  }
  //debo ver si hay algun dardo para controlar
  if(!controlling_player){
    for(int i = 0; i < v.size(); i++){
      if(v[i].get_shot() && v[i].get_control()){
        return;
      }
    }
    controlling_player = true;
  }
}

// Actualizar al jugador
void game_t::update_player() {
  if(!jugador.get_alive()){
    game_over = true;
    // Implementar el counter de vidas.
    return;
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
                 break;
      default: ground[jugador.get_x()][jugador.get_y()] = 'p';
    }
  }

    for(int i = 0; i < enemies.size(); i++) {
      if(enemies[i].get_x() == jugador.get_x() && enemies[i].get_y() == jugador.get_y()){
        jugador.set_alive(false);
        ground[jugador.get_x()][jugador.get_y()] = 'x';
    }
  }
}

void game_t::update_rocks(){
  //verificar si hay un enemigo debajo
  for(int i = 0; i < rocks.size(); i++){
    for(int j = 0;  j < enemies.size(); j++){
      if(rocks[i].get_x() + 1 == enemies[j].get_x() && rocks[i].get_y() == enemies[j].get_y()){
        enemies.erase(enemies.begin() + j);
      }
    }
  }
  for(int i = 0; i < rocks.size(); i++){
    //if(jugador.get_x() == rocks[i].get_x() && jugador.get_y() == rocks[i].get_y() + 1)  
    if(jugador.get_x() == rocks[i].get_x() && jugador.get_y() == rocks[i].get_y()){
      int dir = jugador.get_direction();
      if(dir == 3){
        rocks.erase(rocks.begin() + i);
      }else if (dir == 2){
        rocks[i].move(0, 1, ground);
      }else if (dir == 4){
        rocks[i].move(0, -1, ground);
      }
    }
    rocks[i].move(1, 0, ground);
  }
}

// Actualizar dardos
void game_t::update_darts() {

  std::vector<dardo_t>& v = jugador.get_dardos();

  // for(auto d : v) std::cout << 'd';
  // std::cout << std::endl;

  //actualizamos municion
  int a = 0;
  for(int i = 0; i < v.size(); i++){
    if(!v[i].get_shot()){
      a++;
    }
  }
  jugador.set_ammo(a);
  //si presione la tecla de disparar y tengo municion
  if(*input == 'k' && jugador.get_ammo() > 0){
  //disparar el que todavia no se ha disparado
    for(int i = 0; i < v.size(); i++){
      if(!v[i].get_shot()){
        v[i].shoot(jugador.get_x(), jugador.get_y(), jugador.get_direction(), ground);
        break;
      }
    }
  }
  //es un dardo disparado pero que no puedo controlar
  //lo muevo hacia abajo siempre
  //checkeo si el dardo ha llegado al piso
  for(int i = 0; i < v.size(); i++){
    if(v[i].get_shot() && !v[i].get_control()){
      v[i].move(1, 0, ground);
      if(ground[v[i].get_x() + 1][v[i].get_y()] == '#' && v[i].get_direction() == 3){
        ground[v[i].get_x()][v[i].get_y()] = '>';
        v.erase(v.begin() + i);
      }
    }
  }
  //mover a los que estan en el aire
  for(int i = 0; i < v.size(); i++){
    if(v[i].get_shot() && v[i].get_control()){
      switch (v[i].get_direction()){
        case 4 : v[i].move(0, -1, ground);
                    break;
        case 3 : v[i].move(1, 0, ground);
                    break;
        case 2 : v[i].move(0, 1, ground);
                    break;
        case 1 : v[i].move(-1, 0, ground);
                    break;
        case 'q' : game_over = true;
                    break;
      }
    }
  }
  //si estoy controlando los dardos, los cambio de direccion
  if(!controlling_player) {
    for(int i = 0; i < v.size(); i++){
      if(v[i].get_shot() && v[i].get_control()){
        switch(*input){
          case 'a' : v[i].set_direction(4);
                     break;
          case 's' : v[i].set_direction(3);;
                     break;
          case 'd' : v[i].set_direction(2);;
                     break;
          case 'w' : v[i].set_direction(1);;
                     break;
          case 'q' : game_over = true;
                      break;
        }
      }
    }
  }
}

void game_t::update_cure() {
  for(int i = 0; i < cures.size(); i++) {
    if(cures[i].get_won()) {
      game_over = true;
      return;
    }
  }

  for(int i = 0; i < cures.size(); i++) {
     if(jugador.get_x() == cures[i].get_x() && jugador.get_y() == cures[i].get_y()){
      int dir = jugador.get_direction();
      if(dir == 3){
        cures.erase(cures.begin() + i);
      }else if (dir == 2){
        cures[i].move(0, 1, ground);
      }else if (dir == 4){
        cures[i].move(0, -1, ground);
      }
    }
    cures[i].move(1, 0, ground);
  }
}

// Actualizar enemigos
void game_t::update_enemies() {
  // for(auto e : enemies){
  //   std::cout << 'e';
  // }
  // std::cout << std::endl;
  // for(auto e : enemies){
  //   std::cout << e.get_x() << " " << e.get_y() << std::endl;
  // }

  //checkeamos si los enemigos siguen vivos
  //borramos los enemigos si estan muertos
  //y los dardos tambien si dieron en su blanco
  std::vector<dardo_t>& v = jugador.get_dardos();
  for(int i = 0; i < enemies.size(); i++){
    for(int j = 0; j < v.size(); j++){
      if((v[j].get_x() == enemies[i].get_x()) && (v[j].get_y() == enemies[i].get_y())){
        int x = v[j].get_x(); int y = v[j].get_y();
        enemies.erase(enemies.begin() + i);
        v.erase(v.begin() + j);
        std::cout <<"////////ENEMIGO MUERTO//////////" << std::endl;
        ground[x][y] = ' ';
      }
    } 
  }
  //iniciar el movimiento de la rutina del enemigo
    //TODO
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
  update_rocks();
  update_darts();
  update_cure();
  update_enemies();
}

// Renderizar el juego
void game_t::render() {
  create_header_game();
  for(int i = 0; i < n; i++){
    for(int j=0; j<50/2 - n; j++) 
      std::cout << "\033[1;32m#\033[0m";
    for(int j = 0; j < m; j++){
      if(m-j == 1) {
        std::cout << "\033[1;32m" << ground[i][j] << "\033[0m";
      } else {
        if(ground[i][j] == '#') {
          std::cout << "\033[1;32m" << ground[i][j] << "\033[0m" << " ";
        } else if (ground[i][j] == 'p'){
          std::cout << "\033[1;34m" << ground[i][j] << "\033[0m" << " ";
        } else if(ground[i][j] == 'e'){
          std::cout << "\033[1;31m" << ground[i][j] << "\033[0m" << " ";
        } else if(ground[i][j] == 'o'){
          std::cout << "\033[1;30m" << ground[i][j] << "\033[0m" << " ";
        } else if(ground[i][j] == '>'){
          std::cout << "\033[1;33m" << ground[i][j] << "\033[0m" << " ";
        } else if(ground[i][j] == '%'){
          std::cout << "\033[1;93m" << ground[i][j] << "\033[0m" << " ";
        } else {
          std::cout << "\033[1;34m" << ground[i][j] << "\033[0m" << " ";
        }
      }
    }
    for(int j=0; j<50/2 - n+1; j++) 
        std::cout << "\033[1;32m#\033[0m";
    std::cout << '\n';
  }
  create_footer_game();
}

// 
bool game_t::running(){
  return game_over ? false : true;
}
