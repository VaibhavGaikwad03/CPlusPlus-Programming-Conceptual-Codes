#include "Server.hpp"

void base::fun()
{
    m_biPri = 10; // as our members all allowed to access
    m_biPro = 20;
    m_biPub = 30;
}

void derived::fun()
{
    m_biPri = 10; // error as private in base
    m_biPro = 20; // allowed as protected in base
    m_biPub = 30; // allowed as public in base
    m_diPri = 40; // allowed as in same class
    m_diPro = 50; // allowed as in same class
    m_diPub = 60; // allowed as in same class
}