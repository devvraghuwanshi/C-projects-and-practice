// Write a function to convert Celsius temperature into Fahrenheit

#include<stdio.h>

float c2f(float );

float c2f(float c){
    
 return ((c*9)/5)+32;
}

int main(){
    float c = 25;
    
    printf("the conversion from celsius to farenheit is %f\n",c2f(c));
    

    return 0;
}