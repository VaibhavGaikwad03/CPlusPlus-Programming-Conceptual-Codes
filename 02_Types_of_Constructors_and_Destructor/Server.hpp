#include<iostream>
using namespace std;

class demo
{
    int iNo1;
    int iNo2;

public:
    demo();
    demo(int iNo);
    demo(int iParam1, int iParam2);
    demo(demo &refObj);
    // demo(demo &refObj, int iNo);
    demo(demo &refObj, int iNo1);
    ~demo();
    void display();
};