/*Write a program to change the value of a variable to ten times of its current
value*/
#include <stdio.h>

void changing_to_tentimes(int *);
void changing_to_tentimes(int *a)
{

    *a = *a * 10;
}
int main()
{

    int x = 10;

    printf("the value of x is %d\n", x);

    changing_to_tentimes(&x);

    printf("the value of x is %d\n ", x);

    return 0;
}