#include <iostream>
#include "juego.h"

int main() {
  juego_t juego;
  int key = 0;
  while(juego.running()) {
    std::cout << "Presiona cualquier tecla:  " << '\n';
    juego.readr(&key, false);
    juego.update();
    system("clear");
    juego.render();
    key = ' ';
    if(juego.get_gano() == true) { 
      system("clear");
      std::cout << "GANASTE!";
      break;
    } else if(juego.get_perdio()) {
      std::cout << "Game Over :(" << '\n';
      break;
    }
  }

}