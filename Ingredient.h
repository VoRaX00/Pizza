#pragma once
#include <string>
#include "IOutput.h"

class Ingredient : public IOutput{
public:
    Ingredient();
    Ingredient(std::string _name, unsigned _price);

    unsigned getPrice();
    unsigned getCnt();
    unsigned calcPrice();

    void output() override;

protected:
    std::string name;
    unsigned price;
    unsigned cnt = 1;
};