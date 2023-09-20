#include "Server.hpp"
using std::cout;
using std::endl;

int main(void)
{   
    cout << demo::m_iNo1 << endl;   //error as not static
    cout << demo::m_iNo2 << endl;   //error as private
    cout << demo::m_iNo3 << endl;   //allowed as static

    demo obj;

    obj.display();  // 10  20  30
    obj.m_iNo1 = 10;    //error as private
    obj.m_iNo2 = 20;    //error as private
    obj.m_iNo3 = 30;    //allowed as public (we can use static data member with object also)

    cout << sizeof(demo) << endl;
    cout << sizeof(obj) << endl;

    return 0;
}