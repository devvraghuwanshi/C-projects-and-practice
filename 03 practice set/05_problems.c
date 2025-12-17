/*Write a program to determine whether a character entered by the user is 
lowercase or not*/

#include<stdio.h>
int main()
{

char ch;
printf("enter any character:\n");
scanf("%c",&ch);
printf("the value of character is %d\n ",ch);

if(ch>=97 && ch<=122)
{

    printf("character is lowercase\n");
}
else{

    printf("character is not lower case\n");
}


  return 0;
}