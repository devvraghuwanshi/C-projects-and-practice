// Write a program using function to find average of three numbers
#include <stdio.h>

float number(int, int, int);
float number(int a, int b, int c)
{

    printf("the average of a,b and c  is : %f\n", (a + b + c) / 3.0);
    return (a + b + c) / 3.0;
}

int main()
{

    int a = 3;
    int b = 5;
    int c = 5;
    number(a, b, c);

    return 0;
}