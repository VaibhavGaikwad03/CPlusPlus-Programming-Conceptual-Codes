#include "Server.hpp"
using std::cout;
using std::endl;

int main(void)
{
    demo obj1;
    demo obj2;

    cout << demo::m_iNo2 << endl;                       // allowed
    obj1.display();         //10   20
    obj2.display();         //10   20
    obj1.m_iNo1++;          //11
    obj2.m_iNo2++;          //21

    obj1.display();         //11   21
    obj2.display();         //10   21

    return 0;
}