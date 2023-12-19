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
    void addIngredient(std::shared_ptr<Pizza> pizza);
    void removeIngredient(std::shared_ptr<Pizza> pizza);
    void addOrRemoveIngredient(std::shared_ptr<Pizza> pizza);
    void setSize(std::shared_ptr<Pizza> pizza);

private:
    std::shared_ptr<Order> order;
    std::shared_ptr<Appender> appender;
    std::shared_ptr<Remover> remover;
};