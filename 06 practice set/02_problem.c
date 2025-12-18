/*Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to 
a function and print its address. Are these addresses same? Why*/

#include<stdio.h>
int address(int);

int returning_3(int* ptr){
    printf("the value of ptr is %d\n",ptr);
    printf("the value at ptr is %d\n",*ptr);

    return 3;
}

int main(){
 
    int i = 2;
    int* ptr = &i;

    printf("the address of i is :%u\n",&i);

    returning_3(ptr);

    return 0;
}