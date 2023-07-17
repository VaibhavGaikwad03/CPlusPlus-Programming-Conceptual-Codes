#include "Server.hpp"

int main(void)
{
    demo obj;

    obj.fun1();
    obj.fun2();

    cout << &obj;
    obj.fun3();

    demo obj2;
    obj2 = obj.fun4();
    obj.display();
    obj2.display();

    demo *pPtr = NULL;

    pPtr = obj.fun5();
    pPtr->display();

    return 0;
}