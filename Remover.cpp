#include "Remover.h"

void Remover::remove(Order *order, Pizza *pizza)
{
    order->removePizza(pizza);
}

void Remover::remove(Pizza *pizza, Ingredient *ingredient)
{
    pizza->removeIngredient(ingredient);
}
