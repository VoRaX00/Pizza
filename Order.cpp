#include "Order.h"
#include <iostream>

Order::Order(){}

void Order::addPizza(std::shared_ptr<Pizza> pizza)
{
    pizzes.push_back(pizza);
}

void Order::removePizza(std::shared_ptr<Pizza> pizza)
{
    Pizza* it = nullptr;
    for(auto it = pizzes.begin(); it != pizzes.end(); it++){
        if(pizza->getName() == (*it)->getName()){
            pizzes.erase(it);
            return;
        }
    }
}

void Order::printPizzes()
{
    for(auto i : pizzes){
        i->output();
    }
}

void Order::cookingPizzes()
{
    std::cout << "Your order cooking!:D\n";
    pizzes.clear();
}

void Order::output()
{
    std::cout << "Order:\n";
    for(auto i : pizzes){
        i->output();
    }
}
