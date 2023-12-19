#pragma once
#include "Order.h"
#include <memory>

class Appender{
public:
    void append(std::shared_ptr<Order> order, std::shared_ptr<Pizza> pizza);
    void append(std::shared_ptr<Pizza> pizza, std::shared_ptr<Ingredient> ingredient);
};