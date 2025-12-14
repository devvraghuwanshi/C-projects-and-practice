#include<stdio.h>

int sum(int , int);//fumction prototype

//fumction defination
int sum(int x , int y){

    printf("the sum is :%d\n",x+y);
    return x+y;
}

int main(){

    int a = 2;
    int b = 1;

    sum(a,b);//function call

    int a1 = 10;
    int b1 = 10;

    sum(a1,b1);//function call

    int a2 = 34;
    int b2 = 2;

    sum(a2,b2);//function call




return 0;
}