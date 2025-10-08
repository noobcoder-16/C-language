#include <stdio.h>

int main()
{

    int price[5] = {500, 560, 650, 700, 580};

    for (int i = 0; i < 5; i++)
    {
        printf(" the price at index %d is %d\n", i, price[i]);
    }

    return 0;
}