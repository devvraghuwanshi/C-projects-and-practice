//Write a program to find greatest of four numbers entered by the user

#include<stdio.h>
int main()
{


int num1,num2,num3,num4;
printf("enter num1:\n");
scanf("%d",&num1);
printf("enter num2:\n");
scanf("%d",&num2);
printf("enter num3:\n");
scanf("%d",&num3);
printf("enter num4:\n");
scanf("%d",&num4);

printf("entered four numbers are: %d %d %d and %d\n",num1,num2,num3,num4);

if(num1>num2&&num1>num3&&num1>num4)
{

    printf("the greatest number is %d\n",num1);
}
else if(num2>num1&&num2>num3&&num2>num4)
{

    printf("the greatest number is %d\n",num2);
}
else if(num3>num1&&num3>num2&num3>num4)
{

    printf("the greatest number is %d\n",num3);
}
else if(num4>num1&&num4>num3&&num4>num2)
{

    printf("the greatest number is %d\n",num4);
}





    return 0;
}