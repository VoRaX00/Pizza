#pragma once
#include "Order.h"

class Remover{
public:
    void Remove(Order* order, Pizza* pizza);
    void Remove(Pizza* pizza, Ingredient* ingredient);
};