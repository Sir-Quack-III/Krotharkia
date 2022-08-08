#include <iostream>
#include <ncurses.h>

#include "engine.hpp"
#include "menu.hpp"
#include "globals.hpp"

int main(void) {
    eng.Init();

    box(eng.win, 0, 0);

    Menu menu({"Begin", "Load", "Exit"}, 3, 3);
    wrefresh(eng.win);

    eng.End();
    return 0;
}