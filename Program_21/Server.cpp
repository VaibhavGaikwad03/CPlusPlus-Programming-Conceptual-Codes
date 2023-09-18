#include <iostream>
#include "Server.h"
using std::cin;
using std::cout;
using std::endl;

demo::demo()
{
    iData = 0;
}

demo *demo::GetObject()
{
    if (pPtr == NULL)
    {
        pPtr = new demo;

        if (pPtr != NULL)
        {
            cout << "Object created\n";
            return pPtr;
        }
    }
    else
    {
        bool bRet = false;

        cout << "You can't create another object of singleton class\n";
        cout << "You want to use existing object (1/0) ?\n";
        cin >> bRet;

        if (bRet == true)
            return pPtr;
    }
    return NULL;
}

void demo::DeleteObject()
{
    if (pPtr != NULL)
    {
        delete pPtr;
        pPtr = NULL;
    }
    cout << "Object deleted\n";
}

void demo::SetData(int iParam)
{
    cout << "Setting data " << iParam << endl;
    iData = iParam;
}

void demo::GetData()
{
    cout << "Data is : " << iData << endl;
}

demo* demo::pPtr = NULL;