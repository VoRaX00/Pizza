#include "MeatPizza.h"
#include "Chease.h"
#include "Salt.h"
#include "Meat.h"

MeatPizza::MeatPizza() : Pizza("Meat pizza", 350, "This is meat pizza", SIZE::s25)
{
    ingredients = std::vector<std::shared_ptr<Ingredient>>{std::make_shared<Chease>(), 
    std::make_shared<Salt>(), std::make_shared<Meat>()};
}