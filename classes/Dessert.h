#ifndef DESSERT_h
#define DESSERT_h

#include "MenuItem.h"

class Dessert : public MenuItem
{
private:
    bool hasTopping;

public:
    Dessert(string name, double price, bool hasT = false) : MenuItem(name, price), hasTopping(hasT) {}

    double calculatePrice() override;
    void setTopping(bool hasTopping);
};

/**
 * @brief Calculates the price of the dessert, adding 10 extra cost if it has a topping.
 *
 * @return The calculated price of the dessert.
 */
double Dessert::calculatePrice()
{
    if (hasTopping)
    {
        return price + 10;
    }
    return price;
}

/**
 * @brief Sets whether the dessert has a topping or not.
 *
 * @param hasTopping Whether the dessert has a topping or not.
 *
 * This function sets whether the dessert has a topping or not.
 * If the dessert has a topping, its price will be increased by 10 extra cost.
 */
void Dessert::setTopping(bool hasTopping)
{
    this->hasTopping = hasTopping;
}

#endif