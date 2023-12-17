#include "Order.h"
#include <iostream>

Order::Order(){}

void Order::addPizza(Pizza *pizza)
{
    pizzes.push_back(pizza);
}

void Order::removePizza(Pizza *pizza)
{
    Pizza* it = nullptr;
    for(auto it = pizzes.begin(); it != pizzes.end(); it++){
        if(*pizza == *(*it)){
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
