/*Write a program using a function which calculates the sum and average of two
numbers. Use pointers and print the values of sum and average in main()*/

// very good question.

#include <stdio.h>

int *sum(int, int);
int *sum(int a, int b)
{
    int s = a + b;
    int *ptr = &s;
    printf("the sum is : %d\n", s);
    return ptr;
}
float *avg(float a, float b)
{
    float average = (a + b) / 2.0;
    float *ptr = &average;
    printf("the average is :%f\n", average);
    return ptr;
}

int main()
{

    int x = 2;
    int y = 4;
    int *ptr1;
    float *ptr2;

    ptr1 = sum(x, y);
    ptr2 = avg(x, y);

    printf("the address of sum is %u and of average is %u\n", ptr1, ptr2);

    return 0;
}