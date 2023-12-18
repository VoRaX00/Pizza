#pragma once
#include "Order.h"
#include "Appender.h"
#include "Remover.h"
class Menu : public IOutput{
public:
    Menu();
    void output() override;

private:
    void addPizza();
    void removePizza();
    void completeOrder();
    void addIngredient(Pizza* pizza);
    void removeIngredient(Pizza* pizza);
    void addOrRemoveIngredient(Pizza* pizza);
    void setSize(Pizza* pizza);

private:
    Order* order;
    Appender* appender;
    Remover* remover;
};