#include "MeatPizza.h"
#include "Chease.h"
#include "Salt.h"
#include "Meat.h"

MeatPizza::MeatPizza() : Pizza("Meat pizza", 350, "This is meat pizza", SIZE::s25)
{
    ingredients = std::vector<Ingredient*>{new Chease(), new Salt(), new Meat()};
}