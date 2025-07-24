/*Try problem 3 using call by value and verify that it does not change the value of
the said variable.*/

#include <stdio.h>
int change_to_ten_times(int a);

int change_to_ten_times(int a)
{
    return a = a * 10;
}
int main()
{

    int x = 5;
    printf(" the value of x is %d\n", x);

    change_to_ten_times(x);

    printf(" the value of x is now 10 times bigger than previous %d\n", x); // here the value will be the same //
    
    return 0;
}