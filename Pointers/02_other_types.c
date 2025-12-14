#include<stdio.h>
int main (){

char i = 'c';
char *j = &i;

float k = 2.55;
float *k1 = &k;
printf("the address of i is : %p\n ",&i);
printf("the address of i is : %u\n ",&i);
printf("the address of i is : %p\n ",j);
printf("the value at address j is %c\n",*(&i));




    return 0;
}