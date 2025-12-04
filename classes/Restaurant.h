#ifndef RESTAURANT_h
#define RESTAURANT_h

#include <vector>
#include <optional>
#include "MenuItem.h"
#include "Table.h"
#include "Dessert.h"
#include "Drink.h"
#include "Food.h"

class Restaurant
{
private:
    vector<MenuItem *> menu;
    vector<Table> tables;
    int numTables = 10; // Tables available in the restaurant

public:
    Restaurant() {}

    Restaurant(vector<MenuItem *> menu) : menu(menu) {}

    optional<Table> addTable();
    void addMenuItem(MenuItem *item);
    void showMenu();
};

/**
 * @brief Adds a table to the restaurant.
 *
 * This function adds a table to the restaurant and returns the added table.
 * If there are no more tables available, it prints an error message and exits the program.
 *
 * @return The added table.
 */
optional<Table> Restaurant::addTable()
{
    int nTable = tables.size();
    if (nTable < numTables)
    {
        Table t(nTable + 1);
        tables.push_back(t);
        return t;
    }

    cout << "Ya no hay más mesas disponibles" << endl;
    cout << "¡Vuelva pronto!" << endl;
    exit(0);
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
    cout << "-----MENU-----" << endl;
    for (int i = 0; i < menu.size(); i++)
    {
        cout << menu[i];
    }
}

#endif