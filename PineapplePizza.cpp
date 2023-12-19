#include "PineapplePizza.h"
#include "Chease.h"
#include "Salt.h"
#include "Pineapple.h"

PineapplePizza::PineapplePizza() : Pizza("Pineapple pizza", 250, "This is pineapple pizza", SIZE::s25)
{
    ingredients = std::vector<std::shared_ptr<Ingredient>>{std::make_shared<Chease>(), 
    std::make_shared<Salt>(), std::make_shared<Pineapple>()};
}