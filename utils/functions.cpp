#include <bits/stdc++.h>
using namespace std;

/**
 * @brief Clears the terminal screen.
 *
 * This function uses the `system` function to call the appropriate command to clear the terminal screen.
 * On Windows, it calls `cls`, while on Unix, it calls `clear`.
 */

void cleanShell()
{
#ifdef _WIN32
    // Windows
    system("cls");
#else
    // Unix
    system("clear");
#endif
}

/**
 * @brief Creates a default menu for the restaurant.
 *
 * This function creates a default menu for the restaurant, containing some food, drink, and dessert items.
 * It is used to initialize the restaurant with some items.
 *
 * @return A vector of `MenuItem*` containing the default menu items.
 */
vector<MenuItem *> defaultMenu()
{
    vector<MenuItem *> menu;
    menu.push_back(new Food("Torta", 30));
    menu.push_back(new Food("Taco", 15));
    menu.push_back(new Food("Nuggets", 65));
    menu.push_back(new Drink("Coca", 10));
    menu.push_back(new Drink("Horchata", 15));
    menu.push_back(new Drink("Jamaica", 15));
    menu.push_back(new Dessert("Cheesecake", 30));
    menu.push_back(new Dessert("Brownie", 20));

    return menu;
}