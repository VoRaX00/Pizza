#pragma once
#include "Pizza.h"

class MeatPizza : public Pizza{
public:
    MeatPizza() : Pizza("Meat pizza", 350, "This is meat pizza", SIZE::s25){}
private:
};