#include <iostream>
#include "Server.h"
using std::cout;
using std::endl;

int main(void)
{
    base bobj;
    derived dobj;

    base *bp = NULL;
    derived *dp = NULL;

    bobj.fun1();   // In base fun1
    bobj.fun2();   // In base fun2
    bobj.fun3();   // In base fun3
    bobj.fun4(10); // In base fun4
    // bobj.fun5();   // error
    cout << endl;

    dobj.fun1();   // In derived fun1
    dobj.fun2();   // In base fun2
    dobj.fun3();   // In base fun3
    dobj.fun4(10); // In derived fun4
    dobj.fun5();   // In derived fun5
    dobj.fun6();   // In derived fun6

    cout << endl;

    bp = &bobj;
    bp->fun1();   // In base fun1
    bp->fun2();   // In base fun2
    bp->fun3();   // In base fun3
    bp->fun4(10); // In base fun4
    // bp->fun5();   // error

    cout << endl;

    dp = &dobj;
    dp->fun1();   // In derived fun1
    dp->fun2();   // In base fun2
    dp->fun3();   // In base fun3
    dp->fun4(10); // In derived fun4
    dp->fun5();   // In derived fun5
    dp->fun6();   // In derived fun6

    cout << endl;

    bp = &dobj;   // upcasting
    bp->fun1();   // In base fun1
    bp->fun2();   // In base fun2
    bp->fun3();   // In base fun3
    bp->fun4(10); // In derived fun4
    // bp->fun5();   // error

    cout << endl;

    // dp = &bobj; // error

    base &bref = dobj; // upcasting
    bref.fun1();       // In base fun1
    bref.fun2();       // In base fun2
    bref.fun3();       // In base fun3
    bref.fun4(10);     // In derived fun4
    // bref.fun5();       // error

    // derived &dref = bobj; // error

    return 0;
}