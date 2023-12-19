#include "Menu.h"
#include "Mozzarella.h"
#include "MeatPizza.h"
#include "CheasePizza.h"
#include "PineapplePizza.h"
#include "Salt.h"
#include "Chease.h"
#include "CheaseMozzarella.h"
#include <iostream>
#include <stdlib.h>
#include <limits>

Menu::Menu()
{
    order = std::make_shared<Order>();
    appender = std::make_shared<Appender>();
    remover = std::make_shared<Remover>();
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
        if(std::cin.fail()){ //проверка если введено не число
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
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
        system("clear");
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
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Fail enter, please repeate\n";
            continue;
        }
        switch (num)
        {
            case 1:
            {
                std::shared_ptr<Pizza> pizza = std::make_shared<CheasePizza>();
                appender->append(order, pizza);
                setSize(pizza);
                addOrRemoveIngredient(pizza);
                return;
            }
            case 2:
            {
                std::shared_ptr<Pizza> pizza = std::make_shared<MeatPizza>();
                appender->append(order, pizza);
                setSize(pizza);
                addOrRemoveIngredient(pizza);
                return;
            }
            case 3:
            {
                std::shared_ptr<Pizza> pizza = std::make_shared<Mozzarella>();
                appender->append(order, pizza);
                setSize(pizza);
                addOrRemoveIngredient(pizza);
                return;
            }
            case 4:
            {
                std::shared_ptr<Pizza> pizza = std::make_shared<PineapplePizza>();
                appender->append(order, pizza);
                setSize(pizza);
                addOrRemoveIngredient(pizza);
                return;
            }
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
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Fail enter, please repeate\n";
            continue;
        }
        switch (num)
        {
        case 1:
            remover->remove(order, std::make_shared<CheasePizza>());
            return;
        case 2:
            remover->remove(order, std::make_shared<MeatPizza>());
            return;
        case 3:
            remover->remove(order, std::make_shared<Mozzarella>());
            return;
        case 4:
            remover->remove(order, std::make_shared<PineapplePizza>());
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

void Menu::addIngredient(std::shared_ptr<Pizza> pizza)
{
    int num;
    while (true)
    {
        std::cout << "What ingredient do you want to add?\n"
        <<"1.Salt\n"
        <<"2.Chease\n"
        <<"3.All right\n";
        std::cin >> num;

        if(std::cin.fail()){ //проверка если введено не число
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Fail enter, please repeate\n";
            continue;
        }

        switch (num)
        {
            case 1:
                appender->append(pizza, std::make_shared<Salt>());
                break;
            case 2:
                if(pizza->getName() != "Mozzarella")
                    appender->append(pizza, std::make_shared<Chease>());
                else
                    appender->append(pizza, std::make_shared<CheaseMozzarella>());
                break;
            case 3:
                pizza->updatePrice();
                return;
            default:
                break;
        }
    }
}

void Menu::removeIngredient(std::shared_ptr<Pizza> pizza)
{
    int num;
    while (true)
    {
        std::cout << "What ingredient do you want to remove?\n"
        <<"1.Salt\n"
        <<"2.Chease\n"
        <<"3.All right\n";
        std::cin >> num;

        if(std::cin.fail()){ //проверка если введено не число
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Fail enter, please repeate\n";
            continue;
        }

        switch (num)
        {
            case 1:
                remover->remove(pizza, std::make_shared<Salt>());
                break;
            case 2:
                if(pizza->getName() != "Mozzarella")
                    remover->remove(pizza, std::make_shared<Chease>());
                else
                    remover->remove(pizza, std::make_shared<CheaseMozzarella>());
                break;
            case 3:
                addOrRemoveIngredient(pizza);
                return;
            default:
                break;
        }
    }
}

void Menu::addOrRemoveIngredient(std::shared_ptr<Pizza> pizza)
{
    int num;
    while(true){
        std::cout << "Do you want to add or remove ingredient?\n"
        <<"1.Add\n"
        <<"2.Remove\n"
        <<"3.Nothing\n";

        std::cin >> num;

        if(std::cin.fail()){ //проверка если введено не число
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Fail enter, please repeate\n";
            continue;
        }

        switch (num)
        {
            case 1:
                addIngredient(pizza);
                break;
            case 2:
                removeIngredient(pizza);
                break;
            case 3:
                pizza->updatePrice();
                return;
            default:
                break;
        }
    }
}

void Menu::setSize(std::shared_ptr<Pizza> pizza)
{
    int num;
    while(true){
        std::cout << "Choose size pizza:\n"<< "1. 25\n" << "2. 30\n" <<"3. 35\n" << "4. 40\n";
        std::cin >> num;
        if(std::cin.fail()){ //проверка если введено не число
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Fail enter, please repeate\n";
            continue;
        }
        switch (num)
        {
        case 1:
        {
            pizza->setSize(SIZE::s25);
            return;
        }
        case 2:
        {
            pizza->setSize(SIZE::s30);
            return;
        }
        case 3:
        {
            pizza->setSize(SIZE::s35);
            return;
        }
        case 4:
        {
            pizza->setSize(SIZE::s40);
            return;
        }
        
        default:
            break;
        }
    }
}