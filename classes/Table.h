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
    int getNumber() { return number; }
    void calculateTotal();
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

/**
 * @brief Calculates the total cost of all orders at the table.
 *
 * This function loops through all the orders at the table and calculates the total cost of each order.
 * It then prints out the total cost of each order.
 *
 * @details This function uses the `calculateOrder` function of the `Order` class to calculate the total cost of each order.
 * It then prints out the total cost of each order, preceded by the order number.
 */

void Table::calculateTotal()
{
    for (int i = 0; i < orders.size(); i++)
    {
        cout << "Orden " << i + 1 << endl;
        double total = orders[i].calculateOrder();
        cout << "Total: $" << total << endl;
    }
}

#endif