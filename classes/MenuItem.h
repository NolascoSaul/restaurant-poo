#ifndef MENUITEM_h
#define MENUITEM_h

#include <string>

class MenuItem
{
protected:
    string name;
    double price;

public:
    MenuItem(string name, double price) : name(name), price(price) {}

    virtual double calculatePrice() = 0;

    string getName() { return name; }
    double getPrice() { return price; }
};

ostream &operator<<(ostream &out, MenuItem *item)
{
    out << item->getName() << " - $" << round(item->calculatePrice()) << endl;
    return out;
}

#endif