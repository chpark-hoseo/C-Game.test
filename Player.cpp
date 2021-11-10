#include "Player.h"
#include <ncurses.h>


Player::Player()
{
 playerX = 10;
 playerY = 10;
}

Player::~Player()
{
}

void Player::update()
{
  m_bullet.update();
}

void Player::draw()
{
  mvprintw(playerY, playerX,"▲");
  m_bullet.draw();
}

void Player::clean()
{
}

void Player::handleInput(int input)
{
  switch(input)
  {
    case KEY_UP: 
      --playerY; 
    break;
    
    case KEY_DOWN: 
      ++playerY; 
    break;
      
    case KEY_LEFT: 
      --playerX; 
    break;
    
    case KEY_RIGHT: 
      ++playerX; 
    break;

    case ' ': 
      m_bullet.fire(true, playerX, playerY);
    break;
  }   
}