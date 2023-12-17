#pragma once
#include "Order.h"

class Remover{
public:
    void remove(Order* order, Pizza* pizza);
    void remove(Pizza* pizza, Ingredient* ingredient);
};