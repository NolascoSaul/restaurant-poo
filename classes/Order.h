#ifndef ORDER_h
#define ORDER_h

#include <vector>
#include "MenuItem.h"

class Order
{
private:
    vector<MenuItem *> items;

public:
    Order(vector<MenuItem *> items) : items(items) {}
    Order() {}

    void addItem(MenuItem *item);
    double calculateOrder();
};

/**
 * @brief Adds an item to the order.
 *
 * @param item The item to add.
 */
void Order::addItem(MenuItem *item)
{
    cout << "Se agregó " << item->getName() << " a su orden" << endl;
    items.push_back(item);
}

/**
 * @brief Calculates the total price of all items in the order.
 *
 * @return The total price of all items in the order.
 */
double Order::calculateOrder()
{
    double sum = 0;
    for (int i = 0; i < items.size(); i++)
    {
        sum += items[i]->calculatePrice();
    }
    return sum;
}

#endif