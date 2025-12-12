/*Write a program that checks if a number is:

Positive, negative, or zero.
Even or odd.*/

#include<stdio.h> 
int main()
{

    int num;

    printf("enter number :\n");
    scanf("%d", &num);

    if (num < 0 && num % 2 == 0)
    {

        printf("number is negative and even\n");
    }

    else if (num < 0 && num % 2 != 0)
    {
        printf("number is negative and odd\n");
    }
    else if (num > 0 && num % 2 == 0)
    {
        printf("number is poisitive and even\n");
    }
    else if (num < 0 && num % 2 != 0)
    {
        printf("number is negative and even\n");
    }
    else
    {
        printf("number is equal to zero\n");
    }
    return 0;
}