#include <iostream>
using std::cout;
using std::endl;

int main(void)
{
    int iNo = 10;
    int &refiNo = iNo;

    cout << iNo << endl;
    cout << &iNo << endl;
    cout << refiNo << endl;
    cout << &refiNo << endl;

    return 0;
}