#include "Game.h"

#include<ncurses.h>
#include <iostream>
#include <unistd.h>

Game *g_game = 0;

int main(int argc, char* args[])
{
  g_game = new Game();
  g_game->init();
  while (g_game->running())
  {
    g_game->handleEvents();
    g_game->update();
    g_game->render();
  }

  sleep(1);

  g_game->clean();
  return 0;
}