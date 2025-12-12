//print a loop to print number from 1-100 but skip numbers divisible by 7.


#include<stdio.h>
int main (){


int i;

for ( i=1; i<=100 ; i++){
  if( i%7 == 0){
    continue;
  }
printf("%d\n",i);
}

    return 0;
}