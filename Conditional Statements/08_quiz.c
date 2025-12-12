#include <stdio.h>
int main()
{

    char grade;
    int marks;

    printf("enter marks of the stduent\n");
    scanf("%d", &marks);

    if (marks <= 100 && marks >= 90)
    {

        printf("grade==A\n");
    }
    else if(marks <= 90 && marks >= 80)
    {

        printf("grade==B\n");
    }
    else if(marks <= 80 && marks >= 70)
    {

        printf("grade==C\n");

    }
    else if(marks <= 70 && marks >= 60)
    {

        printf("grade==D\n");
    }
    else if(marks <= 60 && marks >= 50)
    {

       printf("grade==E\n");

    }
    else
    {

        printf("grade==F\n");

    }

    return 0;
}