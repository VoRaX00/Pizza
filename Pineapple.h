#pragma once
#include "Ingredient.h"
#include "IOutput.h"
class Pineapple : public Ingredient, public IOutput{
public:
    Pineapple() : Ingredient("Pineapple", 10){}
    void output() override;
};