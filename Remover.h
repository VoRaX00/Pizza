#pragma once
#include "Order.h"
#include <memory>

class Remover{
public:
    void remove(std::shared_ptr<Order> order, std::shared_ptr<Pizza> pizza);
    void remove(std::shared_ptr<Pizza> pizza, std::shared_ptr<Ingredient> ingredient);
};