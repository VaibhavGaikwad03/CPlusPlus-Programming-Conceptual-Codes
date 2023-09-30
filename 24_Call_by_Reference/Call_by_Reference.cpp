#include <iostream>
using std::cout;
using std::endl;

void fun(int &);

int main(void)
{
    int iNo = 10;
    cout << &iNo << endl; // 100
    cout << iNo << endl;  // 10

    fun(iNo);

    cout << iNo << endl; // 11, changes reflects

    return 0;
}

void fun(int &ref)
{
    cout << &ref << endl; // 100
    cout << ref << endl;  // 10
    ref++;
    cout << ref << endl; // 11
}