#include <iostream>
using namespace std;

class base
{
    int m_biPri;

protected:
    int m_biPro;

public:
    int m_biPub;

    void fun();
};

class derived : protected base
{
    int m_diPri;

protected:
    int m_diPro;

public:
    int m_diPub;

    void fun();
};