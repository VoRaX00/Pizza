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
    
    void addIngredient(std::shared_ptr<Ingredient> ingredient);
    void removeIngredient(std::shared_ptr<Ingredient> ingredient);

    std::string getName();
    std::string getAbout();
    unsigned getSize();
    unsigned getPrice();
    void updatePrice();

    void setSize(SIZE _size);

    void output() override;

    bool operator == (Pizza& pizza);

protected:
    
    //Ingredient* findIngredient(Ingredient* ingredient);
    std::shared_ptr<Ingredient> findIngredient(std::shared_ptr<Ingredient> ingredient);

protected:
    //std::vector<Ingredient*>ingredients;
    std::vector<std::shared_ptr<Ingredient>>ingredients;

    std::string name;
    std::string about;
    SIZE size;
    unsigned price;
};