#include <iostream>
#include "juego.h"
#include "enemigo.h"
#include "bola.h"
#include "cura.h"

// Cabecera del juego (DECORADOR)
void juego_t::create_header_juego() {
  for(int j=0; j<38; j++) {
    std::cout << "#";
  }
  std::cout << '\n';
  for(int j=0; j<38; j++) {
    std::cout << "#";
  }
  std::cout << '\n';
}
// Pie del juego (DECORADOR)
void juego_t::create_footer_juego() {
  for(int i=0; i<2; i++) {
    for(int j=0; j<38; j++) {
      std::cout << "#";
    }
    std::cout << '\n';
  }
}

// Escenario 1
void juego_t::create_es_1() {
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

  jugador.set_posicion(1, 1);
  enemigo_t enemigo_2(5, 15, ground);
  enemies.push_back(enemigo_2);
  bola_t bola_1(3, 10, ground);
  bola_t bola_2(5, 9, ground);
  bola_t bola_3(7, 8, ground);
  bola_t bola_4(11, 5, ground);
  bolas.push_back(bola_1);
  bolas.push_back(bola_2);
  bolas.push_back(bola_3);
  bolas.push_back(bola_4);
  cura_t cura_1(11,13, ground);
  curas.push_back(cura_1);
}

// Escenario 2
void juego_t::create_es_2() {
  ground = 
  { 
    // 0    1     2    3   4    5    6    7    8    9    10   11   12   13   14   15   16 
    { '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#' }, 
    { '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#' }, 
    { '#', '>', ' ', ' ', ' ', ' ', ' ', 'o', ' ', '>', ' ', ' ', ' ', ' ', ' ', ' ', '#' }, 
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
  jugador.set_posicion(1, 1);
  enemigo_t enemigo_1(4, 15, ground);
  enemigo_t enemigo_2(6, 15, ground);
  enemigo_t enemigo_3(8, 15, ground);
  enemies.push_back(enemigo_1);
  enemies.push_back(enemigo_2);
  enemies.push_back(enemigo_3);
  bola_t bola_1(2, 7, ground);
  bola_t bola_2(4, 7, ground);
  bola_t bola_3(6, 7, ground);
  bolas.push_back(bola_1);
  bolas.push_back(bola_2);
  bolas.push_back(bola_3);
  // cura_t cure_1(2,4, ground);
  curas.clear();
  cura_t cura_2(13,14, ground);
  curas.push_back(cura_2);
}

// Escenario 3
void juego_t::create_es_3() {
  ground = 
  { 
    // 0    1     2    3   4    5    6    7    8    9    10   11   12   13   14   15   16 
    { '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#' }, 
    { '#', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#' }, 
    { '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', '#', ' ', ' ', '#', '#', ' ', '#' }, 
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
    { '#', ' ', '#', '#', '#', '#', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', 'c', ' ', '#' }, 
    { '#', '>', '#', '#', '#', '#', '#', '#', '#', '#', ' ', '>', ' ', ' ', '#', ' ', '#' }, 
    { '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', ' ', '#', ' ', ' ', '#', '%', '#' }, 
    { '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#' }, 
  };
  jugador.set_posicion(1, 1);
  enemigo_t enemigo_1(12, 4, ground);
  enemigo_t enemigo_2(14, 15, ground);
  enemigo_t enemigo_3(12, 3, ground);
  enemigo_t enemigo_4(15, 10, ground);
  enemigo_t enemigo_5(8, 15, ground);
  enemies.push_back(enemigo_1);
  enemies.push_back(enemigo_2);
  enemies.push_back(enemigo_3);
  enemies.push_back(enemigo_4);
  enemies.push_back(enemigo_5);
  bola_t bola_1(1, 10, ground);
  bola_t bola_2(2, 5, ground);
  bola_t bola_3(4, 8, ground);
  bola_t bola_4(11, 5, ground);
  bola_t bola_5(12, 5, ground);
  bola_t bola_6(12, 8, ground);
  bolas.push_back(bola_1);
  bolas.push_back(bola_2);
  bolas.push_back(bola_3);
  bolas.push_back(bola_4);
  bolas.push_back(bola_5);
  bolas.push_back(bola_6);
  //cura_t cure_1(2,2, ground);
  curas.clear();
  cura_t cura_3(13,14, ground);
  curas.push_back(cura_3);
}

// Escenario 1 es llamado en el constructor del juego
juego_t::juego_t(){
  create_es_1();
}

// FUNCION LECTORA DE KEYBOARD SOLO PARA LINUX - REPL.IT
// Esta funcion lee el input del teclado. 
// Si "wait" es true espera a que el usuario ingrese algo, si no, espera un tiempo default y continua
void juego_t::readr(int* key, bool wait) {
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
void juego_t::update_control(){
  std::vector<dardo_t>& v = jugador.get_dardos();
  //si presiono la tecla de control una vez
  if(*input == 'j'){
    //si no estoy controlando al jugador
    //retorno el control a el
    if(!controlling_jugador){
      controlling_jugador = true;
      return;
    }
    //pero si estoy controlando al jugador
    //debo comprobar si hay dardos en el aire
    //que puedo controlar
    for(int i = 0; i < v.size(); i++){
      if(v[i].get_shot() && v[i].get_control()){
        controlling_jugador = false;
        return;
      }
    }
  }
  //debo ver si hay algun dardo para controlar
  if(!controlling_jugador){
    for(int i = 0; i < v.size(); i++){
      if(v[i].get_shot() && v[i].get_control()){
        return;
      }
    }
    controlling_jugador = true;
  }
}

// Actualizar al jugador
void juego_t::update_jugador() {
  if(!jugador.get_alive()){
    juego_over = true;
    return;
  }

  if(controlling_jugador){
    switch(*input){
      case 'a' : jugador.move(0, -1, ground);
                 break;
      case 's' : jugador.move(1, 0, ground);
                 break;
      case 'd' : jugador.move(0, 1, ground);
                 break;
      case 'w' : jugador.move(-1, 0, ground);
                 break;
      case 'q' : juego_over = true;
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

void juego_t::update_bolas(){
  //verificar si hay un enemigo debajo
  for(int i = 0; i < bolas.size(); i++){
    for(int j = 0;  j < enemies.size(); j++){
      if(bolas[i].get_x() + 1 == enemies[j].get_x() && bolas[i].get_y() == enemies[j].get_y()){
        enemies.erase(enemies.begin() + j);
      }
    }
  }
  for(int i = 0; i < bolas.size(); i++){
    if(jugador.get_x() == bolas[i].get_x() && jugador.get_y() == bolas[i].get_y()){
      int dir = jugador.get_direccion();
      if(dir == 3){
        bolas.erase(bolas.begin() + i);
      }else if (dir == 2){
        bolas[i].move(0, 1, ground);
      }else if (dir == 4){
        bolas[i].move(0, -1, ground);
      }
    }
    bolas[i].move(1, 0, ground);
  }
}

// Actualizar dardos
void juego_t::update_darts() {

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
        v[i].shoot(jugador.get_x(), jugador.get_y(), jugador.get_direccion(), ground);
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
      if(ground[v[i].get_x() + 1][v[i].get_y()] == '#' && v[i].get_direccion() == 3){
        ground[v[i].get_x()][v[i].get_y()] = '>';
        v.erase(v.begin() + i);
      }
    }
  }
  //mover a los que estan en el aire
  for(int i = 0; i < v.size(); i++){
    if(v[i].get_shot() && v[i].get_control()){
      switch (v[i].get_direccion()){
        case 4 : v[i].move(0, -1, ground);
                    break;
        case 3 : v[i].move(1, 0, ground);
                    break;
        case 2 : v[i].move(0, 1, ground);
                    break;
        case 1 : v[i].move(-1, 0, ground);
                    break;
        case 'q' : juego_over = true;
                    break;
      }
    }
  }
  //si estoy controlando los dardos, los cambio de direccion
  if(!controlling_jugador) {
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
          case 'q' : juego_over = true;
                      break;
        }
      }
    }
  }
}

void juego_t::update_cura() {
  for(int i = 0; i < curas.size(); i++) {
    if(curas[i].get_won() == true && stage == 1) {
       next_stage = true;
       stage = 2;
       return;
    } else if(curas[i].get_won() == true && stage == 2) { 
      next_stage = true;
       stage = 3;
       return;
    } else if(curas[i].get_won() == true && stage == 3) { 
      juego_won = true;
      return;
    }
  }

  for(int i = 0; i < curas.size(); i++) {
     if(jugador.get_x() == curas[i].get_x() && jugador.get_y() == curas[i].get_y()){
      int dir = jugador.get_direccion();
      if(dir == 3){
        curas[i].move(1, 0, ground);
      }else if (dir == 2){
        curas[i].move(0, 1, ground);
      }else if (dir == 4){
        curas[i].move(0, -1, ground);
        std::cout << "\033[1;35mMoriii dir = 4\n\033[0m";
      }
    }
    curas[i].move(1, 0, ground);
  }
}

// Actualizar enemigos
void juego_t::update_enemies() {
  std::vector<dardo_t>& v = jugador.get_dardos();
  for(int i = 0; i < enemies.size(); i++){
    for(int j = 0; j < v.size(); j++){
      if((v[j].get_x() == enemies[i].get_x()) && (v[j].get_y() == enemies[i].get_y())){
        int x = v[j].get_x(); int y = v[j].get_y();
        enemies.erase(enemies.begin() + i);
        v.erase(v.begin() + j);
        ground[x][y] = ' ';
      }
    } 
  }
}

void juego_t::update_stage() {
  if(next_stage == true){
    if(stage == 1) {
      create_es_1();
      next_stage = false;
    } else if(stage == 2) {
      create_es_2();
      next_stage = false;
    }  else if(stage == 3) {
      next_stage = false;
      create_es_3();
    } 
  }
}

void juego_t::update() {
  update_control();
  update_jugador();
  update_bolas();
  update_darts();
  update_cura();
  update_enemies();
  update_stage();
}

void juego_t::render() {
  create_header_juego();
  for(int i = 0; i < n; i++){
    for(int j=0; j<38/2 - n; j++) 
      std::cout << "#";
    for(int j = 0; j < m; j++){
      if(m-j == 1) {
        std::cout << ground[i][j];
      } else {
        if(ground[i][j] == '#') {
          std::cout << ground[i][j] << " ";
        } else if (ground[i][j] == 'p'){
          std::cout << ground[i][j] << " ";
        } else if(ground[i][j] == 'e'){
          std::cout << ground[i][j]  << " ";
        } else if(ground[i][j] == 'o'){
          std::cout << ground[i][j]  << " ";
        } else if(ground[i][j] == '>'){
          std::cout << ground[i][j]  << " ";
        } else if(ground[i][j] == '%'){
          std::cout << ground[i][j]  << " ";
        } else if(ground[i][j] == 'c'){
          std::cout << ground[i][j]  << " ";
        } else {
          std::cout << ground[i][j]  << " ";
        }
      }
    }
    for(int j=0; j<38/2 - n+1; j++) 
        std::cout << "#";
    std::cout << '\n';
  }
  create_footer_juego();
}

// 
bool juego_t::running(){
  return juego_over ? false : true;
}
