#include "Server.hpp"

int main(void)
{
    demo obj1;
    obj1.display();
    demo obj2(10);
    obj2.display();
    demo obj3(20, 30);
    obj3.display();
    demo obj4(obj3);
    obj4.display();
    demo obj5(obj4, 40);
    obj5.display();

    return 0;
}