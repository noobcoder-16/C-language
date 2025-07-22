/*Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to
a function and print its address. Are these addresses same? Why? */


#include <stdio.h>

int returning_5(int*ptr);

int returning_5(int*ptr){
    printf("the address of ptr is %p\n", (void*)ptr);
    printf("the value at ptr is %d\n", *ptr);

    return 5;

}


int main()
{

    int i = 2;
    int *ptr = &i;

    printf("the address of i is %p\n", (void*)&i);

    returning_5(ptr);
    
   
    return 0;
}