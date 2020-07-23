#include <iostream>
//esta es para la funcion "getchar"

#include "game.h"

// Main
int main() 
{
  game_t g;
  int key = 0;
  // char key_char;
  // system("clear");
  while(g.running()) {
    std::cout << "Presione tecla:  " << '\n';
    g.readr(&key, false);
    //std::cout << char(key) << '\n';
    g.update();
    system("clear");
    g.render();
    key = ' ';
    if(g.get_game_won() == true) { 
      system("clear");
      std::cout << "\033[0;35;47mLo lograste, crack!\033[0m";
      break;
    } else if(g.get_game_over()) {
      std::cout << "Game Over :(" << '\n';
      break;
    }
  }

}