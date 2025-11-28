//write a program that take only valid percentage input 
#include<stdio.h>
int main(){
    float per;
    printf("enter percentage");
    scanf("%f",&per);
    if(per>0 && per<=100){
        printf("valid");
    }else{
        printf("invalid");
    }
    return 0;
    
}