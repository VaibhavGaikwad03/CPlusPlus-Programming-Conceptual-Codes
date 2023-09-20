#include <iostream>
#include "Server.h"
using std::cin;
using std::cout;
using std::endl;

demo::demo()
{
    m_iData = 0;
}

demo *demo::GetObject()
{
    if (m_pPtr == NULL)
    {
        m_pPtr = new demo;

        if (m_pPtr != NULL)
        {
            cout << "Object created\n";
            return m_pPtr;
        }
    }
    else
    {
        bool bRet = false;

        cout << "You can't create another object of singleton class\n";
        cout << "You want to use existing object (1/0) ?\n";
        cin >> bRet;

        if (bRet == true)
            return m_pPtr;
    }
    return NULL;
}

void demo::DeleteObject()
{
    if (m_pPtr != NULL)
    {
        delete m_pPtr;
        m_pPtr = NULL;
    }
    cout << "Object deleted\n";
}

void demo::SetData(int iParam)
{
    cout << "Setting data " << iParam << endl;
    m_iData = iParam;
}

void demo::GetData()
{
    cout << "Data is : " << m_iData << endl;
}

demo* demo::m_pPtr = NULL;