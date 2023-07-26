#include <iostream>
using namespace std;

class base
{
public:
    base();
    ~base();
};

class derived : public base
{
public:
    derived();
    ~derived();
};