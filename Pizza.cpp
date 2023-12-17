#include "Pizza.h"
#include <iostream>
Pizza::Pizza(){}

Pizza::Pizza(std::string _name, unsigned _price, std::string _about, SIZE _size)
{
    name = _name;
    price = _price;
    about = _about;
    size = _size;
}

void Pizza::output()
{
    std::cout << "Pizza: " << name <<" Price: " << price << " Size: " << getSize() <<std::endl
    << "About: " << about << std::endl;
    for(auto i : ingredients){
        i->output();
    }
}

std::string Pizza::getName()
{
    return name;
}

std::string Pizza::getAbout()
{
    return about;
}

unsigned Pizza::getSize()
{
    switch (size)
    {
    case SIZE::s25:
        return 25;
    case SIZE::s30:
        return 30;
    case SIZE::s35:
        return 35;
    case SIZE::s40:
        return 40;
    default:
        return 0;
    }
}

unsigned Pizza::getPrice()
{
    updatePrice();
    return price;
}

void Pizza::updatePrice()
{
    unsigned newPrice = 30;
    for(auto i : ingredients){
        newPrice += i->calcPrice();
    }
    price = newPrice;
}
