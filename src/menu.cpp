#include <iostream>
#include <vector>
#include <ncurses.h>

#include "engine.hpp"
#include "globals.hpp"
#include "menu.hpp"

Menu::Menu(std::vector<std::string> items, int sx, int sy) {
    char inp;
    bool form = true;
    unsigned int selected = 0;

    wmove(eng.win, sx, sy);

    while (form) {
        clear();
        for (int i = 0; i < items.size(); i++) {
            if (i == selected) {
                attron(A_REVERSE);
                wmove(eng.win, i, 0);
                wprintw(eng.win, items[i].c_str());
                attroff(A_REVERSE);
            } else {
                wmove(eng.win, i, 0);
                wprintw(eng.win, items[i].c_str());
            }
        }
        refresh();
        inp = getch();
        switch (inp) {
            case 'w':{
                selected--;
                break;
            } case 'd':{
                selected++;
                break;
            } case ' ':{
                wclear(eng.win);
                wprintw(eng.win, "HMMM");
            }
        }
    }
}