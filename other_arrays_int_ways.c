#include <stdio.h>

int main()
{
    int cgpa[4] = {7, 8, 9, 10};
    int i;

    for (i = 0; i < 4; i++)
    {
        printf(" the value of cgpa at index %d is %d\n", i, cgpa[i]);
    }

    return 0;
}