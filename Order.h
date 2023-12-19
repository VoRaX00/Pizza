#pragma once
#include "Pizza.h"
#include <vector>
class Order : IOutput{
public:
    Order();

    void addPizza(std::shared_ptr<Pizza> pizza);
    void removePizza(std::shared_ptr<Pizza> pizza);
    void printPizzes();
    void cookingPizzes();

    void output() override;
private:
    std::vector<std::shared_ptr<Pizza>>pizzes;
};