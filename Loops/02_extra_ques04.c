//write a program to print a triangle of numbers where each row contains a palindromic  sequence of numbers


#include<stdio.h>
int main(){
    int N;


    printf("enter numbers of rows : \n");
    scanf("%d",N);


    for(int i=1;i<=N;i++){
            //print increasing sequence 
            for(int j=1;j<=i;j++){
                printf("%d ",j);
            }
            //print decreasing series
            for(int j= i-1;j>= 1;j--){
                printf("%d ",j);
            }

    }
 printf("\n");


    return 0;
}