#include <iostream>
using namespace std;

class base
{
public:
    base();
    base(int iNo);
};

class derived : public base
{
public:
    derived();
    derived(int iNo);
};