#include <bits/stdc++.h>
using namespace std;

#include "classes/Customer.h"
#include "classes/Drink.h"
#include "classes/Food.h"
#include "classes/MenuItem.h"
#include "classes/Order.h"
#include "classes/Restaurant.h"
#include "classes/Size.h"
#include "classes/Table.h"
#include "classes/Dessert.h"
#include "utils/functions.cpp"

int main()
{
    // Default menu
    MenuItem *torta = new Food("Torta", 30);
    MenuItem *taco = new Food("Taco", 15);
    MenuItem *nuggets = new Food("Nuggets", 65);
    MenuItem *coca = new Drink("Coca", 10);
    MenuItem *horchata = new Drink("Horchata", 15);
    MenuItem *jamaica = new Drink("Jamaica", 15);
    MenuItem *cheesecake = new Dessert("Cheesecake", 30);
    MenuItem *brownie = new Dessert("Brownie", 20);

    Restaurant restaurant;
    restaurant.addMenuItem(torta);
    restaurant.addMenuItem(taco);
    restaurant.addMenuItem(nuggets);
    restaurant.addMenuItem(coca);
    restaurant.addMenuItem(horchata);
    restaurant.addMenuItem(jamaica);
    restaurant.addMenuItem(cheesecake);
    restaurant.addMenuItem(brownie);

    cleanShell();
    auto table = restaurant.addTable();

    Customer customer;
    customer.registerCustomer();
    customer.setTable(*table);

    cleanShell();

    restaurant.showMenu();
    this_thread::sleep_for(chrono::seconds(3));
    cleanShell();

    Order order;

    // Example for Food
    cout << "Se agregará una torta a su orden." << endl;
    Food *tortaFood = dynamic_cast<Food *>(torta);
    if (customer.isKid())
    {
        tortaFood->setKidsMeal(true);
        cout << "Se le realizó un descuento debido a que es porción para niño." << endl;
    }
    order.addItem(tortaFood);
    this_thread::sleep_for(chrono::seconds(3));
    cleanShell();

    // Example for Drink
    cout << "Se agregará una coca a su orden." << endl;
    Size size;
    cout << "Ingrese el tamaño de su bebida (s, m, l): ";
    cin >> size;
    Drink *cocaDrink = dynamic_cast<Drink *>(coca);
    cocaDrink->setSize(size);
    order.addItem(cocaDrink);
    this_thread::sleep_for(chrono::seconds(3));
    cleanShell();

    // Example for Dessert
    cout << "Se agregará un brownie a su orden." << endl;
    char topping;
    cout << "¿Desea agregar un topping? (s/n): ";
    cin >> topping;
    Dessert *brownieDessert = dynamic_cast<Dessert *>(brownie);
    if (topping == 's')
    {
        brownieDessert->setTopping(true);
    }
    order.addItem(brownieDessert);
    this_thread::sleep_for(chrono::seconds(3));
    cleanShell();

    double total = order.calculateOrder();
    cout << customer.getName() << " su total es $" << total << endl;
    return 0;
}