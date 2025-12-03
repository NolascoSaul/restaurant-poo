#ifndef DRINK_h
#define DRINK_h

#include "MenuItem.h"
#include "Size.h"
class Drink : public MenuItem
{
private:
    Size size;

public:
    Drink(string name, double price, Size size = SMALL) : MenuItem(name, price), size(size) {}

    double calculatePrice() override;
    void setSize(Size size);
};

/**
 * @brief Calculates the price of a drink item, depending on its size.
 * @return The calculated price of the drink item.
 *
 * The price is calculated by adding a fixed amount to the base price, depending on the size of the drink.
 * For a small drink, the price is the base price.
 * For a medium drink, the price is the base price plus 10.
 * For a large drink, the price is the base price plus 15.
 */
double Drink::calculatePrice()
{
    switch (size)
    {
    case SMALL:
        return price;
        break;
    case MEDIUM:
        return price + 10;
        break;
    case LARGE:
        return price + 15;
        break;
    }
    return 0;
}

/**
 * @brief Sets the size of the drink item.
 *
 * @param size The new size of the drink item.
 *
 * This function sets the size of the drink item to the specified value.
 * The size is used to calculate the price of the drink item.
 * See `calculatePrice()` for more information on how the price is calculated based on the size.
 */
void Drink::setSize(Size size)
{
    this->size = size;
}

#endif