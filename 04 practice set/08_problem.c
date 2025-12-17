#include<stdio.h>
int main(){

int product = 1;
int n = 0;


for(int i =1; i<=n;i++){

    product *= i;       //0! = 1
}
  printf("the factorial of %d is : %d\n",n,product);
    return 0;
}