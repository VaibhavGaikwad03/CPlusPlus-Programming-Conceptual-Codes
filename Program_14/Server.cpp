#include "Server.hpp"

void demo::fun() const
{
    ((demo *)this)->m_iNo1 = 10;

    const_cast<demo *>(this)->m_iNo1 = 20;
}