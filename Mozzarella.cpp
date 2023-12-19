#include "Mozzarella.h"
#include "Salt.h"
#include "CheaseMozzarella.h"
#include "Meat.h"

Mozzarella::Mozzarella() : Pizza("Mozzarella", 100, "This is mozzarella", SIZE::s25)
{
    ingredients = std::vector<std::shared_ptr<Ingredient>>{std::make_shared<CheaseMozzarella>(),
    std::make_shared<Salt>(), std::make_shared<Meat>()};
}