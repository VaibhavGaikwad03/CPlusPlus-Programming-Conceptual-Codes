#include "Server.hpp"

int main(void)
{
    int iNo1;
    int iNo2;
    int iAns;

    calculation obj1;

    iAns = obj1.addition();

    cout << "OBJ1 : Answer is : " << iAns << endl;

    cout << "Enter two numbers : \n";
    cin >> iNo1 >> iNo2;

    calculation obj2(iNo1, iNo2);

    iAns = obj2.addition();

    cout << "OBJ2 : Answer is : " << iAns << endl;

    cin.get();

    return 0;
}