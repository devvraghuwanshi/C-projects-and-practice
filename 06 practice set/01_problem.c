/*Write a program to print the address of a variable. Use this address to get the 
 value of the variable.*/

 #include<stdio.h>
 int main(){
    int a = 5;
    int* i = &a;

    printf("the address of variable a is :%p\n ",&a);
    printf("the value of a is :%d\n",*i);
    return 0;
 }