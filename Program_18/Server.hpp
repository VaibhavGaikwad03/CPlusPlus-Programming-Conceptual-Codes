#include <iostream>

class base
{
public:
    int m_iNo1;
    static int m_iNo2;

    base();
};

class derived : public base
{ };