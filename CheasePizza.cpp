#include "CheasePizza.h"
#include "Chease.h"
#include "Salt.h"
CheasePizza::CheasePizza() : Pizza("Chease pizza", 200, "This is chease pizza", SIZE::s25)
{
    ingredients = std::vector<std::shared_ptr<Ingredient>>{std::make_shared<Chease>(), 
    std::make_shared<Salt>()};
}