// write a program to check whether given number is prime number or not.

#include <stdio.h>
int main()
{

    int not_prime = 0;
    int n;

    printf("enter any number :\n");
    scanf("%d", &n);

    if (n == 0 || n == 1)
    {
        not_prime = 1;
    }

    else
    {

        for (int i = 2; i < n; i++)
        {

            if (n % i == 0 && n != 2)
            { // n!=2 since it does not satisfies as 2%2=0;
                not_prime = 1;
                break;
            }
        }
    }
    if (not_prime)
    {

        printf("%d is  not prime\n", n);
    }
    else
    {
        printf("%d is  prime\n", n);
    }

    return 0;
}