#include <stdio.h>
int main()
{
    int age;

    printf("enter age\n", age);
    scanf("%d", &age);

    if (age > 10)
    {

        printf("your age is greater than 10\n");
    }
    else
    {

        printf("your age is not greater than 10\n");
    }
    return 0;
}