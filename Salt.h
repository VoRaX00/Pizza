#pragma once
#include "Ingredient.h"
#include "IOutput.h"
class Salt : public Ingredient, public  IOutput{
public:
    Salt() : Ingredient("Salt", 5) {}
    void output() override;
private:
};