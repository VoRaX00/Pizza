#pragma once
#include <string>
#include "IOutput.h"

enum class SIZE{
    s25,
    s30,
    s35,
    s40
};

class Pizza : public IOutput{
public:
    Pizza();
    
    void output() override;
    std::string getName();
    std::string getAbout();
    SIZE getSize();
    unsigned getPrice();

protected:
    virtual void updatePrice();

protected:
    std::string name;
    std::string about;
    SIZE size;
    unsigned price;
};