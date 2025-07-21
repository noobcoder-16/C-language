#include <stdio.h>

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int x, y;
    


    x = 7;
    y = 9;

    printf("the value of xis %d and yis %d\n ", x, y);

    swap(&x, &y);
     printf("the value of xis %d and yis %d\n ", x, y);
    return 0;
}