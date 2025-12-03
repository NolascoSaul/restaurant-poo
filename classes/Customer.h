#ifndef CUSTOMER_h
#define CUSTOMER_h

#include <string>
#include "Table.h"
class Customer
{
private:
    string name;
    int age;
    Table assignedTable;

public:
    Customer(string name, int age, Table table) : name(name), age(age), assignedTable(table) {}
};

#endif