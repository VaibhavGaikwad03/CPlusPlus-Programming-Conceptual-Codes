#include "Server.hpp"
using std::cout;
using std::endl;

demo::demo()
{
    cout << "In constructor\n";
}

demo::~demo()
{
    cout << "In destructor\n";
}

void fun1()
{
    cout << "In fun1\n";
    demo obj;
    cout << "Leaving fun1\n";
}

void fun2()
{
    cout << "In fun2\n";
    static demo obj;
    cout << "Leaving fun2\n";
}