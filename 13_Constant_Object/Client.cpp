#include "Server.hpp"

int main(void)
{
    demo obj1;
    const demo obj2;

    obj1.fun1();    //allowed
    obj1.fun2();    //allowed
    obj2.fun1();    //error
    obj2.fun2();    //allowed

    return 0;
}