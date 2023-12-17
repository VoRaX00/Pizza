#pragma once
#include "Ingredient.h"
class Chease : public Ingredient{
public:
    Chease() : Ingredient("Chease", 10){}
    void output() override;
private:
};