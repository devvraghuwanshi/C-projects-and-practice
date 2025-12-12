// Write a program that takes a single digit (0-9) as input and prints its word representation using if-else.

#include <stdio.h>
int main()
{

    int num;

    printf("enter number between (0-9) :\n");
    scanf("%d", &num);

    if (num == 0)
    {
        printf("zero\n");
    }
    else if (num == 1)
    {
        printf("one\n");
    }
    else if (num == 2)
    {
        printf("two\n");
    }
    else if (num == 3)
    {
        printf("three\n");
    }
    else if (num == 4)
    {
        printf("four\n");
    }
    else if (num == 5)
    {
        printf("five\n");
    }
    else if (num == 6)
    {
        printf("six\n");
    }
    else if (num == 7)
    {
        printf("seven\n");
    }
    else if (num == 8)
    {
        printf("eight\n");
    }
    else if (num == 9)
    {
        printf("nine\n");
    }
    else
    {
        printf("invalid number : please enter number between (0-9)\n");
    }

    return 0;
}