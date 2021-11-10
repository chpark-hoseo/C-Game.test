#include "Game.h"

#include <locale.h>
#include <sgtty.h>
#include <unistd.h> 
#include <fcntl.h> 
Game::Game()
{
  m_bRunning = true;
}

Game::~Game()
{

}


bool Game::init()
{
  setlocale(LC_ALL,"");  // UTF 8 출력 

  initscr(); // ncurses 초기화
  keypad(stdscr, TRUE); 
  noecho(); // Don't echo any keypresses
  curs_set(FALSE); // Don't display a cursor
  
  //cbreak();
  //nocbreak();

  m_bRunning = true;
//  playerX = 10;
//  playerY = 10;
//  bulletFire = false;
  
  return true;
}


void Game::handleEvents()
{
  timeout(100);

  m_input = getch();
  

  /*
  if ( m_input == 'q') {
    m_bRunning = false;
  } else {
    m_player.handleInput(m_input);
  }
  */

  switch(m_input)
  {
   case 'q': 
      m_bRunning = false;
   break;  

  default:
    m_player.handleInput(m_input);
  break;
/*
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
      bulletX = playerX;
      bulletY = playerY-1;
      bulletFire = true;
    break;
    */
  }     
  
}


void Game::update()
{
  m_player.update();
}

void Game::render()
{
  clear(); // 화면을 모두 지움 

  //mvprintw(playerY, playerX,"▲");

  m_player.draw();


  refresh(); // 이 함수가 호출되기 전까지 수행했던 작업들을 스크린에 업데이트
}


bool Game::running()
{
  return m_bRunning;
}

void Game::clean()
{
 // delwin(m_win);
  endwin(); // Restore normal terminal behavior
}



