#include <iostream>
#include "Server.h"
using std::cout;

void base::fun1() // 1000
{
    cout << "In base fun1\n";
}

void base::fun2() // 2000
{
    cout << "In base fun2\n";
}

void base::fun3() // 3000
{
    cout << "In base fun3\n";
}

void base::fun4(int iNo) // 4000
{
    cout << "In base fun4\n";
}

void derived::fun1() // 5000
{
    cout << "In derived fun1\n";
}

void derived::fun4(int iNo) // 6000
{
    cout << "In derived fun4\n";
}

void derived::fun5() // 7000
{
    cout << "In derived fun5\n";
}

void derived::fun6() // 8000
{
    cout << "In derived fun6\n";
}