#pragma once
#include "Order.h"
#include "Ingredient.h"
class Appender{
public:
    void Append(Order* order, Pizza* pizza);
    void Append(Pizza* pizza, Ingredient* ingredient);
};