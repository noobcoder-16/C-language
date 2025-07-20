#include <stdio.h>

int main()
{

    int i = 72;

    int *j = &i;

    printf("address of i is %p\n", &i);
    printf("address of i is %p\n", j);

    printf(" the value of i at address of j is %d\n", *(&i));

    return 0;
}