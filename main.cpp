#include <iostream>
#include "juego.h"
#include "screens.h"

int main() {
  setlocale(LC_ALL, "");
  juego_t juego;
  int key = 0;
  pantalla_inicio();
  std::cout << "Presione cualquier tecla para empezar\n";
  while(juego.running()) {
    juego.readr(&key, false);
    juego.update();
    system("clear");
    juego.render();
    key = ' ';
    if(juego.get_gano() == true) { 
      system("clear");
      pantalla_ganaste();
      break;
    } else if(juego.get_perdio()) {
      system("clear");
      pantalla_perdiste();
      break;
      return EXIT_SUCCESS;
    }
  }
}