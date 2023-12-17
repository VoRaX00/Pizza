#include "Remover.h"

void Remover::Remove(Order *order, Pizza *pizza)
{
    order->removePizza(pizza);
}

void Remover::Remove(Pizza *pizza, Ingredient *ingredient)
{
    pizza->removeIngredient(ingredient);
}
