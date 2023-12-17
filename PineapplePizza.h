#pragma once
#include "Pizza.h"

class PineapplePizza : public Pizza{
public:
    PineapplePizza() : Pizza("Pineapple pizza", 250, "This is pineapple pizza", SIZE::s25){}
private:
};