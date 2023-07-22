#include "Server.hpp"

int main(void)
{
    base bobj;
    derived dobj;

    bobj.m_biPri = 10; // error as private in base
    bobj.m_biPro = 20; // error as protected in base
    bobj.m_biPub = 30; // allowed as public in base

    dobj.m_biPri = 40; // error as private in derived
    dobj.m_biPro = 50; // error as protected in derived
    dobj.m_biPub = 60; // error as protected in derived
    
    dobj.m_diPri = 70; // error as private in drived
    dobj.m_diPro = 80; // error as protected in derived
    dobj.m_diPub = 90; // allowed as public in derived

    bobj.fun(); // allowed as public in base
    dobj.fun(); // allowed as public in derived

    return 0;
}