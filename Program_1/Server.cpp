#include "Server.hpp"

calculation::calculation()
{
    m_iNo1 = 0;
    m_iNo2 = 0;
}

calculation::calculation(int iParam1, int iParam2)
{
    m_iNo1 = iParam1;
    m_iNo2 = iParam2;
}

int calculation::addition()
{
    return m_iNo1 + m_iNo2;
}