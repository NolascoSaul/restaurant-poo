#ifndef CUSTOMER_h
#define CUSTOMER_h

#include <string>
class Customer
{
private:
    string name;
    int assignedTable;

public:
    Customer(string name, int table) : name(name), assignedTable(table) {}
};

#endif