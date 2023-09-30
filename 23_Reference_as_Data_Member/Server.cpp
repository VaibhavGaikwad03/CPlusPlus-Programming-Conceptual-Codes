#include <iostream>
#include "Server.h"
using std::cout;
using std::endl;

demo::demo() : m_Ref(m_iNo)
{
    m_iNo = 10;
}

void demo::display()
{
    cout << m_iNo << " " << m_Ref << endl;
    cout << &m_iNo << " " << &m_Ref << endl;
}