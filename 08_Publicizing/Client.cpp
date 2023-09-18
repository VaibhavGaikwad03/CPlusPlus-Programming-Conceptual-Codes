#include "Server.hpp"

int main(void)
{
    derived1 dobj1;

    dobj1.fun1();
    dobj1.fun2();
    dobj1.fun2(10);
    dobj1.fun3(); // error, private in derived1
    dobj1.fun4();
    dobj1.fun5();

    derived2 dobj2;

    dobj2.fun1();   // error as private in derived2
    dobj2.fun2();   // allowed as publicized under public
    dobj2.fun2(10); // allowed as publicized under public
    dobj2.fun3();   // error as private in derived
    dobj2.fun4();   // allowed as publicized under public
    dobj2.fun5();   // error as private in derived

    return 0;
}