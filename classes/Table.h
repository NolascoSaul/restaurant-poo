#ifndef TABLE_h
#define TABLE_h

#include "Order.h"

class Table
{
private:
    int number;
    vector<Order> orders;

public:
    Table(int number, vector<Order> orders) : number(number), orders(orders) {}

    Table(int number = 1) : number(number) {}

    void addOrder(Order order);
};

/**
 * @brief Adds an order to the table.
 *
 * @param order The order to add to the table.
 *
 * This function adds an order to the table's list of orders.
 * It is used to keep track of all the orders placed at the table.
 */
void Table::addOrder(Order order)
{
    orders.push_back(order);
}

#endif