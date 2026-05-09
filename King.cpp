#include "King.h"
#include "Board.h"

bool Rook::isValidMove(Board* b, int sx, int sy, int dx, int dy) {
    if (sx == dx || sy == dy) return b->isPathClear(sx, sy, dx, dy);
    return false;
}

bool Queen::isValidMove(Board* b, int sx, int sy, int dx, int dy) {
    bool straight = (sx == dx || sy == dy);
    bool diagonal = (abs(dx - sx) == abs(dy - sy));
    if (straight || diagonal) return b->isPathClear(sx, sy, dx, dy);
    return false;
}

bool King::isValidMove(Board* b, int sx, int sy, int dx, int dy) {
    return (abs(dx - sx) <= 1 && abs(dy - sy) <= 1);
}