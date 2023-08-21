#include "Server.hpp"
using std::cout;
using std::endl;


int main(void)
{
    demo::fun1();   //error as non static
    demo::fun2();   //allowed as static and public

    demo obj;
    obj.fun1();     //allowed
    obj.fun2();     //allowed, called internally by classsname

    return 0;
}