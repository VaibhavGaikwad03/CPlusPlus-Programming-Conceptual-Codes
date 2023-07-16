#include "hello.h"

void demo::scan()
{
    printf("Enter 1st number : \n");
    scanf("%d", &iNo1);

    printf("Enter 2nd number : \n");
    scanf("%d", &iNo2);
}

void demo::print()
{
    printf("First number is %d\n", iNo1);
    printf("Second number is %d\n", iNo2);
}

int demo::addition()
{
    return iNo1 + iNo2;
}