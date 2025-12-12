#include<stdio.h>
int main (){

for(int i=0;i<15;i++){

    if(i==5){
        continue;
    }
    if(i==10){
        continue;
    }
    if(i==12){
        break;
    }
    printf("%d\n",i);


}


    return 0;
}