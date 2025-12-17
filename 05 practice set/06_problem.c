// Write a recursive function to calculate the sum of first ‘n’ natural numbers.
#include<stdio.h>

int sum(int);

int sum(int n){
    if( n== 1){
        return 1;
    }
    // sum(n)= 1+2+3+4+5+.....+n
    // sum(n) = sum(n-1)+ n
    return sum(n-1) + n;
}


int main(){
    int n = 10;
    printf("the sum of first %d natural number is : %d\n",n,sum(n));

    printf("the sum of first 5 natural number is : %d\n",sum(5));
    return 0;
}