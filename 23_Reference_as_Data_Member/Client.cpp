#include <iostream>
#include "Server.h"
using std::cout;
using std::endl;

int main(void)
{
    demo obj;
    obj.display();
    cout << sizeof(demo) << " " << sizeof(obj) << endl; // 16  16

    return 0;
}