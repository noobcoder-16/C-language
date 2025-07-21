#include <stdio.h>

int main(){

    char i = 'B';
    char* j = &i;

    float k= 2.36;
    float*k1 = &k;  
    


    printf(" the address of i is %p\n", i);
    printf(" the address of i is %u\n" , *(&i));


    printf("the value of i at the address of j  is %c\n ", *(&i));
    printf("the value of k at the address of k1 is %.2f\n ", *(&k));
    



    return 0;
}