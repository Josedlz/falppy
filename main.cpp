#include <iostream>
#include "juego.h"

int main() {
  juego_t g;
  int key = 0;
  while(g.running()) {
    std::cout << "Presiona cualquier tecla:  " << '\n';
    g.readr(&key, false);
    g.update();
    system("clear");
    g.render();
    key = ' ';
    if(g.get_juego_won() == true) { 
      system("clear");
      std::cout << "GANASTE!";
      break;
    } else if(g.get_juego_over()) {
      std::cout << "Game Over :(" << '\n';
      break;
    }
  }

}