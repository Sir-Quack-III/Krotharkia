#pragma once

class Player {
public:
    int x;
    int y;
    int vel;
    char graphics;

    Player(int psx, int psy, int pvel, char pgraphics = '@');
private:
};