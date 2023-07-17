#include "Server.hpp"

demo::demo()
{
    cout << "In  default constructor\n";
    iNo1 = 0;
    iNo2 = 0;
}

demo::demo(int iNo)
{
    cout << "In parameterized constructor\n";
    iNo1 = iNo2 = iNo;
}

demo::demo(int iParam1, int iParam2)
{
    cout << "In parameterized costructor\n";
    iNo1 = iParam1;
    iNo2 = iParam2;
}

demo::demo(demo &refObj)
{
    cout << "In copy constructor 1\n";
    iNo1 = refObj.iNo1;
    iNo2 = refObj.iNo2;
}

// demo::demo(demo &refObj, int iNo)
// {
//     cout<<"In copy counstructor 2\n";
//     iNo1 = refObj.iNo1 + iNo;
//     iNo2 = refObj.iNo2 + iNo;
// }

demo::demo(demo &refObj, int iNo1)
{
    cout << "In copy counstructor 2\n";
    iNo1 = refObj.iNo1 + iNo1;
    iNo2 = refObj.iNo2 + iNo1;
}

demo::~demo()
{
    cout << "In destructor\n";
    iNo1 = iNo2 = 0;
}

void demo::display()
{
    cout << "iNo1 : " << iNo1 << endl;
    cout << "iNo2 : " << iNo2 << endl;
}