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

    Customer() {}

    void setTable(Table table);
    void registerCustomer();

    string getName() { return name; }
    int isKid() { return age < 18; }
    int getTableNumber() { return assignedTable.getNumber(); }
};

/**
 * @brief Sets the table assigned to the customer.
 *
 * This function sets the table assigned to the customer.
 * It is used to update the table assigned to the customer.
 * @param table The table to assign to the customer.
 */
void Customer::setTable(Table table)
{
    assignedTable = table;
}

/**
 * @brief Registers a customer.
 *
 * This function registers a customer by asking for their name and age.
 * It sets the customer's name and age with the provided values.
 */
void Customer::registerCustomer()
{
    string name;
    int age;
    cout << "¡Bienvenido!" << endl;

    cout << "¿Cuál es tu nombre?: ";
    cin >> name;
    this->name = name;

    cout << "¿Cuál es tu edad?: ";
    cin >> age;
    this->age = age;
}

#endif