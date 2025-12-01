#ifndef RESTAURANT_h
#define RESTAURANT_h

#include <vector>
#include "MenuItem.h"
#include "Table.h"

class Restaurant
{
private:
    vector<MenuItem *> menu;
    vector<Table> tables;

public:
    Restaurant() {}
    Restaurant(vector<MenuItem *> menu, vector<Table> tables) : menu(menu), tables(tables) {}

    void addTable(int number);
    void addMenuItem(MenuItem *item);
    void showMenu();
};

/**
 * @brief Adds a table to the restaurant.
 *
 * @param number The number of the table to add.
 *
 * This function adds a table to the restaurant's list of tables.
 * It is used to keep track of all the tables in the restaurant.
 */
void Restaurant::addTable(int number)
{
    tables.push_back(Table(number));
}

/**
 * @brief Adds a menu item to the restaurant's menu.
 *
 * @param item The menu item to add.
 *
 * This function adds a menu item to the restaurant's list of menu items.
 * It is used to keep track of all the menu items in the restaurant.
 */
void Restaurant::addMenuItem(MenuItem *item)
{
    menu.push_back(item);
}

/**
 * @brief Prints all the menu items in the restaurant.
 *
 * This function prints all the menu items in the restaurant, using the
 * overloaded `<<` operator for `MenuItem` objects.
 */
void Restaurant::showMenu()
{
    for (int i = 0; i < menu.size(); i++)
    {
        cout << menu[i];
    }
}

#endif