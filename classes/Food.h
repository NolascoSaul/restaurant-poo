#ifndef FOOD_h
#define FOOD_h

#include "MenuItem.h"

class Food : public MenuItem
{
private:
    bool isKidsMeal;

public:
    Food(string name, double price, bool isKM) : MenuItem(name, price), isKidsMeal(isKM) {}

    double calculatePrice() override;
};

/**
 * @brief Calculates the price of a food item, applying a 20% discount if it is a kids' meal.
 * @return The calculated price of the food item.
 */
double Food::calculatePrice()
{
    if (isKidsMeal)
    {
        return price * 0.8;
    }
    return price;
}

#endif