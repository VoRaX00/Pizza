#include "Order.h"

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
