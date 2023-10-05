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

void base::fun4() // 4000
{
    cout << "In base fun4\n";
}

void derived1::fun2() // 5000
{
    cout << "In derived1 fun2\n";
}

void derived1::fun5() // 6000
{
    cout << "In derived1 fun5\n";
}

void derived1::fun6() // 7000
{
    cout << "In derived1 fun6\n";
}

void derived1::fun7() // 8000
{
    cout << "In derived1 fun7\n";
}

void derived2::fun1() // 9000
{
    cout << "In derived2 fun1\n";
}

void derived2::fun6() // 10000
{
    cout << "In derived2 fun6\n";
}

void derived2::fun8() // 11000
{
    cout << "In derived2 fun8\n";
}

void derived2::fun9() // 12000
{
    cout << "In derived2 fun9\n";
}