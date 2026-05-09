#ifndef GAME_H
#define GAME_H

#include "Board.h"

class Game {
private:
    Board board;
    char turn;
    bool gameOver;
    void printLegend();
public:
    Game();
    void run();
};

#endif