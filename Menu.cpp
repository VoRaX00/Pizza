#include "Menu.h"
Menu::Menu()
{
    order = new Order();
}

void Menu::output()
{
    order->output();
    
}
