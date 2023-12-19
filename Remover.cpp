#include "Remover.h"

void Remover::remove(std::shared_ptr<Order> order, std::shared_ptr<Pizza> pizza)
{
    order->removePizza(pizza);
}

void Remover::remove(std::shared_ptr<Pizza> pizza, std::shared_ptr<Ingredient> ingredient)
{
    pizza->removeIngredient(ingredient);
}
