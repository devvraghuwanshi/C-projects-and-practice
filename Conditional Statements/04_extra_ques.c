/*Given an amount to withdraw (multiples of ₹100), check:

If withdrawal is possible based on balance.
If the amount is a multiple of ₹100.
Deduct ₹10 transaction fee if successful*/


#include<stdio.h>
int main(){

    int withdraw;
    float balance;

    printf("enter your balance : $\n");
    scanf("%f",&balance);

    printf("enter amount to withdraw (multiple of 100) : $\n");
    scanf("%d",&withdraw);

    if(withdraw%100 != 0){
        printf("invalid amount ! please enter multiples of $100\n");
    }
    else if (withdraw + 10 > balance ){
        printf("insufficient balance!!\n");
    }
    else{

        balance -= (withdraw + 10);
        printf("withdraw sucessfull ! new balance : $%f\n",balance);
    }
    return 0;
}