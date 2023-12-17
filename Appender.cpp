#include "Appender.h"

void Appender::Append(Order *order, Pizza *pizza)
{
    order->addPizza(pizza);
}

void Appender::Append(Pizza *pizza, Ingredient *ingredient)
{
    pizza->addIngredient(ingredient);
}
