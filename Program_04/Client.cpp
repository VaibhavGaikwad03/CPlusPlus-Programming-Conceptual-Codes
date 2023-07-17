#include "Server.hpp"

int main(void)
{
    base bobj;
    derived dobj;

    bobj.m_iPub = 10; // allowed as public in base
    bobj.m_iPro = 20; // error because main is not a child
    bobj.m_iPri = 30; // error as private in base
    bobj.fun1();      // allowed as public in base
    bobj.fun2();      // error as protected in base
    bobj.fun3();      // error as private in base

    bobj.display(); // allowed as public in base
    dobj.display(); // allowed as public in derived

    return 0;
}