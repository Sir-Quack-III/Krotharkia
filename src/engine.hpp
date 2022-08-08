#pragma once

#include <ncurses.h>

class Engine {
public:
    void Init();
    void End();

    WINDOW* win;
private:
};