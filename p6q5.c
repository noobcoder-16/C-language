/*. Write a program using a function which calculates the sum and average of two
numbers. Use pointers and print the values of sum and average in main().*/

#include <stdio.h>

int sum(int *a, int *b);
int sum(int *a, int *b)
{

    return *a + *b;
}
float average(int *a, int *b);
float average(int *a, int *b)
{

    return (*a + *b) / 2.00;
}

int main()
{
    int a = 8;
    int b = 7;

    printf(" the sum of a and b is %d\n", sum(&a, &b));
    printf(" the average of a and b is %.2f\n", average(&a, &b));

    return 0;
}