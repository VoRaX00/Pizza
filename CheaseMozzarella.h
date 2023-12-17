#pragma once
#include "Ingredient.h"
#include "IOutput.h"

class CheaseMozzarella : public Ingredient, public IOutput{
public:
    CheaseMozzarella() : Ingredient("Chease Mozzarella", 275){}
    void output() override;
};