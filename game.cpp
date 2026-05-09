#include "Game.h"
#include<iostream>
Game::Game() : turn('W'), gameOver(false) {}

void Game::printLegend() {
    cout << "========================================\n"
        << "        CHESS GAME - OOP in C++\n"
        << "========================================\n"
        << " WHITE = UPPERCASE  |  BLACK = lowercase\n"
        << " P=Pawn  R=Rook  N=Knight\n"
        << " B=Bishop  Q=Queen  K=King\n"
        << "----------------------------------------\n"
        << " Enter move: row col row col (0 0 0 0 to quit)\n"
        << "========================================\n";
}

void Game::run() {
    board.setup();
    printLegend();
    while (!gameOver) {
        board.display();
        if (!board.hasValidMoves(turn)) {
            if (board.isCheck(turn)) cout << "\n CHECKMATE! " << (turn == 'W' ? "BLACK" : "WHITE") << " wins!\n";
            else cout << "\n STALEMATE! It's a draw!\n";
            break;
        }
        if (board.isCheck(turn)) cout << "  *** CHECK! ***\n";
        cout << (turn == 'W' ? " WHITE" : " BLACK") << "'s turn: ";
        int sx, sy, dx, dy;
        std::cin >> sx >> sy >> dx >> dy;
        if (sx == 0 && sy == 0 && dx == 0 && dy == 0) break;
        if (board.move(sx, sy, dx, dy, turn)) turn = (turn == 'W') ? 'B' : 'W';
        else cout << "  Invalid move!\n";
    }
}