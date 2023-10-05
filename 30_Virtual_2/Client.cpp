#include <iostream>
#include "Server.h"
using std::cout;
using std::endl;

int main(void)
{
    derived1 dobj1;
    derived2 dobj2;

    base *bp = NULL;
    derived1 *dp = NULL;

    bp = &dobj1;

    bp->fun1(); // In base fun1
    bp->fun2(); // In derived1 fun2
    bp->fun3(); // In base fun3
    bp->fun4(); // In base fun4
    // bp->fun5(); // error

    bp = &dobj2;

    bp->fun1(); // In derived2 fun1
    bp->fun2(); // In derived1 fun2
    bp->fun3(); // In base fun3
    bp->fun4(); // In base fun4
    // bp->fun5(); // error

    dp = &dobj2;

    dp->fun1(); // In derived2 fun1
    dp->fun2(); // In derived1 fun2
    dp->fun3(); // In base fun3
    dp->fun4(); // In base fun4
    dp->fun5(); // In derived1 fun5
    dp->fun6(); // In derived2 fun6
    dp->fun7(); // In derived1 fun7
    // dp->fun8(); // error

    return 0;
}