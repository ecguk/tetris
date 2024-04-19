
#ifndef GAME_H
#define GAME_H

#include "tetromino.h"

#define BOARD_WIDTH 10
#define BOARD_HEIGHT 20
#define LINES 40

#define DROP_DELAY 60

class Game {
private:
  
  bool board_[BOARD_WIDTH][BOARD_HEIGHT];

public:
  
  void update();

  
  void draw();

  
  bool shouldExit();

  Game();
};
#endif