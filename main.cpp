#include <iostream>
//esta es para la funcion "getchar"

#include "game.h"

using namespace std;

// Main
int main() 
{
  game_t g;
  int key = 0;
  // char key_char;
  // system("clear");
  while(g.running()) {
    cout << "Presione tecla:  " << endl;
    g.readr(&key, false);
    cout << char(key) << endl;
    g.update();
    //system("clear");
    g.render();
    key = ' ';
  }
  cout << "Game Over" << endl;
}