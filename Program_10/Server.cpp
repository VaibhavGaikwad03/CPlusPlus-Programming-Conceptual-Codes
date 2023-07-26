#include "Server.hpp"

base::base()
{
    cout << "In base default costructor\n";
}

base::base(int iNo)
{
    cout << "In base parameterized constructor\n";
}

derived::derived()
{
    cout << "In derived default constructor\n";
}

derived::derived(int iNo)
{
    cout << "In derived parameterized constructor\n";
}