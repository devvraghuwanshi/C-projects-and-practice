#include<stdio.h>
int main()
{

int age;

printf("enter your age \n");
scanf("%d",&age);

if (age>60){
    printf("you can drive and your are senior citizen\n");
}
else if(age>65){

    printf("you can drive but you need to be carefull  \n");

}
else{

    printf("you cannot drive\n");
}

    return 0;
}