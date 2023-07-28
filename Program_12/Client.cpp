#include "Server.hpp"

int main(void)
{
    demo obj;

    obj.fun1();
    obj.display();
    obj.fun2();
    obj.display();
    obj.fun3(&obj);

    return 0;
}