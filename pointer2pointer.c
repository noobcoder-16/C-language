#include <stdio.h>

int main()
{
    int i = 8;

    int *k = &i;
    int **j = &k;

    printf(" the value of i is %d\n", i);
    printf(" the value of i is %d\n", *k);
    printf(" the value of i is %d\n", **(&k));
    printf(" the value of i is %d\n", *(&i));

    return 0;
}