#include <iostream>
#include "Server.h"
using std::cout;

void base::fun1()
{
    cout << "In base fun1 0\n";
}

void base::fun1(int iNo)
{
    cout << "In base fun1 1\n";
}

void base::fun2()
{
    cout << "In base fun2 0\n";
}

void base::fun2(int iNo)
{
    cout << "In base fun2 1\n";
}

void base::fun3()
{
    cout << "In base fun3\n";
}

void derived::fun1() // function hiding
{
    cout << "In derived fun1\n";
}

void derived::fun2(int iNo1, int iNo2) // hiding
{
    cout << "In derived fun2\n";
}

void derived::fun4()
{
    cout << "In derived fun4\n";
}