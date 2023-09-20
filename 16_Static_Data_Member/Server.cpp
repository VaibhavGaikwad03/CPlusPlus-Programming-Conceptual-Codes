#include "Server.hpp"
using std::cout;
using std::endl;

demo::demo()
{
    m_iNo1 = 10;
}

void demo::display()
{
    cout << m_iNo1 << endl;
    cout << m_iNo2 << endl;
    cout << m_iNo3 << endl;
}

int demo::m_iNo2 = 20;
int demo::m_iNo3 = 30;