#include <stdio.h>

void modifyChar(char *d)
{
    *d = 'Z'; // dereference and change the value
}

int main()
{
    char letter = 'O';

    printf("Before: %c\n", letter);

    modifyChar(&letter); // pass address of letter

    printf("After: %c\n", letter);


    return 0;
}
