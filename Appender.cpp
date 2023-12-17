#include "Appender.h"

void Appender::append(Order *order, Pizza *pizza)
{
    order->addPizza(pizza);
}

void Appender::append(Pizza *pizza, Ingredient *ingredient)
{
    pizza->addIngredient(ingredient);
}
