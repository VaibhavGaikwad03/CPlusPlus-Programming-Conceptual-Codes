#include <iostream>
#include "Server.h"
using std::cout;

void base::fun1()
{
    cout << "In base fun1\n";
}

void base::fun2()
{
    cout << "In base fun2\n";
}

void derived::fun1(int iNo) // function hiding 
{
    cout << "In derived fun1\n";
}