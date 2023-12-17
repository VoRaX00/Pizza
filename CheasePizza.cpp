#include "CheasePizza.h"
#include "Chease.h"
#include "Salt.h"
CheasePizza::CheasePizza() : Pizza("Chease pizza", 200, "This is chease pizza", SIZE::s25)
{
    ingredients = std::vector<Ingredient*>{new Chease(), new Salt()};
}