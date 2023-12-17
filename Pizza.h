#pragma once
#include <string>
#include <vector>
#include "IOutput.h"
#include "Ingredient.h"

enum class SIZE{
    s25,
    s30,
    s35,
    s40
};

class Pizza : public IOutput{
public:
    Pizza();
    Pizza(std::string _name, unsigned _price, std::string _about, SIZE _size);
    
    void addIngredient(Ingredient* ingredient);
    void removeIngredient(Ingredient* ingrdient);

    std::string getName();
    std::string getAbout();
    unsigned getSize();
    unsigned getPrice();

    void output() override;

protected:
    void updatePrice();

protected:
    std::vector<Ingredient*>ingredients;

    std::string name;
    std::string about;
    SIZE size;
    unsigned price;
};