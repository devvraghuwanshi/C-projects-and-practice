#include<stdio.h>
int main()
{

int a=1,b=0;
printf("the value of a and b is %d\n",a&&b);
printf("the value of a and b is %d\n",a||b);

char c='true',n='false';
printf("the value of c and n is %c\n",c&&n);
printf("the value of c and n is %c\n",c||n);

printf("the value of not(a)is %d\n",!a);


    return 0;
}