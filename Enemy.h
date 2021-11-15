#pragma once


class Enemy {
  int m_X, m_Y;
  int m_speed;
  int m_health;
  
public:
  Enemy();
  virtual ~Enemy();

  void spawn(int x, int y, int speed, int health);
  void update();
  void draw();
  void clean();

  bool isCollision(int x, int y);
};