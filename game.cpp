#include "game.h"
#include "enemy.h"

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

void game_t::create_es_2() {
  ground = 
  { 
    { '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#' }, 
    { '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#' }, 
    { '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#' }, 
    { '#', '#', '#', '#', '#', ' ', ' ', '#', '#', '#', ' ', ' ', '#', '#', '#', '#', '#' }, 
    { '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#' }, 
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

void game_t::create_es_3() {
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
    { '#', ' ', ' ', ' ', ' ', '#', ' ', ' ', '#', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#' }, 
    { '#', ' ', ' ', ' ', ' ', '#', ' ', ' ', '#', ' ', '#', ' ', ' ', '#', '#', ' ', '#' }, 
    { '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', '#', ' ', ' ', '#', '#', ' ', '#' }, 
    { '#', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', '#', '#', ' ', '#' }, 
    { '#', ' ', '#', '#', '#', '#', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#' }, 
    { '#', ' ', '#', '#', '#', '#', '#', '#', '#', '#', ' ', ' ', ' ', ' ', '#', ' ', '#' }, 
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

game_t::game_t(){
  create_es_1();
}

// FUNCION LECTORA DE KEYBOARD SOLO PARA LINUX - REPL.IT
// Esta funcion lee el input del teclado. 
// Si "wait" es true espera a que el usuario ingrese algo, si no, espera un tiempo default y continua

void game_t::readr(int* key, bool wait)
{
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
    //si no hay, no hago nada
  }
}

void game_t::update_player() {
  if(!jugador.get_alive()){
    game_over = true;
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

  for(int i = 0; i < enemies.size(); i++){
    if(enemies[i].get_x() == jugador.get_x() && enemies[i].get_y() == jugador.get_y()){
      jugador.set_alive(false);
      ground[jugador.get_x()][jugador.get_y()] = 'x';
    }
  }

}

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
  if(!controlling_player){
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

void game_t::update() {
  update_control();
  update_player();
  update_darts();
  update_cure();
  update_enemies();
}

void game_t::render() {
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      std::cout << ground[i][j] << " ";
    }
    std::cout << std::endl;
  }
}

bool game_t::running(){
  return game_over ? false : true;
}
