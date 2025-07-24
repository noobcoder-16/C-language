/*Write a program to print the value of a variable i by using “pointer to pointer” type
of variable.*/

#include <stdio.h>

int main()
{
    int i = 20;

    int *k = &i;
    int **j = &k;

    printf(" the value of i is %d\n", i);
    printf(" the value of i is %d\n", *k);
    printf(" the value of i is %d\n", **j);
   

    return 0;
}