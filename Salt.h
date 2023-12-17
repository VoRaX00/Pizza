#pragma once
#include "Ingredient.h"
#include "IOutput.h"
class Salt : public Ingredient{
public:
    Salt() : Ingredient("Salt", 5) {}
private:
};