//Write a program to find the largest of two numbers using if-else.

#include<stdio.h>
int main(){
 int num1,num2;

 printf("enter any two numbers :\n");
 scanf("%d %d",&num1,&num2);
 

 if(num1>num2){
    printf("the maximum num is : %d\n",num1);
 }
 else if (num1<num2){
    printf("the maximum number is : %d\n",num2);
 }
 else{
    printf("num1 is equal to num2\n");
 }
    return 0;
}