#include "Server.hpp"
using std::cout;
using std::endl;

int main(void)
{
    base bobj;
    derived dobj;

    cout << base::m_iNo2 << endl;   //allowed
    cout << derived::m_iNo2 << endl;    //allowed
    cout << bobj.m_iNo1 << endl;    //allowed
    cout << bobj.m_iNo2 << endl;    //allowed
    cout << dobj.m_iNo1 << endl;    //allowed
    cout << dobj.m_iNo2 << endl;    // allowed

    bobj.m_iNo1++;
    bobj.m_iNo2++;

    cout << base::m_iNo2 << endl;
    cout << derived::m_iNo2 << endl;
    cout << bobj.m_iNo1 << endl;
    cout << bobj.m_iNo2 << endl;
    cout << dobj.m_iNo1 << endl;
    cout << dobj.m_iNo2 << endl;

    cout << sizeof(base);
    cout << sizeof(derived);

    return 0;
}