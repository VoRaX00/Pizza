#include "Mozzarella.h"
#include "Salt.h"
#include "CheaseMozzarella.h"
#include "Meat.h"

Mozzarella::Mozzarella() : Pizza("Mozzarella", 100, "This is mozzarella", SIZE::s25)
{
    ingredients = std::vector<Ingredient*>{new CheaseMozzarella(), new Salt(), new Meat()};
}