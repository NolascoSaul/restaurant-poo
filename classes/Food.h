#ifndef FOOD_h
#define FOOD_h

#include "MenuItem.h"

class Food : public MenuItem
{
private:
    bool isKidsMeal;

public:
    Food(string name, double price, bool isKM = false) : MenuItem(name, price), isKidsMeal(isKM) {}

    double calculatePrice() override;
    void setKidsMeal(bool isKM);
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

/**
 * @brief Sets whether the food item is a kids' meal or not.
 *
 * If the food item is a kids' meal, its price will be discounted by 20%.
 * @param isKM Whether the food item is a kids' meal or not.
 **/
void Food::setKidsMeal(bool isKM)
{
    isKidsMeal = isKM;
}

#endif