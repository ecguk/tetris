#include "game.h"
Game::Game() {
    for (int i = 0; i < BOARD_WIDTH; ++i) {
        for (int j = 0; j < BOARD_HEIGHT; ++j) {
            board_[i][j] = false;
        }
    }
}

void Game::update() {
    // Add game logic here
}

void Game::draw() {
    // Add drawing logic here
}

bool Game::shouldExit() {
    // Add exit condition here
    return false;
}