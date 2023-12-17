#pragma once
#include "Ingredient.h"

class Meat : public Ingredient{
public:
    Meat() : Ingredient("Meat", 20){}
    void output() override;
private:
};