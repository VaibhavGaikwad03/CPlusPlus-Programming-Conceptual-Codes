#include <iostream>
using std::cout;
using std::endl;

int main(void)
{
    int iNo = 10;
    int &ref1 = iNo;
    int &ref2 = iNo;
    int &ref3 = iNo;

    cout << iNo << " " << ref1 << " " << ref2 << " " << ref3 << endl;
    cout << &iNo << " " << &ref1 << " " << &ref2 << " " << &ref3 << endl;

    return 0;
}