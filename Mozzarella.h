#pragma once
#include "Pizza.h"

class Mozzarella : public Pizza{
public:
    Mozzarella() : Pizza("Mozzarella", 100, "This is mozzarella", SIZE::s25){}
private:
};