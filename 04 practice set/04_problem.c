//Write a program to sum first ten natural numbers using do while loop

#include<stdio.h>
int main(){

int i=1;
int sum=0;

do{


sum = i + sum;
i++;

} while (i<=10);

printf("the sum of the first ten numbers is: %d\n",sum);


    return 0;
}