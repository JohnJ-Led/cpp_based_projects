#ifndef DATEINPUT_H
#define DATEINPUT_H

#include <vector>

void dataInput();
void cursorAdjust(std::vector<std::string> menuItems, int upMovement, int menuNum);
void updateMenu(std::vector<std::string> menuItems, int menuNum, double inputValue);

#endif