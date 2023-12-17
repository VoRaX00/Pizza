#pragma once
#include "Order.h"
#include "Appender.h"
#include "Remover.h"
class Menu : public IOutput{
public:
    Menu();
    void output() override;
    void addPizza();
    void removePizza();
    void completeOrder();

private:
    Order* order;
    Appender* appender;
    Remover* remover;
};