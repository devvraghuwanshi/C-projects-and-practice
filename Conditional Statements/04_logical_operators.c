#include<stdio.h>
int main()
{
int a;
printf("enter the value of a\n",a);
scanf("%d",&a);

if(a>0&&a<10){

    printf("your entered value is between 0 and 10\n");
}
else{
    printf("your entered value does not lie 0 and 10\n");
}



    return 0;
}