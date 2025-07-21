#include <stdio.h>

int sum(int, int);

int sum(int a, int b)
{

    return a + b;
}

int main()
{

    int k = 7;
    int j = 8;

    sum(j, k);

    printf(" the value of a and b is %d\n ", sum(j, k));

    return 0;
}