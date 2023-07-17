#include "Server.hpp"

void base::fun1()
{
    cout << "In fun1\n";
}

void base::fun2()
{
    cout << "In fun2\n";
}

void base::fun3()
{
    cout << "In fun3\n";
}

void base::display()
{
    cout << m_iPri << endl;
    cout << m_iPub << endl;
    cout << m_iPro << endl;
}

void derived::display()
{
    cout << m_iPri << endl; // error as private in base
    cout << m_iPro << endl; // allowed as protected in base
    cout << m_iPub << endl; // allowed as public in base
}