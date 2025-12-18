/*Write a program to print the value of a variable i by using “pointer to pointer” type
of variable. */

#include <stdio.h>

int main()
{
    int i = 6;
    int *j = &i;
    int **k = &j;

    printf("the address of i is :%u\n", &i);
    printf("the address of i is :%u\n", j);
    printf("the address of i is :%u\n", *(&j));
    printf("the address of i is :%u\n", k);

    printf("the address of i is : % u\n", **k); // answer

    return 0;
}