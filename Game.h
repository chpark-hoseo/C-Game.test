#pragma once
#include <ncurses.h>

#include "Player.h"
class Game
{
public:
 Game();
 ~Game();

 bool init();
 void handleEvents();
 void update();
 void render();
 void clean();
 bool running();

private:
 bool m_bRunning;
 int m_input;
 //int playerX, playerY;
 //int bulletX, bulletY;
 //bool bulletFire;

 Player m_player;
 
};