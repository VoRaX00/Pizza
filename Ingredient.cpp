#include "Ingredient.h"
#include <iostream>
Ingredient::Ingredient(){}

Ingredient::Ingredient(std::string _name, unsigned _price)
{
    name = _name;
    price = _price;
}

void Ingredient::add()
{
    cnt++;
}

void Ingredient::remove()
{
    cnt--;
}

std::string Ingredient::getName()
{
    return name;
}

unsigned Ingredient::getPrice()
{
    return price;
}

unsigned Ingredient::getCnt()
{
    return cnt;
}

unsigned Ingredient::calcPrice()
{
    return cnt * price;
}

void Ingredient::output()
{
    std::cout << "Ingredient: " << name  << " Price: " << price <<" Count: " << cnt << std::endl;
}