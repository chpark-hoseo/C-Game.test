#include "Enemy.h"
#include <ncurses.h>


Enemy::Enemy()
{
  m_X = m_Y = 0;
  m_speed = 1;
  m_health = 3;
}

Enemy::~Enemy()
{
}

void Enemy::update()
{
}

void Enemy::draw()
{
  mvprintw(m_Y, m_X, "▲");
}

void Enemy::clean()
{
}