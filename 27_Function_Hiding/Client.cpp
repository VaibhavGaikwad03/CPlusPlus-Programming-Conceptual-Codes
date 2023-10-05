#include <iostream>
#include "Server.h"

int main(void)
{
    base bobj;
    derived dobj;

    bobj.fun1();   // In base fun1
    bobj.fun1(10); // error
    bobj.fun2();   // In base fun2

    dobj.fun1();   // error
    dobj.fun1(10); // In derived fun1
    dobj.fun2();   // In base fun2

    return 0;
}