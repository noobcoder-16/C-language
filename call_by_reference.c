#include <stdio.h>

int sum(int *, int *);

int sum(int *a, int *b)
{

    *a = 9;

    return *a + *b;
}

int main()
{

    int j = 1;
    int k = 8;

    printf("the value of 1 and 8 is %d\n", sum(&j, &k));
    printf("the value of j is %d\n", j);

    return 0;
}