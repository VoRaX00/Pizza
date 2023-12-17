#include "Menu.h"
#include <iostream>
#include "Mozzarella.h"
#include "MeatPizza.h"
#include "CheasePizza.h"
#include "PineapplePizza.h"

Menu::Menu()
{
    order = new Order();
    appender = new Appender();
    remover = new Remover();
}

void Menu::output()
{
    order->output();
    std::cout << "Want do you want to do?\n" 
    <<"1. Add Pizza\n"
    <<"2. Remove Pizza\n"
    <<"3. Complete the order\n";
    int num;
    bool ok = false;
    while (!ok)
    {
        std::cin >> num;
        if(std::cin.fail()){
            std::cout << "Fail enter, please repeate\n";
            continue;
        }
        switch (num)
        {
        case 1:
            std::cout << "Choose a pizza:\n" 
            << "1. Chease pizza\n" 
            << "2. Meat pizza\n"
            << "3. Mozzarella\n"
            << "4. Pineapple pizza\n";
            addPizza();
            ok = true;
            break;
        case 2:
            std::cout << "Choose a pizza:\n" 
            << "1. Chease pizza\n" 
            << "2. Meat pizza\n"
            << "3. Mozzarella\n"
            << "4. Pineapple pizza\n";
            removePizza();
            ok = true;
            break;
        case 3:
            completeOrder();
            return;
        default:
            break;
        }
        output();
    }

}

void Menu::addPizza()
{
    int num;
    while (true)
    {
        std::cin >> num;
        if(std::cin.fail()){
            std::cout << "Fail enter, please repeate\n";
            continue;
        }
        switch (num)
        {
        case 1:
            appender->append(order, new CheasePizza());
            return;
        case 2:
            appender->append(order, new MeatPizza());
            return;
        case 3:
            appender->append(order, new Mozzarella());
            return;
        case 4:
            appender->append(order, new PineapplePizza());
            return;
        default:
            break;
        }
    }
}

void Menu::removePizza()
{
    int num;
    while (true)
    {
        std::cin >> num;
        if(std::cin.fail()){
            std::cout << "Fail enter, please repeate\n";
            continue;
        }
        switch (num)
        {
        case 1:
            remover->remove(order, new CheasePizza());
            return;
        case 2:
            remover->remove(order, new MeatPizza());
            return;
        case 3:
            remover->remove(order, new Mozzarella());
            return;
        case 4:
            remover->remove(order, new PineapplePizza());
            return;
        default:
            break;
        }
    }
}

void Menu::completeOrder()
{
    order->cookingPizzes();
}
