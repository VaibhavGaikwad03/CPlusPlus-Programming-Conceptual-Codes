#include "Server.hpp"

base::base()
{
    cout << "In base constructor\n";
}
base::~base()
{
    cout << "In base destructor\n";
}

derived::derived()
{
    cout << "In derived constructor\n";
}
derived::~derived()
{
    cout << "In derived destructor\n";
}