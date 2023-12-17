#pragma once
#include "Pizza.h"
class CheasePizza : public Pizza{
public:
    CheasePizza() : Pizza("Chease pizza", 200, "This is chease pizza", SIZE::s25){}
private:
};