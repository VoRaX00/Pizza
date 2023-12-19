#include "Appender.h"

void Appender::append(std::shared_ptr<Order> order, std::shared_ptr<Pizza> pizza)
{
    order->addPizza(pizza);
}

void Appender::append(std::shared_ptr<Pizza> pizza, std::shared_ptr<Ingredient> ingredient)
{
    pizza->addIngredient(ingredient);
}
