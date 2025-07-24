#include <stdio.h>

int main()
{

    int marks[6];
    int i;

    printf(" enter the marks of 6 students\n ");

    // scanf("%d", &marks[0]);
    // scanf("%d", &marks[1]);
    // scanf("%d", &marks[2]);
    // scanf("%d", &marks[3]);
    // scanf("%d", &marks[4]);
    // scanf("%d", &marks[5]);

    for (i = 0; i < 6; i++)
    {
        scanf("%d", &marks[i]);
    }
    for (i = 0; i < 6; i++)
    {
        printf(" the value of marks at index %d is %d\n", i, marks[i]);
    }

    return 0;
}