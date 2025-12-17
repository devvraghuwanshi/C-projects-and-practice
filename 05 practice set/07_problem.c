/* Write a program using function to print the following pattern (first n lines)
*
* * *
* * * * *

*/

#include <stdio.h>
int main()
{
    for (int i = 0; i < 3; i++)
    {
        // if i = 0 ---> prints 1 star
        // if i = 1 ---> prints 3 star
        // if i = 2 ---> prints 5 star
        //  no_of_stars = (2*i+1)
        // this loop prints 2*i+1 stars
        for (int j = 0; j < (2 * i + 1); j++)
        {
            printf("*");
        }

        // this printf prints new line
        printf("\n");
    }
    return 0;
}