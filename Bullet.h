#pragma once

class Bullet {
  int m_input;
  int bulletX, bulletY;
  bool bulletFire;

public:
  Bullet();
  virtual ~Bullet();

  void update();
  void draw();
  void clean();

  void fire(bool active, int x, int y);

  void handleInput();
};