#include "PineapplePizza.h"
#include "Chease.h"
#include "Salt.h"
#include "Pineapple.h"

PineapplePizza::PineapplePizza() : Pizza("Pineapple pizza", 250, "This is pineapple pizza", SIZE::s25)
{
    ingredients = std::vector<Ingredient*>{new Chease(), new Salt(), new Pineapple()};
}