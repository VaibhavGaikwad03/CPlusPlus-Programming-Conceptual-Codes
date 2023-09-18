#include "Server.hpp"

demo::demo(int iParam) : m_iNo2(++iParam), m_iNo3(++iParam), m_iNo1(++iParam) {}

void demo::display()
{
    cout << m_iNo1 << endl;
    cout << m_iNo2 << endl;
    cout << m_iNo3 << endl;
}