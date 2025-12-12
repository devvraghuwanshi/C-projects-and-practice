//Write a C program to check if a number is positive, negative, or zero.

#include<stdio.h>
int main(){
   int num;

   printf("enter any number :\n");
   scanf("%d",&num);
   
   if (num<0){
printf("entered number is negative\n");
}
else if(num>0){
    printf("entered number is positive\n");
}
else if(num==0){
    printf("entered number is equal to zero\n");
}
    return 0;
}