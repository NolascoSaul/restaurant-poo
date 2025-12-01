#include <bits/stdc++.h>
using namespace std;

#include "classes/Drink.h"
#include "classes/Food.h"
#include "classes/MenuItem.h"
#include "classes/Size.h"

int main()
{
    MenuItem *d = new Drink("Coca", 10, MEDIUM);
    cout << d;
    return 0;
}