//Write a function to calculate force of attraction on a body of mass ‘m’ exerted earth. Consider g = 9.8m/s2

#include<stdio.h>

float foa(float);
float foa(float m){

    return m*9.8;
}

int main(){
        float m = 50;
        
        printf("the force of attraction is : %.2f\n",foa( m));
    return 0;
}
