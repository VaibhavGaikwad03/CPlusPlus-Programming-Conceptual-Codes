#include <iostream>
#include "Server.h"
using std::cout;

int main(void)
{
    // demo obj;   //error

    demo *pObject = NULL;

    pObject = demo::GetObject();

    if (pObject == NULL)
    {
        cout << "Object not created\n";
        return -1;
    }

    pObject->GetData();
    pObject->SetData(10);
    pObject->GetData();

    // pObject->DeleteObject();
    pObject = demo::GetObject();

    if (pObject == NULL)
    {
        cout << "Object not created\n";
        return -1;
    }

    pObject->GetData();

    pObject->DeleteObject();

    return 0;
}