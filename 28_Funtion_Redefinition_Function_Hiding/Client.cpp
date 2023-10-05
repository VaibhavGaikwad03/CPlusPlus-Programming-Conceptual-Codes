#include <iostream>
#include "Server.h"

int main(void)
{
    base bobj;
    derived dobj;

    bobj.fun1();   // In base fun1 0
    bobj.fun1(10); // In base fun1 1
    bobj.fun2();   // In base fun2 0
    bobj.fun2(20); // In base fun2 1
    // bobj.fun2(10, 20); // error
    bobj.fun3(); // In base fun3
    // bobj.fun4();       // error

    dobj.fun1(); // In derived fun1
    // dobj.fun1(10);     // error
    // dobj.fun2();       // error
    // dobj.fun2(20);     // error
    dobj.fun2(10, 20); // In derived fun2
    dobj.fun3();       // In base fun3
    dobj.fun4();       // In derived fun4

    return 0;
}