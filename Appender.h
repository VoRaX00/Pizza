#pragma once
#include "Order.h"

class Appender{
public:
    void append(Order* order, Pizza* pizza);
    void append(Pizza* pizza, Ingredient* ingredient);
};