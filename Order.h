#pragma once
#include "Pizza.h"
#include <vector>
class Order : IOutput{
public:
    Order();

    void addPizza(Pizza* pizza);
    void removePizza(Pizza* pizza);
    void printPizzes();
    void cookingPizzes();

    void output() override;
private:
    std::vector<Pizza*>pizzes;
};