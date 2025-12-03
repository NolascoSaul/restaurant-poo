#ifndef RESTAURANT_h
#define RESTAURANT_h

#include <vector>
#include "MenuItem.h"
#include "Table.h"
#include "Dessert.h"
#include "Drink.h"
#include "Food.h"

class Restaurant
{
private:
    vector<MenuItem *> menu;
    vector<Table *> tables;
    int numTables; // Tables available in the restaurant

public:
    Restaurant(int numTables = 10)
    {
        // Default menu
        menu.push_back(new Food("Torta", 30));
        menu.push_back(new Food("Taco", 15));
        menu.push_back(new Food("Nuggets", 65));
        menu.push_back(new Drink("Coca", 10));
        menu.push_back(new Drink("Horchata", 15));
        menu.push_back(new Drink("Jamaica", 15));
        menu.push_back(new Dessert("Cheesecake", 30));
        menu.push_back(new Dessert("Brownie", 20));
    }

    Restaurant(vector<MenuItem *> menu, vector<Table *> tables, int nTables = 10) : menu(menu), tables(tables), numTables(nTables) {}

    void addTable();
    void addMenuItem(MenuItem *item);
    void showMenu();
};

/**
 * @brief Adds a table to the restaurant.
 *
 * @param number The number of the table to add.
 *
 * This function adds a table to the restaurant's list of tables.
 * If there are available tables,
 * it adds a table with the given number to the list.
 * If there are no available tables, it prints a message saying so.
 */
void Restaurant::addTable()
{
    int nTable = tables.size();
    Table *t = new Table(nTable);

    if (nTable + 1 < numTables && nTable < numTables)
    {
        tables.push_back(t);
        return;
    }

    cout << "Ya no hay más mesas disponibles" << endl;
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