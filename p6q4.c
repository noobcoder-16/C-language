/* Write a function and pass the value by reference...*/

#include <stdio.h>

int return_value(int *r);
int return_value(int *r)
{

    return *r = 5;
}

int main()
{

    int x = 6;
    printf("the value of x is %d\n ", x);

    return_value(&x);

    printf(" the value of x is %d\n ", x);

    return 0;
}