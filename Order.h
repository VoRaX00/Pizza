#pragma once
#include "Pizza.h"
#include <vector>
class Order : IOutput{
public:
    Order();
    void addPizza(Pizza* p);
    void output() override;
private:
    std::vector<Pizza*>pizzes;
};