#include <iostream>
using std::cout;
using std::endl;

int main(void)
{
    int iNo = 10;
    int *pPtr = &iNo;
    int *(&ref) = pPtr;

    cout << pPtr << " " << ref << endl;   // 100  100
    cout << *pPtr << " " << *ref << endl; // 10   10

    return 0;
}