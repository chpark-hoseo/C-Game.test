#pragma once

#include "Bullet.h"

class Player {
  int playerX, playerY;

  Bullet m_bullet;
  
public:
  Player();
  virtual ~Player();

  void update();
  void draw();
  void clean();

  void handleInput(int input);

  int getPlayerX() { return playerX;}
  int getPlayerY() { return playerY;}
};