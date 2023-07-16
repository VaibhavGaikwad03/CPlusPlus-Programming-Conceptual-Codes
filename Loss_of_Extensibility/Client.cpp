#include "hello.h"

int main(void)
{
    int iRet = 0;
    struct demo obj;

    obj.scan();
    obj.print();

    iRet = obj.addition();

    printf("Addition is : %d\n", iRet);

    return 0;
}