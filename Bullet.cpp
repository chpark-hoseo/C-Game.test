#include "Bullet.h"
#include <ncurses.h>


Bullet::Bullet ()
{
  bulletX = 0;
  bulletY = 0;
  bulletFire = false;
}

Bullet::~Bullet()
{
}

void Bullet::update()
{
  if (bulletFire) {
    bulletY--;
    if ( bulletY < 1 ) 
      bulletFire = false;
  }
}

void Bullet::draw()
{
  if ( bulletFire ) {
    mvprintw(bulletY,bulletX, "↑");
  }
}

void Bullet::clean()
{
}

void Bullet::handleInput()
{
}

void Bullet::fire(bool active, int x, int y)
{
  bulletFire = active;

  bulletX = x;
  bulletY = y;
}