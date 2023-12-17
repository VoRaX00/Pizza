#pragma once
#include "Order.h"
class Menu : public IOutput{
public:
    Menu();
    void output() override;

private:
    Order* order;
};