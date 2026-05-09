#ifndef KING_H
#define KING_H

#include "Piece.h"

class Rook : public Piece {
public:
    Rook(char c) : Piece(c) {}
    string getName() override { return "Rook"; }
    char getSymbol() override { return (color == 'W') ? 'R' : 'r'; }
    bool isValidMove(Board* b, int sx, int sy, int dx, int dy) override;
};

class Queen : public Piece {
public:
    Queen(char c) : Piece(c) {}
    string getName() override { return "Queen"; }
    char getSymbol() override { return (color == 'W') ? 'Q' : 'q'; }
    bool isValidMove(Board* b, int sx, int sy, int dx, int dy) override;
};

class King : public Piece {
public:
    King(char c) : Piece(c) {}
    string getName() override { return "King"; }
    char getSymbol() override { return (color == 'W') ? 'K' : 'k'; }
    bool isValidMove(Board* b, int sx, int sy, int dx, int dy) override;
};
#endif
