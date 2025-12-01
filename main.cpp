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

int main()
{
    MenuItem *d = new Drink("Coca", 10, MEDIUM);
    MenuItem *f = new Food("Nuggets", 80, true);

    Restaurant r;
    r.addMenuItem(d);
    r.addMenuItem(f);

    r.showMenu();
    return 0;
}