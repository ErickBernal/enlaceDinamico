// Programa en C++ para ilustrar el concepto de vinculación dinámica
#include <iostream>
using namespace std;

class Base
{
public:
    // función virtual
    virtual void func()
    {
        cout << "(Estoy en BASE).\n";
    }
};

//interfaz
class Derived : public Base
{
public:
    void func()
    {
        cout << "<Estoy en DERIVADO>.\n";
    }
};

int main()
{
    Base base;
    Derived derived;

    Base *basePtr = &base;
    basePtr->func();

    basePtr = &derived;
    basePtr->func();

    return 0;
}