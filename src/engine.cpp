#include <ncurses.h>

#include "engine.hpp"

void Engine::Init() {
    initscr();
    cbreak();
    noecho();

    win = newwin(30, 100, 0, 0);
    wrefresh(win);
}

void Engine::End() {
    getch();
    endwin();
}