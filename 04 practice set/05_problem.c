//Write a program to sum first ten natural numbers using for loop

#include<stdio.h>
int main()
{

int i;
int sum = 0;

for(i=0;i<=10;i++){

    sum=i + sum;
}
printf("the sum of the ten natural number is : %d\n",sum);

    return 0;
}
