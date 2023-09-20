#include "Server.hpp"
using std::cout;
using std::endl;


int main(void)
{
    cout << "In main\n";
    cout << "Calling fun1\n";

    fun1();

    cout << "Calling fun2\n";

    fun2();

    cout << "Leaving main\n";

    return 0;
}